/*----------------------------------------------------------------------------

 * Name:    main.c

 * Purpose: LED Flasher for STM32F429I-Discovery

 * Author: JP. FERRY

 * Modification by Laurent

 * Example: This exemple illustrates task priority and task synchronization

 *----------------------------------------------------------------------------

 */



/* Kernel includes. */

#include "FreeRTOS.h"

#include "task.h"

#include "timers.h"

#include "semphr.h"
