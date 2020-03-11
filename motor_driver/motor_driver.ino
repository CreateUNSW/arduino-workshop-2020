#define enA 9
#define in1 8
#define in2 7 

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 200);
}

void loop() {
//   analogWrite(enA, );
}
