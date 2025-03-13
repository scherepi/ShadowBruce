#include <Wire.h>
#include "core/display.h"
#include "core/i2c_finder.h"
#include "core/sd_functions.h"

Crypto::Crypto() {
    cryptoModule.setInterface(GROVE_SDA, GROVE_SCL);
}

bool Crypto::begin() {
    bool i2c_check = check_i2c_address(CRYPTO_I2C);
    
}