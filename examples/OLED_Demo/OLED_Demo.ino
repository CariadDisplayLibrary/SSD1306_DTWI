#include <DTWI.h>
#include <SSD1306.h>
#include <SSD1306_DTWI.h>

DTWI0 tftWire;
SSD1306_DTWI tft(tftWire, 0x3c, 8); // Pin 8 is RES. DC is pulled LOW

void setup() {
    tft.initializeDevice();
    tft.setBacklight(255);
    tft.setDisplayOffset(2, 0);
    tft.fillScreen(Color::Black);
    tft.drawRectangle(0, 0, 127, 63, Color::White);
}

void loop() {
    tft.setCursor(10, 10);
    tft.print(millis());
}
