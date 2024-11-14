#include <Adafruit_NeoPixel.h>
#define PIN 2
#define NUMPIXELS 14 

Adafruit_NeoPixel pixels = Adafruit_NeoPixel (NUMPIXELS,PIN,NEO_GRB+NEO_KHZ800);

void setup() {
  pinMode (A1,INPUT);
  Serial.begin (9600);
  pixels.begin();
}

void loop() {
  Serial.println (analogRead(A1));
  if (analogRead (A1)> 410) {
    for (int i=1;i>43;i++) {
      int y=i%14;

pixels.setPixelColor(y, pixels.Color(0,0,255));
pixels.show();
delay(75);
pixels.setPixelColor(y, pixels.Color(0,0,0));
pixels.show();
    }
  }
 if (analogRead (A1)> 420) {
    for (int i=1;i>43;i++) {
      int y=i%14;

pixels.setPixelColor(y, pixels.Color(0,255,0));
pixels.show();
delay(75);
pixels.setPixelColor(y, pixels.Color(0,0,0));
pixels.show();
    }
 }
 
 if (analogRead (A1)> 430) {
    for (int i=1;i>43;i++) {
      int y=i%14;

pixels.setPixelColor(y, pixels.Color(255,192,203));
pixels.show();
delay(75);
pixels.setPixelColor(y, pixels.Color(0,0,0));
pixels.show();
    }
  }
  
  if (analogRead (A1)> 440) {
    for (int i=1;i>43;i++) {
      int y=i%14;

pixels.setPixelColor(y, pixels.Color(255,255,0));
pixels.show();
delay(75);
pixels.setPixelColor(y, pixels.Color(0,0,0));
pixels.show();
    }
  }

 if (analogRead (A1)> 450) {
    for (int i=1;i>43;i++) {
      int y=i%14;

pixels.setPixelColor(y, pixels.Color(255,0,0));
pixels.show();
delay(75);
pixels.setPixelColor(y, pixels.Color(0,0,0));
pixels.show();
    }
  }
}
