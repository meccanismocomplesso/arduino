#include <WiFi101.h>
 
char ssid[] = "your_network"; 
char pass[] = "your_password";     
int status = WL_IDLE_STATUS;     
byte mac[6];                     
 
void setup()
{
 Serial.begin(9600);
 
 status = WiFi.begin(ssid, pass);
 
 if ( status != WL_CONNECTED) { 
    Serial.println("Couldn't get a wifi connection");
    while(true);
  } 
  // if you are connected, print your MAC address:
  else {
 
  Serial.println("** Scan Networks **");
  byte numSsid = WiFi.scanNetworks();

  // print the list of networks seen
  Serial.print("number of available networks:"); 
  Serial.println(numSsid); 
  // print the network number and name for each network found: 
  for (int thisNet = 0; thisNet<numSsid; thisNet++) { 
    Serial.print(thisNet+1); 
    Serial.print(") "); 
    Serial.print(WiFi.SSID(thisNet)); 
    Serial.print("\tSignal: "); 
    Serial.print(WiFi.RSSI(thisNet)); 
    Serial.print(" dBm"); 
    Serial.print("\tEncryption: "); 
    Serial.println(WiFi.encryptionType(thisNet));
  }
  
  }
}
