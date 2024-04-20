/*
 * mdebug.c
 *
 *  Created on: Apr 20, 2024
 *      Author: Mateusz Synak
 */

#include "mdebug.h"
#include <string.h>
#include <stdio.h>

void mdebug_rn(void) {
	uint8_t text[2] = "\r\n";
	HAL_UART_Transmit(MDEBUG_HUART, text, 2, HAL_MAX_DELAY);
}

void mdebug_rn_IT(void) {
	uint8_t text[2] = "\r\n";
	HAL_UART_Transmit_IT(MDEBUG_HUART, text, 2);
}

void mdebug_putstr(char *text) {
	HAL_UART_Transmit(MDEBUG_HUART, (uint8_t*)text, strlen(text), HAL_MAX_DELAY);
}

void mdebug_putstr_IT(char *text) {
	HAL_UART_Transmit_IT(MDEBUG_HUART, (uint8_t*)text, strlen(text));
}

void mdebug_putuint(uint32_t value) {

	char buffer[10] = {0,0,0,0,0,0,0,0,0,0};
	sprintf(buffer, "%lu", value);

	HAL_UART_Transmit(MDEBUG_HUART, (uint8_t*)buffer, strlen(buffer), HAL_MAX_DELAY);
}

void mdebug_putuint_IT(uint32_t value) {

	char buffer[10] = {0,0,0,0,0,0,0,0,0,0};
	sprintf(buffer, "%lu", value);

	HAL_UART_Transmit_IT(MDEBUG_HUART, (uint8_t*)buffer, strlen(buffer));
}

void mdebug_putint(int16_t value) {

	char buffer[10] = {0,0,0,0,0,0,0,0,0,0};
	sprintf(buffer, "%d", value);

	HAL_UART_Transmit(MDEBUG_HUART, (uint8_t*)buffer, strlen(buffer), HAL_MAX_DELAY);
}

void mdebug_putint_IT(int16_t value) {

	char buffer[10] = {0,0,0,0,0,0,0,0,0,0};
	sprintf(buffer, "%d", value);

	HAL_UART_Transmit_IT(MDEBUG_HUART, (uint8_t*)buffer, strlen(buffer));
}

void mdebug_puthex(uint32_t value) {

	char buffer[10] = {0,0,0,0,0,0,0,0,0,0};
	sprintf(buffer, "0x%lX", value);

	HAL_UART_Transmit(MDEBUG_HUART, (uint8_t*)buffer, strlen(buffer), HAL_MAX_DELAY);
}

void mdebug_puthex_IT(uint32_t value) {

	char buffer[10] = {0,0,0,0,0,0,0,0,0,0};
	sprintf(buffer, "0x%lX", value);

	HAL_UART_Transmit_IT(MDEBUG_HUART, (uint8_t*)buffer, strlen(buffer));
}

void mdebug_putfloat(float value) {
	char buffer[21] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	if(value < 0) sprintf(buffer, "-%f", value);
	else sprintf(buffer, "%f", value);

	HAL_UART_Transmit(MDEBUG_HUART, (uint8_t*)buffer, strlen(buffer), HAL_MAX_DELAY);
}

void mdebug_putfloat_IT(float value) {
	char buffer[21] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	if(value < 0) sprintf(buffer, "-%f", value);
	else sprintf(buffer, "%f", value);

	HAL_UART_Transmit_IT(MDEBUG_HUART, (uint8_t*)buffer, strlen(buffer));
}

void mdebug_putfloat3(float value) {
	char buffer[21] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	if(value < 0) sprintf(buffer, "-%.3f", value);
	else sprintf(buffer, "%.3f", value);

	HAL_UART_Transmit(MDEBUG_HUART, (uint8_t*)buffer, strlen(buffer), HAL_MAX_DELAY);
}

void mdebug_putfloat3_IT(float value) {
	char buffer[21] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	if(value < 0) sprintf(buffer, "-%.3f", value);
	else sprintf(buffer, "%.3f", value);

	HAL_UART_Transmit_IT(MDEBUG_HUART, (uint8_t*)buffer, strlen(buffer));
}
