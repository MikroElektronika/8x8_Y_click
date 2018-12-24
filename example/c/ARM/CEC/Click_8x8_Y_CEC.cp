#line 1 "D:/Clicks_git/Number/8x8_R_G_B_Y_Click/8x8Y/example/c/ARM/CEC/Click_8x8_Y_CEC.c"
#line 1 "d:/clicks_git/number/8x8_r_g_b_y_click/8x8y/example/c/arm/cec/click_8x8_y_types.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"





typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;
typedef signed long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;
typedef signed long long int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef signed long int int_fast8_t;
typedef signed long int int_fast16_t;
typedef signed long int int_fast32_t;
typedef signed long long int_fast64_t;


typedef unsigned long int uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef signed long int intptr_t;
typedef unsigned long int uintptr_t;


typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;
#line 1 "d:/clicks_git/number/8x8_r_g_b_y_click/8x8y/example/c/arm/cec/click_8x8_y_config.h"
#line 1 "d:/clicks_git/number/8x8_r_g_b_y_click/8x8y/example/c/arm/cec/click_8x8_y_types.h"
#line 3 "d:/clicks_git/number/8x8_r_g_b_y_click/8x8y/example/c/arm/cec/click_8x8_y_config.h"
const uint32_t _C8X8Y_SPI_CFG[ 3 ] =
{
 1000000,
 _SPI_MSB_FIRST,
 _SPI_CLK_IDLE_LOW
};
#line 1 "d:/clicks_git/number/8x8_r_g_b_y_click/8x8y/library/__c8x8y_driver.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"
#line 58 "d:/clicks_git/number/8x8_r_g_b_y_click/8x8y/library/__c8x8y_driver.h"
extern const uint8_t _C8X8Y_SPEED_FAST;
extern const uint8_t _C8X8Y_SPEED_MEDIUM;
extern const uint8_t _C8X8Y_SPEED_SLOW;

extern const uint8_t _C8X8Y_DECODE_MODE_REG;
extern const uint8_t _C8X8Y_INTENSITY_REG;
extern const uint8_t _C8X8Y_SCAN_LIMIT_REG;
extern const uint8_t _C8X8Y_SHUTDOWN_REG;
extern const uint8_t _C8X8Y_DISPLAY_TEST_REG;

extern const uint8_t _C8X8Y_NO_DECODE;
extern const uint8_t _C8X8Y_DECODE_DIGIT_0;
extern const uint8_t _C8X8Y_DECODE_DIGIT_3_0;
extern const uint8_t _C8X8Y_DECODE_DIGIT_7;

extern const uint8_t _C8X8Y_INTENSITY_1;
extern const uint8_t _C8X8Y_INTENSITY_3;
extern const uint8_t _C8X8Y_INTENSITY_5;
extern const uint8_t _C8X8Y_INTENSITY_7;
extern const uint8_t _C8X8Y_INTENSITY_9;
extern const uint8_t _C8X8Y_INTENSITY_11;
extern const uint8_t _C8X8Y_INTENSITY_13;
extern const uint8_t _C8X8Y_INTENSITY_15;
extern const uint8_t _C8X8Y_INTENSITY_17;
extern const uint8_t _C8X8Y_INTENSITY_19;
extern const uint8_t _C8X8Y_INTENSITY_21;
extern const uint8_t _C8X8Y_INTENSITY_23;
extern const uint8_t _C8X8Y_INTENSITY_25;
extern const uint8_t _C8X8Y_INTENSITY_27;
extern const uint8_t _C8X8Y_INTENSITY_29;
extern const uint8_t _C8X8Y_INTENSITY_31;

extern const uint8_t _C8X8Y_DISPLAY_DIGIT_0;
extern const uint8_t _C8X8Y_DISPLAY_DIGIT_0_1;
extern const uint8_t _C8X8Y_DISPLAY_DIGIT_0_2;
extern const uint8_t _C8X8Y_DISPLAY_DIGIT_0_3;
extern const uint8_t _C8X8Y_DISPLAY_DIGIT_0_4;
extern const uint8_t _C8X8Y_DISPLAY_DIGIT_0_5;
extern const uint8_t _C8X8Y_DISPLAY_DIGIT_0_6;
extern const uint8_t _C8X8Y_DISPLAY_DIGIT_0_7;

extern const uint8_t _C8X8Y_SHUTDOWN_MODE;
extern const uint8_t _C8X8Y_NORMAL_OPERATION;

