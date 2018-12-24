![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# 8x8_Y Click

---

- **CIC Prefix**  : C8X8Y
- **Author**      : MikroE Team
- **Verison**     : 1.0.0
- **Date**        : Jan 2018.

---

- **Libstock** : https://libstock.mikroe.com/projects/view/2319/8x8-y-click
- **HEXIWEAR** : ${HEXI_LINK}
- **GitHub**   : ${GITHUB_LINK}

---

### Software Support

We provide a library for the 8x8_Y Click on our [LibStock](https://libstock.mikroe.com/projects/view/2319/8x8-y-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library contains all the necessary functions for text and images on led matrix 8x8.
The library provides full control of 8x8 Y click.

Key functions :

- ``` void c8x8y_displayImage(uint8_t *pArray) ``` - Image display function
- ``` void c8x8y_displayString(char *pArray) ``` - Scroll string function
- ``` void c8x8y_displayByte(char ch) ``` - Function for displaying one character

**Examples Description**

The application is composed of three sections :

- System Initialization - Intializes CS pin as output and SPI module
- Application Initialization - Driver intialization and default configration
of the 8x8 click board and settings speed scroll as Midium speed and refresh display.
- Application Task - (code snippet) - Shows one byte, then scrolls the string and image, every 1 sec.


```.c
void applicationTask()
{
    c8x8y_displayByte(demoChar);
    Delay_ms( 1000 );
    c8x8y_displayString(&demoString[0]);
    Delay_ms( 1000 );
    c8x8y_displayImage(&demoImgOn[0]);
    Delay_ms( 500 );
    c8x8y_displayImage(&demoImgOff[0]);
    Delay_ms( 1000 );
}
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2319/8x8-y-click) page.

Other mikroE Libraries used in the example:

- SPI

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
### Architectures Supported

#### mikroC

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroBasic

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroPascal

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

---
---
