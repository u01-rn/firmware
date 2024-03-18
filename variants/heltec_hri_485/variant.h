//The MODE led is 19, might as well use it
#define LED_PIN 19
#define LED_INVERTED 1

//The button pin is 9.
//It does not need a pullup.
#define BUTTON_PIN 9

#define HAS_SCREEN 0
#define HAS_GPS 0
#undef GPS_RX_PIN
#undef GPS_TX_PIN
#undef I2C_SCL
#undef I2C_SDA
#undef I2C_SCL1
#undef I2C_SDA1
#undef VEXT_ENABLE
//No OLED on this device.
//No I2C on this device.

//the SX1262 is integrated, unlike the mobile modem. (only on other variant)
#define USE_SX1262

//On-board DIO2 isn't actually connected, but BUSY is defined as DIO2, so we'll just use the busy pin.

#define LORA_DIO0 -1 // a No connect on the SX1262 module
#define LORA_RESET 12
#define LORA_DIO1 3 // DIO1 => GPIO3 (SX1262 IRQ)
#define LORA_DIO2 13 // (SX1262 BUSY)
#define LORA_DIO3    // DIO3 is connected on the PCB, but not to the microcontroller.
#define LORA_CS 8 //NSS => GPIO8
#define LORA_SCK 10 //SCK => GPIO10
#define LORA_MOSI 7 // GPIO7 is MTDO, MTDO => MOSI
#define LORA_MISO 6 // GPIO6 is MTCK, MTCK => MISO



#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_DIO2
#define SX126X_RESET LORA_RESET

//#define SX126X_DIO2_AS_RF_SWITCH
//#define SX126X_DIO3_TCXO_VOLTAGE 1.8
