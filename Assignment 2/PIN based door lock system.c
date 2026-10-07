#include <stdio.h>
#include <stdlib.h>
//Pin based door lock system
//Pseudocode
//  correctPin = 1234
//
//  FOR attempts = 1 TO 3
//    DISPLAY "Please enter your pin"
//    READ userPin
//
//    IF userPin > 999 AND userPin <= 9999
//      DISPLAY "PIN entered successfully"
//    ELSE
//      DISPLAY "Enter PIN of correct length"
//
//    IF userPin == correctPin
//      DISPLAY "Access granted"
//      STOP the loop
//    ELSE
//      DISPLAY "Access denied"
//      DISPLAY attempts remaining (3 - attempts)
//  END FOR
//
//  IF all 3 attempts were used without a correct PIN
//    DISPLAY "System locked! Too many wrong attempts."
//END

int main()
{
    float correctPin = 1234;
    float userPin;
    int attempts;

    for(attempts = 1; attempts <= 3; attempts++){
        printf("Please enter your pin: ");
        scanf("%f", &userPin);
        //length checker
        if(userPin>999&&userPin<=9999){
            printf("PIN entered successfully\n");
        }
        else{
            printf("Enter PIN of correct length\n");
        }

        if(userPin == correctPin){
            printf("Access granted\n");
            break;
        }
        else{
            printf("Access denied\n");
            printf("Attempts remaining: %d\n", 3 - attempts);
        }
    }

    if(attempts > 3){
        printf("System locked! Too many wrong attempts.\n");
    }

    return 0;
}
