// -------------------------------------------------------------------
// This is a library for Monochrome OLEDs based on SSD1306 drivers
// -------------------------------------------------------------------
#ifndef ssd1306_h
#define ssd1306_h

class Ssd1306 
{
  public:
    Ssd1306(uint8_t i2caddr,uint8_t width,uint8_t height,uint8_t orientation);
    void begin(void); 
    void oledSetPixel(int16_t x, int16_t y, uint16_t color);
    void oledDrawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t color);
    void oledDrawRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color);
    void oledFillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color);
    void oledDrawCircle(int16_t x0, int16_t y0, int16_t r,uint16_t color);
    void oledDrawChar(int16_t x, int16_t y, unsigned char c, uint16_t color);
    void oledPrintLine(int16_t x, int16_t y, unsigned char *c, uint16_t color);
    void oledInvert(void); 
    void oledNormal(void);
    void oledCopyDisplayBuffer(void);
    void oledClearDisplayBuffer(uint8_t value);
  private:
    void ssd1306_cmd(uint8_t c);
    
    uint8_t _i2caddr;
    uint8_t _width;
    uint8_t _height;
    uint8_t _orientation;
};

#define BLACK 0
#define WHITE 1
#define INVERSE 2

#define SSD1306_SETCONTRAST 0x81
#define SSD1306_NORMALDISPLAY 0xA6
#define SSD1306_INVERTDISPLAY 0xA7
#define SSD1306_COLUMNADDR 0x21
#define SSD1306_PAGEADDR   0x22

#endif
