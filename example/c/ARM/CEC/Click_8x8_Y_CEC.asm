_systemInit:
;Click_8x8_Y_CEC.c,46 :: 		void systemInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_8x8_Y_CEC.c,48 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #2
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_8x8_Y_CEC.c,49 :: 		mikrobus_gpioInit( _MIKROBUS2, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #2
MOVS	R0, #1
BL	_mikrobus_gpioInit+0
;Click_8x8_Y_CEC.c,50 :: 		mikrobus_gpioInit( _MIKROBUS3, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #2
MOVS	R0, #2
BL	_mikrobus_gpioInit+0
;Click_8x8_Y_CEC.c,51 :: 		mikrobus_spiInit( _MIKROBUS1, &_C8X8Y_SPI_CFG[0] );
MOVW	R0, #lo_addr(__C8X8Y_SPI_CFG+0)
MOVT	R0, #hi_addr(__C8X8Y_SPI_CFG+0)
MOV	R1, R0
MOVS	R0, #0
BL	_mikrobus_spiInit+0
;Click_8x8_Y_CEC.c,52 :: 		mikrobus_spiInit( _MIKROBUS2, &_C8X8Y_SPI_CFG[0] );
MOVW	R0, #lo_addr(__C8X8Y_SPI_CFG+0)
MOVT	R0, #hi_addr(__C8X8Y_SPI_CFG+0)
MOV	R1, R0
MOVS	R0, #1
BL	_mikrobus_spiInit+0
;Click_8x8_Y_CEC.c,53 :: 		Delay_100ms();
BL	_Delay_100ms+0
;Click_8x8_Y_CEC.c,54 :: 		}
L_end_systemInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _systemInit
_applicationInit:
;Click_8x8_Y_CEC.c,56 :: 		void applicationInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_8x8_Y_CEC.c,58 :: 		c8x8y_spiDriverInit( (T_C8X8Y_P)&_MIKROBUS1_GPIO, (T_C8X8Y_P)&_MIKROBUS1_SPI );
MOVW	R1, #lo_addr(__MIKROBUS1_SPI+0)
MOVT	R1, #hi_addr(__MIKROBUS1_SPI+0)
MOVW	R0, #lo_addr(__MIKROBUS1_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS1_GPIO+0)
BL	_c8x8y_spiDriverInit+0
;Click_8x8_Y_CEC.c,59 :: 		c8x8y_writeCmd(_C8X8Y_DECODE_MODE_REG, _C8X8Y_NO_DECODE);
MOVS	R1, __C8X8Y_NO_DECODE
MOVS	R0, __C8X8Y_DECODE_MODE_REG
BL	_c8x8y_writeCmd+0
;Click_8x8_Y_CEC.c,60 :: 		c8x8y_writeCmd(_C8X8Y_INTENSITY_REG,   _C8X8Y_INTENSITY_15);
MOVS	R1, __C8X8Y_INTENSITY_15
MOVS	R0, __C8X8Y_INTENSITY_REG
BL	_c8x8y_writeCmd+0
;Click_8x8_Y_CEC.c,61 :: 		c8x8y_writeCmd(_C8X8Y_SCAN_LIMIT_REG,  _C8X8Y_DISPLAY_DIGIT_0_7);
MOVS	R1, __C8X8Y_DISPLAY_DIGIT_0_7
MOVS	R0, __C8X8Y_SCAN_LIMIT_REG
BL	_c8x8y_writeCmd+0
;Click_8x8_Y_CEC.c,62 :: 		c8x8y_writeCmd(_C8X8Y_SHUTDOWN_REG,    _C8X8Y_NORMAL_OPERATION);
MOVS	R1, __C8X8Y_NORMAL_OPERATION
MOVS	R0, __C8X8Y_SHUTDOWN_REG
BL	_c8x8y_writeCmd+0
;Click_8x8_Y_CEC.c,64 :: 		c8x8y_setSpeedScroll(_C8X8Y_SPEED_MEDIUM);
MOVS	R0, __C8X8Y_SPEED_MEDIUM
BL	_c8x8y_setSpeedScroll+0
;Click_8x8_Y_CEC.c,65 :: 		c8x8y_displayRefresh();
BL	_c8x8y_displayRefresh+0
;Click_8x8_Y_CEC.c,66 :: 		Delay_100ms();
BL	_Delay_100ms+0
;Click_8x8_Y_CEC.c,68 :: 		c8x8y_spiDriverInit( (T_C8X8Y_P)&_MIKROBUS2_GPIO, (T_C8X8Y_P)&_MIKROBUS2_SPI );
MOVW	R1, #lo_addr(__MIKROBUS2_SPI+0)
MOVT	R1, #hi_addr(__MIKROBUS2_SPI+0)
MOVW	R0, #lo_addr(__MIKROBUS2_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS2_GPIO+0)
BL	_c8x8y_spiDriverInit+0
;Click_8x8_Y_CEC.c,70 :: 		c8x8y_writeCmd(_C8X8Y_DECODE_MODE_REG, _C8X8Y_NO_DECODE);
MOVS	R1, __C8X8Y_NO_DECODE
MOVS	R0, __C8X8Y_DECODE_MODE_REG
BL	_c8x8y_writeCmd+0
;Click_8x8_Y_CEC.c,71 :: 		c8x8y_writeCmd(_C8X8Y_INTENSITY_REG,   _C8X8Y_INTENSITY_15);
MOVS	R1, __C8X8Y_INTENSITY_15
MOVS	R0, __C8X8Y_INTENSITY_REG
BL	_c8x8y_writeCmd+0
;Click_8x8_Y_CEC.c,72 :: 		c8x8y_writeCmd(_C8X8Y_SCAN_LIMIT_REG,  _C8X8Y_DISPLAY_DIGIT_0_7);
MOVS	R1, __C8X8Y_DISPLAY_DIGIT_0_7
MOVS	R0, __C8X8Y_SCAN_LIMIT_REG
BL	_c8x8y_writeCmd+0
;Click_8x8_Y_CEC.c,73 :: 		c8x8y_writeCmd(_C8X8Y_SHUTDOWN_REG,    _C8X8Y_NORMAL_OPERATION);
MOVS	R1, __C8X8Y_NORMAL_OPERATION
MOVS	R0, __C8X8Y_SHUTDOWN_REG
BL	_c8x8y_writeCmd+0
;Click_8x8_Y_CEC.c,75 :: 		c8x8y_setSpeedScroll(_C8X8Y_SPEED_MEDIUM);
MOVS	R0, __C8X8Y_SPEED_MEDIUM
BL	_c8x8y_setSpeedScroll+0
;Click_8x8_Y_CEC.c,76 :: 		c8x8y_displayRefresh();
BL	_c8x8y_displayRefresh+0
;Click_8x8_Y_CEC.c,77 :: 		Delay_100ms();
BL	_Delay_100ms+0
;Click_8x8_Y_CEC.c,79 :: 		c8x8y_spiDriverInit( (T_C8X8Y_P)&_MIKROBUS3_GPIO, (T_C8X8Y_P)&_MIKROBUS3_SPI );
MOVW	R1, #lo_addr(__MIKROBUS3_SPI+0)
MOVT	R1, #hi_addr(__MIKROBUS3_SPI+0)
MOVW	R0, #lo_addr(__MIKROBUS3_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS3_GPIO+0)
BL	_c8x8y_spiDriverInit+0
;Click_8x8_Y_CEC.c,81 :: 		c8x8y_writeCmd(_C8X8Y_DECODE_MODE_REG, _C8X8Y_NO_DECODE);
MOVS	R1, __C8X8Y_NO_DECODE
MOVS	R0, __C8X8Y_DECODE_MODE_REG
BL	_c8x8y_writeCmd+0
;Click_8x8_Y_CEC.c,82 :: 		c8x8y_writeCmd(_C8X8Y_INTENSITY_REG,   _C8X8Y_INTENSITY_15);
MOVS	R1, __C8X8Y_INTENSITY_15
MOVS	R0, __C8X8Y_INTENSITY_REG
BL	_c8x8y_writeCmd+0
;Click_8x8_Y_CEC.c,83 :: 		c8x8y_writeCmd(_C8X8Y_SCAN_LIMIT_REG,  _C8X8Y_DISPLAY_DIGIT_0_7);
MOVS	R1, __C8X8Y_DISPLAY_DIGIT_0_7
MOVS	R0, __C8X8Y_SCAN_LIMIT_REG
BL	_c8x8y_writeCmd+0
;Click_8x8_Y_CEC.c,84 :: 		c8x8y_writeCmd(_C8X8Y_SHUTDOWN_REG,    _C8X8Y_NORMAL_OPERATION);
MOVS	R1, __C8X8Y_NORMAL_OPERATION
MOVS	R0, __C8X8Y_SHUTDOWN_REG
BL	_c8x8y_writeCmd+0
;Click_8x8_Y_CEC.c,86 :: 		c8x8y_setSpeedScroll(_C8X8Y_SPEED_MEDIUM);
MOVS	R0, __C8X8Y_SPEED_MEDIUM
BL	_c8x8y_setSpeedScroll+0
;Click_8x8_Y_CEC.c,87 :: 		c8x8y_displayRefresh();
BL	_c8x8y_displayRefresh+0
;Click_8x8_Y_CEC.c,88 :: 		Delay_100ms();
BL	_Delay_100ms+0
;Click_8x8_Y_CEC.c,89 :: 		}
L_end_applicationInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationInit
_applicationTask:
;Click_8x8_Y_CEC.c,91 :: 		void applicationTask()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_8x8_Y_CEC.c,93 :: 		if(i > 48) i = 0;
MOVW	R0, #lo_addr(_i+0)
MOVT	R0, #hi_addr(_i+0)
LDRB	R0, [R0, #0]
CMP	R0, #48
IT	LS
BLS	L_applicationTask0
MOVS	R1, #0
MOVW	R0, #lo_addr(_i+0)
MOVT	R0, #hi_addr(_i+0)
STRB	R1, [R0, #0]
L_applicationTask0:
;Click_8x8_Y_CEC.c,94 :: 		c8x8y_spiDriverInit( (T_C8X8Y_P)&_MIKROBUS1_GPIO, (T_C8X8Y_P)&_MIKROBUS1_SPI );
MOVW	R1, #lo_addr(__MIKROBUS1_SPI+0)
MOVT	R1, #hi_addr(__MIKROBUS1_SPI+0)
MOVW	R0, #lo_addr(__MIKROBUS1_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS1_GPIO+0)
BL	_c8x8y_spiDriverInit+0
;Click_8x8_Y_CEC.c,95 :: 		c8x8y_displayImage(&demoImg[i]);
MOVW	R0, #lo_addr(_i+0)
MOVT	R0, #hi_addr(_i+0)
LDRB	R1, [R0, #0]
MOVW	R0, #lo_addr(_demoImg+0)
MOVT	R0, #hi_addr(_demoImg+0)
ADDS	R0, R0, R1
BL	_c8x8y_displayImage+0
;Click_8x8_Y_CEC.c,96 :: 		c8x8y_spiDriverInit( (T_C8X8Y_P)&_MIKROBUS2_GPIO, (T_C8X8Y_P)&_MIKROBUS2_SPI );
MOVW	R1, #lo_addr(__MIKROBUS2_SPI+0)
MOVT	R1, #hi_addr(__MIKROBUS2_SPI+0)
MOVW	R0, #lo_addr(__MIKROBUS2_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS2_GPIO+0)
BL	_c8x8y_spiDriverInit+0
;Click_8x8_Y_CEC.c,97 :: 		c8x8y_displayImage(&demoImg[8+i]);
MOVW	R0, #lo_addr(_i+0)
MOVT	R0, #hi_addr(_i+0)
LDRB	R0, [R0, #0]
ADDW	R1, R0, #8
SXTH	R1, R1
MOVW	R0, #lo_addr(_demoImg+0)
MOVT	R0, #hi_addr(_demoImg+0)
ADDS	R0, R0, R1
BL	_c8x8y_displayImage+0
;Click_8x8_Y_CEC.c,98 :: 		c8x8y_spiDriverInit( (T_C8X8Y_P)&_MIKROBUS3_GPIO, (T_C8X8Y_P)&_MIKROBUS3_SPI );
MOVW	R1, #lo_addr(__MIKROBUS3_SPI+0)
MOVT	R1, #hi_addr(__MIKROBUS3_SPI+0)
MOVW	R0, #lo_addr(__MIKROBUS3_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS3_GPIO+0)
BL	_c8x8y_spiDriverInit+0
;Click_8x8_Y_CEC.c,99 :: 		c8x8y_displayImage(&demoImg[16+i]);
MOVW	R0, #lo_addr(_i+0)
MOVT	R0, #hi_addr(_i+0)
LDRB	R0, [R0, #0]
ADDW	R1, R0, #16
SXTH	R1, R1
MOVW	R0, #lo_addr(_demoImg+0)
MOVT	R0, #hi_addr(_demoImg+0)
ADDS	R0, R0, R1
BL	_c8x8y_displayImage+0
;Click_8x8_Y_CEC.c,100 :: 		i++;
MOVW	R1, #lo_addr(_i+0)
MOVT	R1, #hi_addr(_i+0)
LDRB	R0, [R1, #0]
ADDS	R0, R0, #1
STRB	R0, [R1, #0]
;Click_8x8_Y_CEC.c,101 :: 		Delay_ms( 100 );
MOVW	R7, #27134
MOVT	R7, #24
NOP
NOP
L_applicationTask1:
SUBS	R7, R7, #1
BNE	L_applicationTask1
NOP
NOP
NOP
;Click_8x8_Y_CEC.c,102 :: 		}
L_end_applicationTask:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationTask
_main:
;Click_8x8_Y_CEC.c,104 :: 		void main()
SUB	SP, SP, #4
;Click_8x8_Y_CEC.c,106 :: 		systemInit();
BL	_systemInit+0
;Click_8x8_Y_CEC.c,107 :: 		applicationInit();
BL	_applicationInit+0
;Click_8x8_Y_CEC.c,109 :: 		while (1)
L_main3:
;Click_8x8_Y_CEC.c,111 :: 		applicationTask();
BL	_applicationTask+0
;Click_8x8_Y_CEC.c,112 :: 		}
IT	AL
BAL	L_main3
;Click_8x8_Y_CEC.c,113 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main
