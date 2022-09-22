// License       : License.txt
// Specifications: Spec-00000058.pdf
/*-- File Header Comment Start -----------------------------------------------*/
// File Name        : MPXA4250A_00000058.cpp
// BSL              : 00000058
// Model number     : NXP MPXA4250A
// Spec               Component type       : ADC
//                    OS                   : Mbed
//                    Calculation          : Floating-point
//                    Conversion type      : Linear
//                    Moving average filter: Moving average filter select
//                    Diagnosis            : Range (Min to Max)
// Reason for change: 01.00.00 : 15/09/'22 : New Release
// Nickname         : Blue Dragon
/*-- File Header Comment End -------------------------------------------------*/

#include "MPXA4250A.h"

AnalogIn MPXA4250A_adc( iMPXA4250A_pin , iVref );       // AnalogIn object

// Main Function
pp2ap_adc_t MPXA4250A_00000058( void )
{
        pp2ap_adc_t res = pp_00000058( MPXA4250A_adc , tbl_MPXA4250A );
        return( res );
}
