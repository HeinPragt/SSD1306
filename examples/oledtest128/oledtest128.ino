// -----------------------------------------------
// Example code for the SSD1306 library
// -----------------------------------------------
#include <SSD1306.h>
#include <Wire.h>

Ssd1306 ssd1306(0x3C,128,64,0);

void setup() 
{

  Serial.begin(9600);

  ssd1306.begin(); 
  // Clear the buffer.
  ssd1306.oledClearDisplayBuffer(0);
  ssd1306.oledCopyDisplayBuffer();

  ssd1306.oledDrawLine(0,32,127,32,1);
  ssd1306.oledDrawLine(0,32,127,48,1);
  ssd1306.oledDrawLine(0,48,127,32,1);
  ssd1306.oledDrawCircle(64,40,14,1);
  ssd1306.oledFillRect(0,53,127,63,1);
  ssd1306.oledPrintLine(0,0,"Hallo wereld!",1);
  ssd1306.oledPrintLine(0,9,"1234567890123456789012345678",1);
  ssd1306.oledCopyDisplayBuffer();
  ssd1306.oledPrintLine(0,54,"Inverted!",0);

  ssd1306.oledCopyDisplayBuffer();
  delay(2000);
  ssd1306.oledInvert();
  delay(2000);
  ssd1306.oledNormal();
  delay (2000);
}
 
 
void loop() {
 
}
