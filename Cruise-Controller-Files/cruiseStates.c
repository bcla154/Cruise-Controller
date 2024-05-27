#include <stdbool.h>
#include <stdio.h>

// Define an enum for the states
typedef enum {
    STATE_ON,     
    STATE_OFF,  
    STATE_DISABLE,   
    STATE_STDBY   
} CruiseState;

// Function to handle state transitions
CruiseState transitionState(CruiseState currentState) {
    switch (currentState) {
        case STATE_OFF:
            if (//on button pressed) {
                return STATE_ON;
            break;
        case STATE_ON:
            if (//OFF BUTTON PRESSED) {
                return STATE_OFF;
            } else if (//BRAKE PRESSED) {
                return STATE_STANDBY;
            } else if (//Accel and !under speed limit)
                return STATE_DISABLE 
            break;
        case STATE_STDBY:
            if (//RESUME BUTTON && !ACCEL & UNDER SPEED LIMIT ) {
                return STATE_ON;
            } else if (//RESUME BUTTON && ACCEL AND ! UNDER SPEED LIMIT {
                return STATE_DISABLE ;
            }
            break;
        case STATE_DISABLE:
            if (event == 'f') {
                return STATE_OFF;
            }
            break;
        default:
            printf("Invalid state transition\n");
            break;
    }
    return currentState;
}