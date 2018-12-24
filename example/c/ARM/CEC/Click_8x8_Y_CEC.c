/*
Example for 8x8_Y Click

    Date          : Jan 2018.
    Author        : MikroE Team

Test configuration CEC :
    
    MCU              : CEC1702
    Dev. Board       : Clicker 2 for CEC1702
    ARM Compiler ver : vCANT_FIND_VERSION

---

Description :

The application is composed of three sections :

- System Initialization - Intializes CS pin as output and SPI module
- Application Initialization - Driver intialization and default configration
of the 8x8 click board and settings speed scroll as Midium speed and refresh display.
- Application Task - (code snippet) - Shows one byte, then scrolls the string and image, every 1 sec.

*/

#include "Click_8x8_y_types.h"
#include "Click_8x8_y_config.h"

#include "__c8x8y_driver.h"


uint8_t demoImg[72] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                        0x08, 0x1c, 0x36, 0x22, 0x08, 0x1c, 0x36, 0x22,
                        0x08, 0x1c, 0x36, 0x22, 0x08, 0x1c, 0x36, 0x22,
                        0x08, 0x1c, 0x36, 0x22, 0x08, 0x1c, 0x36, 0x22,
                        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
                        
uint8_t testImg[ 8 ] = {0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
uint8_t i = 0;
uint8_t j = 8;

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS2, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS3, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
    mikrobus_spiInit( _MIKROBUS1, &_C8X8Y_SPI_CFG[0] );
    mikrobus_spiInit( _MIKROBUS2, &_C8X8Y_SPI_CFG[0] );
    Delay_100ms();
}

void applicationInit()
{    
    c8x8y_spiDriverInit( (T_C8X8Y_P)&_MIKROBUS1_GPIO, (T_C8X8Y_P)&_MIKROBUS1_SPI );
    c8x8y_writeCmd(_C8X8Y_DECODE_MODE_REG, _C8X8Y_NO_DECODE);
    c8x8y_writeCmd(_C8X8Y_INTENSITY_REG,   _C8X8Y_INTENSITY_15);
    c8x8y_writeCmd(_C8X8Y_SCAN_LIMIT_REG,  _C8X8Y_DISPLAY_DIGIT_0_7);
    c8x8y_writeCmd(_C8X8Y_SHUTDOWN_REG,    _C8X8Y_NORMAL_OPERATION);

    c8x8y_setSpeedScroll(_C8X8Y_SPEED_MEDIUM);
    c8x8y_displayRefresh();
    Delay_100ms();
    
    c8x8y_spiDriverInit( (T_C8X8Y_P)&_MIKROBUS2_GPIO, (T_C8X8Y_P)&_MIKROBUS2_SPI );
    
    c8x8y_writeCmd(_C8X8Y_DECODE_MODE_REG, _C8X8Y_NO_DECODE);
    c8x8y_writeCmd(_C8X8Y_INTENSITY_REG,   _C8X8Y_INTENSITY_15);
    c8x8y_writeCmd(_C8X8Y_SCAN_LIMIT_REG,  _C8X8Y_DISPLAY_DIGIT_0_7);
    c8x8y_writeCmd(_C8X8Y_SHUTDOWN_REG,    _C8X8Y_NORMAL_OPERATION);

    c8x8y_setSpeedScroll(_C8X8Y_SPEED_MEDIUM);
    c8x8y_displayRefresh();
    Delay_100ms();

    c8x8y_spiDriverInit( (T_C8X8Y_P)&_MIKROBUS3_GPIO, (T_C8X8Y_P)&_MIKROBUS3_SPI );
        
    c8x8y_writeCmd(_C8X8Y_DECODE_MODE_REG, _C8X8Y_NO_DECODE);
    c8x8y_writeCmd(_C8X8Y_INTENSITY_REG,   _C8X8Y_INTENSITY_15);
    c8x8y_writeCmd(_C8X8Y_SCAN_LIMIT_REG,  _C8X8Y_DISPLAY_DIGIT_0_7);
    c8x8y_writeCmd(_C8X8Y_SHUTDOWN_REG,    _C8X8Y_NORMAL_OPERATION);

    c8x8y_setSpeedScroll(_C8X8Y_SPEED_MEDIUM);
    c8x8y_displayRefresh();
    Delay_100ms();
}

void applicationTask()
{
    if(i > 48) i = 0;
    c8x8y_spiDriverInit( (T_C8X8Y_P)&_MIKROBUS1_GPIO, (T_C8X8Y_P)&_MIKROBUS1_SPI );
    c8x8y_displayImage(&demoImg[i]);
    c8x8y_spiDriverInit( (T_C8X8Y_P)&_MIKROBUS2_GPIO, (T_C8X8Y_P)&_MIKROBUS2_SPI );
    c8x8y_displayImage(&demoImg[8+i]);
    c8x8y_spiDriverInit( (T_C8X8Y_P)&_MIKROBUS3_GPIO, (T_C8X8Y_P)&_MIKROBUS3_SPI );
    c8x8y_displayImage(&demoImg[16+i]);
    i++;
    Delay_ms( 100 );
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
        applicationTask();
    }
}