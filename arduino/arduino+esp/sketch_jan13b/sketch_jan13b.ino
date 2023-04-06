#include "WiFi.h"                             // including the Wifi library
#include "ESPAsyncWebServer.h"                // including the Web server library

/*
 * Here we declare the ssid (the name of the hotspot created by ESP32) and it's password.
 * Make sure to set the ssid as something unique for your team.
 */
const char* ssid = "esp32-wifi@{AGGREGOR}";
const char* password = "WAAH_KYA_BAAT_HAI";

AsyncWebServer server(80);                    // creating the webserver here

void setup(){
  pinMode(2, OUTPUT);                         // setting the pin number 2 as an output pin

  WiFi.softAP(ssid, password);                // creates a WiFi hotspot on ESP32
  
  /*
   * After this we can start adding some code to control the ESP32.
   * We can make requests to the server through a webpage and make it perform different tasks.
   */

  server.on("/turn-on", HTTP_GET, [](AsyncWebServerRequest *request){
    // the following code runs whenever we receive a "turn-on" request from the webpage
    
    digitalWrite(2, HIGH);                    // sets the voltage of pin 2 as high, turning on the LED light on ESP32
    request->send_P(200, "text/plain", "");   
  });

  server.on("/turn-off", HTTP_GET, [](AsyncWebServerRequest *request){
    // the following code runs whenever we recieve a "turn-off" request from the webpage
    
    digitalWrite(2, LOW);                     // sets the voltage of pin 2 as low, turning off the LED light on ESP32
    request->send_P(200, "text/plain", "");
  });

  server.begin();                             // starts the web server
} 

void loop() {
}