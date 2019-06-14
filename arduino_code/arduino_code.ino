

char ser;

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:


  if (Serial.available() > 0) {
    ser = Serial.read();


    if (ser == '1') {
      digitalWrite(8, LOW);
      digitalWrite(13, HIGH);
    }
    else if (ser == '0') {
      digitalWrite(13, LOW);
      digitalWrite(8, HIGH); 
     
    }
  }
}
