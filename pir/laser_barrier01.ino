#define LASER_PIN 5
#define LASER_THRESHOLD 600
#define LASER_TRIGGER_ANALOG_PIN 0

int laserVal;

void setup()
 {
     pinMode(LASER_PIN,OUTPUT);
     digitalWrite(LASER_PIN,LOW);
     digitalWrite(LASER_PIN,HIGH); //turn on the laser
     Serial.begin(9600);
 }

void loop()
 {
     laserVal = analogRead(LASER_TRIGGER_ANALOG_PIN);
     delay(1000);
     //Serial.println(laserVal);
     if(laserVal &lt; LASER_THRESHOLD)
     {
        digitalWrite(LASER_PIN,LOW); //turn off the laser
        //Scrivi qui il codice che viene eseguito quando il fascio viene interrotto
        delay(100);
        digitalWrite(LASER_PIN,HIGH); //turn on the laser
     }
 }
