
char ser;

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly: 
  
  
  if(Serial.available()> 0){
    ser = Serial.read();
    
    
  if (ser == '1'){
   digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(1000); }
  else if (ser == '0'){
    digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
    }
  }
}
 