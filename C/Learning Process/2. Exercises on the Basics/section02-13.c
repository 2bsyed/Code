/**
 Write a program which reads two positive integer values and shows their GCD
 (Greatest Common Divisor) and their LCM (Least Common Multiple).
example:
-GCD
5: 1,2
15: 1,2,3,4,5,6,7

-LCM
3: 3*1,3*2,3*3,3*4,3*5
5: 5*1,5*2,5*3

5: 5,10,15,...
15: 15,30,...

note:
15 is a multiple of 3 -> 3 divides 15 (15 % 3 == 0)
**/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the two numbers: ");
    int i1 = 0, i2 = 0;
    scanf("%d %d", &i1, &i2);


    int GCD = 0;
    int max = (i1 > i2) ? i1 : i2;
    for(int i = 1; i <= max/2; i++)
        if( i1%i==0 && i2%i==0)
            GCD = i;

//    int LCM = i1*i2/GCD;
    int LCM = max;
    for( ; LCM <= i1*i2 ; LCM++ )
        if(LCM%i1 == 0 && LCM%i2 == 0)
            break;

    printf("GCD=%d , LCM=%d", GCD, LCM);

    return 0;
}
