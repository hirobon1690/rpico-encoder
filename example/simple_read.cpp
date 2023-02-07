#include <stdio.h>
#include "encoder.h"
#include "pico/stdlib.h"

Encoder enc0(10);
Encoder enc1(12);

int main() {
    stdio_init_all();

    enc0.init();
    enc1.init();

    while (1) {
        printf("position %8d, %8d\n", enc0.get(), enc1.get());
        sleep_ms(100);
    }
}