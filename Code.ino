#include <Servo.h>

Servo warningServo;

// Ultrasonic sensor pins
const int trigPin = 9;
const int echoPin = 10;

// Buzzer pin
const int buzzerPin = 8;

// Servo pin
const int servoPin = 6;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  warningServo.attach(servoPin);
  warningServo.write(0);

  Serial.begin(9600);
}

void loop() {

  // Send ultrasonic signal
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Receive reflected signal
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in cm
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // If object/snake comes close
  if (distance > 0 && distance <= 50) {

    // Buzzer ON
    digitalWrite(buzzerPin, HIGH);

    // Move servo to warning position
    warningServo.write(90);

    delay(300);

  } else {

    // Buzzer OFF
    digitalWrite(buzzerPin, LOW);

    // Servo back to normal position
    warningServo.write(0);
  }

  delay(100);
}