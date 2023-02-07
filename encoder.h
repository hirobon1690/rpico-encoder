#pragma once
#include "encoder.pio.h"

class Encoder {
   public:
    Encoder(int pin);
    void init();
    int get();

   private:
    static bool initFlag;
    static int id;
    static int offset;
    int pin;
    int sm;
};