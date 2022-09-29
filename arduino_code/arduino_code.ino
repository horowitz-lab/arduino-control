
//this will alternate actuating two valves
char ser;
char prevser;

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);

  // need to run Serial.read() before setting any voltages.
  prevser = '2';
  ser = '2';
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if (Serial.available() > 0) {
    ser = Serial.read();

    if (ser != prevser) {

      if (ser == '1') {
        digitalWrite(8, LOW);
        digitalWrite(13, HIGH);
      }
      else if (ser == '0') {
        digitalWrite(13, LOW);
        digitalWrite(8, HIGH); 
      }

      // If we need to code in a delay before dropping the voltage 
      // to medium, that's going to be tricky because we want to 
      // also check for new instructions.
      
      // return to a medium-high state to avoid burning the board
      if (ser == '1') { // 13 was high
        digitalWrite(12, MEDIUM); // still need to define MEDIUM
      }
      else if (ser == '0') { // 8 was high
        digitalWrite(8, MEDIUM);
      }
    }
    prevser = ser;
  }

  
}
