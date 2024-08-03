const int trigPin = 9;
const int echoPin = 10;
const int ledPin = 6;
const int buzzerPin = 5;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  long duration, distance;

  // Send a pulse to the ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the response from the ultrasonic sensor
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;  // Convert the duration to distance (in cm)

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance < 50) {  // If an object is detected within 50 cm
    digitalWrite(ledPin, HIGH);  // Turn on the LED
    tone(buzzerPin, 1000);  // Activate the buzzer with a 1 kHz tone
    delay(500);  // Keep the LED and buzzer on for 0.5 seconds
    noTone(buzzerPin);  // Turn off the buzzer
  } else {
    digitalWrite(ledPin, LOW);  // Turn off the LED
  }

  delay(500);  // Wait for 0.5 seconds before measuring again
}
