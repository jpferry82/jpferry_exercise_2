/*----------------------------------------------------------------------------

 * Name:    main.c

 * Purpose: LED Flasher for STM32F429I-Discovery

 * Author: JP. FERRY

 * Example: This exemple illustrates task priority and task synchronization

 *----------------------------------------------------------------------------
* test exo1
 */



/* Kernel includes. */

#include "FreeRTOS.h"

#include "task.h"

#include "timers.h"

#include "semphr.h"
