/*
 *******************************************************************************
 * Copyright (c) 2021, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */

#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_
#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

/*----------------------------------------------------------------------------
 *        STM32 pins number
 *----------------------------------------------------------------------------*/

// digital
#define PA10 0
#define PA9 1
#define PA12 2  // no PWM
#define PB0 3
#define PB7 4
#define PB6 5
#define PB1 6
#define PF0 7  // no PWM
#define PF1 8  // no PWM
#define PA8 9
#define PA11 10
#define PB5 11
#define PB4 12
#define PB3 13  // LED
// analog in
#define PA0 14   // A0
#define PA1 15   // A1
#define PA3 16   // A2
#define PA4 17   // A3
#define PA5 18   // A4
#define PA6 19   // A5
#define PA7 20   // A6
#define PA2 21   // STLink Tx (no A7)
#define PA15 22  // STLink Rx

#define NUM_DIGITAL_PINS 23
#define NUM_ANALOG_INPUTS 7
#define NUM_ANALOG_FIRST 14

// On-board LED pin number
#ifndef LED_BUILTIN
#define LED_BUILTIN 13
#define LED_GREEN LED_BUILTIN
#endif

// SPI definitions
#ifndef PIN_SPI_SS
#define PIN_SPI_SS PA4
#endif
#ifndef PIN_SPI_SS1
#define PIN_SPI_SS1 PA15
#endif
#ifndef PIN_SPI_MOSI
#define PIN_SPI_MOSI PA7
#endif
#ifndef PIN_SPI_MISO
#define PIN_SPI_MISO PA6
#endif
#ifndef PIN_SPI_SCK
#define PIN_SPI_SCK PA5
#endif

// I2C definitions
#ifndef PIN_WIRE_SDA
#define PIN_WIRE_SDA 4
#endif
#ifndef PIN_WIRE_SCL
#define PIN_WIRE_SCL 5
#endif

// Timer Definitions
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#ifndef TIMER_TONE
#define TIMER_TONE TIM1
#endif
#ifndef TIMER_SERVO
#define TIMER_SERVO TIM3
#endif

// UART Definitions
#ifndef SERIAL_UART_INSTANCE
#define SERIAL_UART_INSTANCE 1  // Connected to ST-Link
#endif

// Default pin used for generic 'Serial' instance
// Mandatory for Firmata
#ifndef PIN_SERIAL_RX
#define PIN_SERIAL_RX PA15
#endif
#ifndef PIN_SERIAL_TX
#define PIN_SERIAL_TX PA2
#endif

#ifdef __cplusplus
}  // extern "C"
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
   // These serial port names are intended to allow libraries and
   // architecture-neutral
// sketches to automatically default to the correct port name for a particular
// type of use.  For example, a GPS module would normally connect to
// SERIAL_PORT_HARDWARE_OPEN, the first hardware serial port whose RX/TX pins
// are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial
// Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge
// library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.
// Their RX & TX
//                            pins are NOT connected to anything by default.
#define SERIAL_PORT_MONITOR Serial
#define SERIAL_PORT_HARDWARE Serial
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
