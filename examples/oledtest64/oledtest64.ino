// -----------------------------------------------
// Example code for the SSD1306 library
// -----------------------------------------------
#include <SSD1306.h>
#include <Wire.h>

Ssd1306 ssd1306(0x3C,64,48,0);

void setup() 
{

  Serial.begin(9600);

  ssd1306.begin(); 
  // Clear the buffer.
  ssd1306.oledClearDisplayBuffer(0);
  ssd1306.oledCopyDisplayBuffer();

  ssd1306.oledDrawLine(0,24,63,37,1);
  ssd1306.oledDrawLine(0,37,63,24,1);
  ssd1306.oledDrawLine(0,24,64,24,1);
  ssd1306.oledDrawCircle(32,24,10,1);
  ssd1306.oledFillRect(0,37,63,47,1);
  ssd1306.oledPrintLine(0,0,(unsigned char*)"Hallo!",1);
  ssd1306.oledPrintLine(0,9,(unsigned char*)"12345678901",1);
  ssd1306.oledCopyDisplayBuffer();
  ssd1306.oledPrintLine(0,37,(unsigned char*)"Inverted!",0);    

  ssd1306.oledCopyDisplayBuffer();
  delay(2000);
  ssd1306.oledInvert();
  delay(2000);
  ssd1306.oledNormal();
  delay (2000);
}
 
 
void loop() {
 
}
