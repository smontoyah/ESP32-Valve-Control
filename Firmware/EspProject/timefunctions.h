/*
 * File:   timefunctions.h
 * Author: Fabian Castaño
 *
 * Created on June 19, 2023, 13:41 PM
 */

#ifndef TIMEFUNCTIONS_H
#define TIMEFUNCTIONS_H

#ifdef __cplusplus
extern "C"
{
#endif

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

/** ****************************************************************************
 ** ************ INCLUDES ******************************************************
 ** ****************************************************************************/
#include <Arduino.h>
#include <Esp.h>

#include "initializer.h"

    /** ****************************************************************************
     ** ************ DEFINES *******************************************************
     ** ****************************************************************************/
    //********DEFINICIONES DE HARDWARE******
    // Definir los pines de los pulsadores y el relé
#define BUTTON_INCREMENT 4
#define BUTTON_DECREMENT 16
#define BUTTON_SELECT 17
#define BUTTON_OK 5

#define RELAY_LOAD 18
#define RELAY_INJE 19

#define LED_LOAD 12
#define LED_INJE 13

    /** ****************************************************************************
     ** ************ VARIABLES *****************************************************
     ** ****************************************************************************/

    /** ****************************************************************************
     ** ************ STRUCTURES ****************************************************
     ** ****************************************************************************/

    typedef struct
    {
        int timeOver;
        int relayOver;
        int second;
        int minute;
        double totalTime;
        int setTimeMin;
        int setTimeSec;
        double setTimeTotal;
        String secondStr;
        String minuteStr;
        String timeToPrint;
    } Control;

    /** ****************************************************************************
     ** ************ FUNCTIONS *****************************************************
     ** ****************************************************************************/
    void AssignTimeValue(Control *control);
    void IncrementValue(Control *control, int caseLabel);
    void DecrementValue(Control *control, int caseLabel);
    void SetControlTime(Control *control);
    void BackCounterTime(Control *control);

    /* *****************************************************************************
     * *****************************************************************************
     * ******************** USO DE MODULO ADS **************************************
     * *****************************************************************************
     * *****************************************************************************/

    /* *****************************************************************************
     * *****************************************************************************
     * ***************** PROTOTYPE DEFINITION **************************************
     * *****************************************************************************
     * *****************************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* TIMEFUNCTIONS_H */