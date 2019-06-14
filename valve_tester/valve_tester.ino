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


    if (ser == '0') {
      digitalWrite(8, LOW);
      digitalWrite(13, HIGH);
      Serial.write("LH ");
    }
    else if (ser == '1') {
      digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
      digitalWrite(13, LOW);
     Serial.write("LL ");
    }

    else if (ser == '2') {
      digitalWrite(8, HIGH);
      digitalWrite(13, LOW); 
      Serial.write("HL ");
    }
    if (ser == '3') {
      digitalWrite(8, HIGH);
      digitalWrite(13, HIGH);
      Serial.write("HH ");
    }
    
  }
}
