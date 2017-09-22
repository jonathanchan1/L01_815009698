/* Lab 1 first file - ID number 815009698 */ 
#include <p18f452.h>
/* Set configuration bits for use with ICD2 */
#pragma config OSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF

void main (void)
{ 
    /*Code from Question 14 in Prelab*/ 
    int count = 1;
    TRISB = 0;
    while (count <= 15)
    {
        PORTB = count;
        count++;
    }
}
