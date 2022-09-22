// License       : License.txt
// Specifications: Spec-00000058.pdf

// Include the header
#include "MPXA4250A.h"                          // Using MPXA4250A library

// Thread definitions ( Main Application )
Thread sen_apl;

// Immediate defines
#define iPCMP_Cyc   1000U                       // Sensor Read Cycle [ ms/bit ]

// Define Task for Sensor aplication
void ap( void );
pp2ap_adc_t MPXA4250A_00000058( void );

int main( void )
{
        // Start application
        sen_apl.start( ap );
}

// Sensor Application Task
void ap( void )
{
        pp2ap_adc_t   sensor;
        float         pressure;                 // Pressure [kPa]
        unsigned long diagnosis;                // Diagnosis result : Normal=iNormal,Max NG=iMax_NG,Min NG=iMin_NG
        
        // MPXA4250A sensor read
        do{
                // Read of Pressure Sensor
                sensor = MPXA4250A_00000058();
                
                pressure  = sensor.phy;
                diagnosis = sensor.sts;
                
                // Sensor Application
                
                // Application cycle wait
                thread_sleep_for( iPCMP_Cyc );
        }while(true);
}
