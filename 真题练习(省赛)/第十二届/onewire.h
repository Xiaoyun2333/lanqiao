#ifndef __ONAWIRE_H__
#define __ONAWIRE_H__

void Delay_OneWire(unsigned int t);
void Write_DS18B20(unsigned char dat);
unsigned char Read_DS18B20(void);
bit init_ds18b20(void);

#endif