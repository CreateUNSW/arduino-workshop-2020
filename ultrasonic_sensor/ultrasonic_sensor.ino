#include <math.h>

// defines pins numbers
const int trigPin_left = 9;
const int echoPin_left = 8;
const int trigPin_right = 11;
const int echoPin_right = 10;

// defines variables
long duration_left;
double distance_left;
long duration_right;
double distance_right;

int centre_distance = 9;

void setup() {
  pinMode(trigPin_left, OUTPUT); 
  pinMode(echoPin_left, INPUT); 
  pinMode(trigPin_right, OUTPUT); 
  pinMode(echoPin_right, INPUT);
  Serial.begin(9600); 
}
void loop() {
  //LEFT SIDE
  // Clears the trigPin
  //digitalWrite(trigPin_left, LOW);
  //delayMicroseconds(2);
  
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin_left, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin_left, LOW);
  
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration_left = pulseIn(echoPin_left, HIGH);

  // Calculating the distance
  distance_left = duration_left * 0.034 / 2;

  //RIGHT SIDE
  // Clears the trigPin
  //digitalWrite(trigPin_right, LOW);
  //delayMicroseconds(2);
  
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin_right, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin_right, LOW);
  
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration_right = pulseIn(echoPin_right, HIGH);

  // Calculating the distance
  distance_right = duration_right * 0.034 / 2;
  //double difference = abs(distance_left - distance_right);
  double angle = atan(abs(distance_left - distance_right)/centre_distance)*180/22*7;
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance left: ");
  Serial.println(distance_left);
  Serial.print("Distance right: ");
  Serial.println(distance_right);
  Serial.print("Angle: ");
  Serial.println(angle);
  delay(1000);
}
