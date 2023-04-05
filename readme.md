# rpico-encoder
Simple class-based quadrature encoder library using pio for Raspberry pi pico.
Based on [pico-examples](https://github.com/raspberrypi/pico-examples/tree/master/pio/quadrature_encoder).

### Usage
Using PlatformIO and [wizio-pico](https://github.com/Wiz-IO/wizio-pico) platform, clone this repository under `$PROJECT_DIR/lib`.
- Add `board_build.pio = lib/rpico-encoder/encoder.pio` to `platformio.ini`
- In `main.cpp`, include `encoder.h`.
