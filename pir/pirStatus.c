#define Ch1 0
#define Ch2 1

int pirPin = 2;

void setup()  {
   Serial.begin(9600);
   pinMode(pirPin, INPUT);
}

void loop(){
   int pirVal = digitalRead(pirPin);
   int val1 = analogRead(Ch1);
   int val2 = analogRead(Ch2);
   float v1 = val1*5.0/1023;
   float v2 = val2*5.0/1023;

   if(pirVal == LOW){
     // Do Nothing
   }

   Serial.print(v1);
   Serial.print(" ");
   Serial.println(v2);
   // Serial.println(v1);
   delay(100);
}

