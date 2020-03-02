/*
 * File:   ADC.c
 * Author: Israel Arevalo
 * Created on 28 de febrero de 2020, 03:20 AM
 */

#include <xc.h> // include processor files - each processor file is guarded. 
#include "ADC.h"


void adc_conf(uint8_t con1, uint8_t con0){//configuracion del ADC
    ADCON0 = con0;
    ADCON1 = con1;
}

void iniciar_adc(void){//Se inicia la conversión ADC
    ADCON0bits.GO = 1;
}
