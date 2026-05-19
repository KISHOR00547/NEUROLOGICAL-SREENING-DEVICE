#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "kishor";
const char* pass = "kishor547";

String apiKey = "A1B2C3D4E5F6G7H8";   // ThingSpeak write key

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, pass);
  while(WiFi.status()!=WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi Connected");

  randomSeed(analogRead(0));
}

void loop() {

  // RANDOM values
  int flex1 = random(100,900);
  int flex2 = random(100,900);
  int fsr1  = random(100,900);
  int emg   = random(100,900);

  Serial.println("SENDING RANDOM DATA");
  Serial.println(flex1);
  Serial.println(flex2);
  Serial.println(fsr1);
  Serial.println(emg);

  sendTS(flex1,flex2,fsr1,emg);
  delay(15000);   // ThingSpeak limit
}

void sendTS(int a,int b,int c,int d){

  String url="https://api.thingspeak.com/update?api_key="+apiKey+
             "&field1="+String(a)+
             "&field2="+String(b)+
             "&field3="+String(c)+
             "&field4="+String(d);

  HTTPClient http;
  http.begin(url);
  int code=http.GET();

  Serial.print("HTTP CODE: ");
  Serial.println(code);

  http.end();
}
