void setup()  
{ 
  pinMode(13, OUTPUT);
}  
void loop()
{  
  led1();
}  

void led1(){
  // 1000 / 4 equals to ~4 pulses per sec.
 	digitalWrite(13, HIGH);  // turn the LED on (HIGH is the voltage level)
 	delay(1000 / 4);         // wait for a second
	digitalWrite(13, LOW);   // turn the LED off by making the voltage LOW
  delay(1000 / 4);
}