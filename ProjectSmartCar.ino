#include "TinyGPS.h"
#include "SoftwareSerial.h"
#include "Arduino.h"
#include "LiquidCrystal.h"


//Pin Definitions
#define LCD_PIN_RS  9
#define LCD_PIN_E 8
#define LCD_PIN_DB4 3
#define LCD_PIN_DB5 4
#define LCD_PIN_DB6 6
#define LCD_PIN_DB7 7

//EyeBlink declaring A0 as analog input
#define SENSE A0

//Accelerometer GY-61
#define xpin A1
#define ypin A2
#define zpin A3

//LM35 
#define tempcheck A5
//MQ3
#define alcoholcheck A4

//object initialization
LiquidCrystal lcd(LCD_PIN_RS,LCD_PIN_E,LCD_PIN_DB4,LCD_PIN_DB5,LCD_PIN_DB6,LCD_PIN_DB7);



SoftwareSerial SIM900A(12,13);
SoftwareSerial gpsSerial(10,11);
TinyGPS gps;
long lati,lon; // create variable for latitude and longitude object


char msg;
char call;

int Xrest;
int Yrest;
int Zrest;

float temp =0 ;
float alcohol;

void setup() {
    lcd.begin(16, 2);
    start_lcd();
    
    pinMode(tempcheck, INPUT);
    pinMode(alcoholcheck, INPUT);
    pinMode(SENSE, INPUT);
    pinMode(2, OUTPUT);
    Serial.begin(9600);
    SIM900A.begin(9600);
    gpsSerial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
    Xrest = analogRead(xpin);
   // Serial.print(xpin);
    Yrest = analogRead(ypin);
    //Serial.print(ypin);
    Zrest = analogRead(zpin);
   // Serial.print(zpin);

}

void loop() {
  
   checkSleepy();
   alcohol_check();
   crash_check();
   temperature_check();
   gps_locate();
    
}
