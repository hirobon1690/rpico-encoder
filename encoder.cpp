#include "encoder.h"

int Encoder::id = 0;
bool Encoder::initFlag = 0;
int Encoder::offset = 0;

/**
 * @brief Construct a new Encoder:: Encoder object
 * 
 * @param pin Base pin to connect the A phase of the encoder. 
 * The B phase must be connected to the next pin
 */
Encoder::Encoder(int pin):pin(pin) {
    sm = id;
    id++;
}

/**
 * @brief Initialize encoder pio program
 * 
 */
void Encoder::init() {
    if (!initFlag) {
        offset = pio_add_program(pio0, &quadrature_encoder_program);
        initFlag = 1;
    }
    quadrature_encoder_program_init(pio0, sm, offset, pin, 0);
}

/**
 * @brief Get current count
 * 
 * @return int count
 */
int Encoder::get() {
    return quadrature_encoder_get_count(pio0, sm);
}
