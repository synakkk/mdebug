/*
 * mdebug.h
 *
 *  Created on: Apr 20, 2024
 *      Author: Mateusz Synak
 */

#ifndef INC_MDEBUG_H_
#define INC_MDEBUG_H_

#include "usart.h"

#define MDEBUG_HUART			&huart2

// Puts characters \r\n
void mdebug_rn(void);
void mdebug_rn_IT(void);

//Puts string
void mdebug_putstr(char *text);
void mdebug_putstr_IT(char *text);

//Puts uint value
void mdebug_putuint(uint32_t value);
void mdebug_putuint_IT(uint32_t value);

//Puts int value
void mdebug_putint(int16_t value);
void mdebug_putint_IT(int16_t value);

//Puts hex value
void mdebug_puthex(uint32_t value);
void mdebug_puthex_IT(uint32_t value);

//Puts float value
void mdebug_putfloat(float value);
void mdebug_putfloat_IT(float value);

//Puts float value with only 3 digits after decimal point
void mdebug_putfloat3(float value);
void mdebug_putfloat3_IT(float value);


#endif /* INC_MDEBUG_H_ */
