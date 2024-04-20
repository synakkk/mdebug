# mdebug

A simple library for quick transmitting debug data via UART.
The library is intended for use with HAL libraries on STM32 microcontrollers.

The library only requires selecting which UART to use.
You can do this in **`mdebug.h`** file changing **`MDEBUG_HUART`** parameter.
Data can also be sent via UART using interrupt mode ( _IT() ).

The following functions are available for use:

- Put "\r\n" characters:
```c
mdebug_rn();
mdebug_rn_IT();
```

- Put string
```c
mdebug_putstr(char *text);
mdebug_putstr_IT(char *text);
```

- Put unsigned integer value
```c
mdebug_putuint(uint32_t value);
mdebug_putuint_IT(uint32_t value);
```

- Put signed integer value
```c
mdebug_putint(int16_t value);
mdebug_putint_IT(int16_t value);
```

- Put hex value (with 0x)
```c
mdebug_puthex(uint32_t value);
mdebug_puthex_IT(uint32_t value);
```

- Put float value
```c
mdebug_putfloat(float value);
mdebug_putfloat_IT(float value);
```

- Put float value (with only 3 digits after decimal point)
```c
mdebug_putfloat3(float value);
mdebug_putfloat3_IT(float value);
```
