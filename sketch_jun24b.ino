int Led1=13;
int Led2=12;
int Led3=11;
int Led4=10;
unsigned long previousMillis = 0;       
long OnTime = 1500;           
long OffTime = 2000;
long waitTime=1000;
long lwaitTime=2000;
long swaitTime=500;
int ledstate = HIGH; 

void setup() {
  // put your setup code here, to run once:
pinMode(Led1,OUTPUT);
pinMode(Led2,OUTPUT);
pinMode(Led3,OUTPUT);
pinMode(Led4,OUTPUT);

digitalWrite(Led1,ledstate);
digitalWrite(Led2,ledstate);
digitalWrite(Led3,ledstate);
digitalWrite(Led4,ledstate);
}

void loop() {
  // put your main code here, to run repeatedly:

  unsigned long currentMillis = millis();
 
  if((ledstate == HIGH) && (currentMillis - previousMillis >= waitTime))
  {
    ledstate = LOW;  
    previousMillis = currentMillis;  
    digitalWrite(Led1, ledstate);  
  }
  else if ((ledstate == LOW) && (currentMillis - previousMillis >= waitTime))
  {
    ledstate = HIGH;  
    previousMillis = currentMillis;  
    digitalWrite(Led1, ledstate);   
  }



  if((ledstate == HIGH) && (currentMillis - previousMillis >= lwaitTime))
  {
    ledstate = LOW;  
    previousMillis = currentMillis;  
    digitalWrite(Led2, ledstate);  
  }
  else if ((ledstate == LOW) && (currentMillis - previousMillis >= lwaitTime))
  {
    ledstate = HIGH;  
    previousMillis = currentMillis;  
    digitalWrite(Led2, ledstate);  
  }


  if((ledstate == HIGH) && (currentMillis - previousMillis >= waitTime))
  {
    ledstate = LOW;  
    previousMillis = currentMillis;  
    digitalWrite(Led3, ledstate);  
  }
  else if ((ledstate == LOW) && (currentMillis - previousMillis >= swaitTime))
  {
    ledstate = HIGH;  
    previousMillis = currentMillis;  
    digitalWrite(Led3, ledstate);  
  }


  if((ledstate == HIGH) && (currentMillis - previousMillis >= OnTime))
  {
    ledstate = LOW;  
    previousMillis = currentMillis;  
    digitalWrite(Led3, ledstate);  
  }
  else if ((ledstate == LOW) && (currentMillis - previousMillis >= OffTime))
  {
    ledstate = HIGH;  
    previousMillis = currentMillis;  
    digitalWrite(Led3, ledstate);  
  }

}