extern const uint8_t _C8X8Y_DISPLAY_NORMAL_OPERATION;
extern const uint8_t _C8X8Y_DISPLAY_TEST_MODE;
#line 113 "d:/clicks_git/number/8x8_r_g_b_y_click/8x8y/library/__c8x8y_driver.h"
void c8x8y_spiDriverInit( const uint8_t*  gpioObj,  const uint8_t*  spiObj);
#line 123 "d:/clicks_git/number/8x8_r_g_b_y_click/8x8y/library/__c8x8y_driver.h"
void c8x8y_gpioDriverInit( const uint8_t*  gpioObj);
#line 134 "d:/clicks_git/number/8x8_r_g_b_y_click/8x8y/library/__c8x8y_driver.h"
void c8x8y_writeCmd(uint8_t command, uint8_t _data);
#line 141 "d:/clicks_git/number/8x8_r_g_b_y_click/8x8y/library/__c8x8y_driver.h"
void c8x8y_displayRefresh();
#line 153 "d:/clicks_git/number/8x8_r_g_b_y_click/8x8y/library/__c8x8y_driver.h"
void c8x8y_setSpeedScroll(uint8_t speed);
#line 161 "d:/clicks_git/number/8x8_r_g_b_y_click/8x8y/library/__c8x8y_driver.h"
void c8x8y_displayByte(char ch);
#line 172 "d:/clicks_git/number/8x8_r_g_b_y_click/8x8y/library/__c8x8y_driver.h"
void c8x8y_displayString(char *pArray);
#line 182 "d:/clicks_git/number/8x8_r_g_b_y_click/8x8y/library/__c8x8y_driver.h"
void c8x8y_displayImage(uint8_t *pArray);
#line 32 "D:/Clicks_git/Number/8x8_R_G_B_Y_Click/8x8Y/example/c/ARM/CEC/Click_8x8_Y_CEC.c"
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
 c8x8y_spiDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO, ( const uint8_t* )&_MIKROBUS1_SPI );
 c8x8y_writeCmd(_C8X8Y_DECODE_MODE_REG, _C8X8Y_NO_DECODE);
 c8x8y_writeCmd(_C8X8Y_INTENSITY_REG, _C8X8Y_INTENSITY_15);
 c8x8y_writeCmd(_C8X8Y_SCAN_LIMIT_REG, _C8X8Y_DISPLAY_DIGIT_0_7);
 c8x8y_writeCmd(_C8X8Y_SHUTDOWN_REG, _C8X8Y_NORMAL_OPERATION);

 c8x8y_setSpeedScroll(_C8X8Y_SPEED_MEDIUM);
 c8x8y_displayRefresh();
 Delay_100ms();

 c8x8y_spiDriverInit( ( const uint8_t* )&_MIKROBUS2_GPIO, ( const uint8_t* )&_MIKROBUS2_SPI );

 c8x8y_writeCmd(_C8X8Y_DECODE_MODE_REG, _C8X8Y_NO_DECODE);
 c8x8y_writeCmd(_C8X8Y_INTENSITY_REG, _C8X8Y_INTENSITY_15);
 c8x8y_writeCmd(_C8X8Y_SCAN_LIMIT_REG, _C8X8Y_DISPLAY_DIGIT_0_7);
 c8x8y_writeCmd(_C8X8Y_SHUTDOWN_REG, _C8X8Y_NORMAL_OPERATION);

 c8x8y_setSpeedScroll(_C8X8Y_SPEED_MEDIUM);
 c8x8y_displayRefresh();
 Delay_100ms();

 c8x8y_spiDriverInit( ( const uint8_t* )&_MIKROBUS3_GPIO, ( const uint8_t* )&_MIKROBUS3_SPI );

 c8x8y_writeCmd(_C8X8Y_DECODE_MODE_REG, _C8X8Y_NO_DECODE);
 c8x8y_writeCmd(_C8X8Y_INTENSITY_REG, _C8X8Y_INTENSITY_15);
 c8x8y_writeCmd(_C8X8Y_SCAN_LIMIT_REG, _C8X8Y_DISPLAY_DIGIT_0_7);
 c8x8y_writeCmd(_C8X8Y_SHUTDOWN_REG, _C8X8Y_NORMAL_OPERATION);

 c8x8y_setSpeedScroll(_C8X8Y_SPEED_MEDIUM);
 c8x8y_displayRefresh();
 Delay_100ms();
}

void applicationTask()
{
 if(i > 48) i = 0;
 c8x8y_spiDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO, ( const uint8_t* )&_MIKROBUS1_SPI );
 c8x8y_displayImage(&demoImg[i]);
 c8x8y_spiDriverInit( ( const uint8_t* )&_MIKROBUS2_GPIO, ( const uint8_t* )&_MIKROBUS2_SPI );
 c8x8y_displayImage(&demoImg[8+i]);
 c8x8y_spiDriverInit( ( const uint8_t* )&_MIKROBUS3_GPIO, ( const uint8_t* )&_MIKROBUS3_SPI );
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
