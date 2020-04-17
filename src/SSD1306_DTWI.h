#ifndef _SSD1306_DTWI_H
#define _SSD1306_DTWI_H

#include <SSD1306.h>

#include <DTWI.h>

class SSD1306_DTWI : public SSD1306 {
    private:
        DTWI *_dtwi;
        uint8_t _addr;
        uint8_t _res;

    public:
        SSD1306_DTWI(DTWI &dtwi, uint8_t addr, uint8_t res = 255) :
            _dtwi(&dtwi), _addr(addr), _res(res), SSD1306(128, 64) {}
        SSD1306_DTWI(DTWI *dtwi, uint8_t addr, uint8_t res = 255) :
            _dtwi(dtwi), _addr(addr), _res(res), SSD1306(128, 64) {}


        void command(uint8_t c);
        void command(uint8_t c, uint8_t p);
        void command(uint8_t c, uint8_t p1, uint8_t p2);
        void data(uint8_t d);
        void data(uint8_t *d, uint32_t l);

        void initializeDevice();

};
#endif
