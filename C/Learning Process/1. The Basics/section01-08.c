#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[] = {1,5,7,2,8,4,9,1,0,3};

    /// while loop
//    int i = 0;
//    while ( i < 10) /// works from i = 0 to i = 9
//        printf("%d ", nums[i++]);

    /// for loop
//    for (int j = 0; j < 10; ++j) /// works from j = 0 to j = 9
//        printf("%d ", nums[j]);

    /*** sample program ***/

//    printf("enter a number between 1 and 100: ");

    int nb = 0;
//    scanf("%d", &nb);
//
//    while (nb < 1 || nb > 100) {
//        printf("re-enter the number: ");
//        scanf("%d", &nb);
//    }
//
//    printf("perfect %d\n\n", nb);

    /// using do-while loop
//    do {
//        printf("enter a number between 1 and 100: ");
//        scanf("%d", &nb);
//    } while ( nb < 1 || nb > 100);
//    printf("perfect %d", nb);

    /// continue and break:

    /*** example 1 ***/
//    int nb2 = 0;
//    printf("enter a number less than 5: ");
//    while(1)  { /// infinite loop
//        scanf("%d", &nb2);
//
//        if (nb2 >= 5) {
//            printf("re-enter the number: ");
//            continue; /// go to the next iteration
//        }
//        printf("perfect %d", nb2);
//        break; /// get out of the loop
//    }

    /*** example 2 ***/
//    for (int k = 0; k < 10; k++) {
//        if (k %2 == 0) /// k is an even number
//            continue; /// go to the next iteration (k++)
//        printf("%d ", k);
//    }

    /*** Calculator ***/
    double d1=0, d2=0;
    char op = 0;

   do {
   scanf("%lf %c %lf", &d1, &op, &d2);
   switch(op) {
        case '+':
            printf("%.2lf\n",d1+d2);
            break;
        case '-':
            printf("%.2lf\n",d1-d2);
            break;
        case '/':
            printf("%.2lf\n",d1/d2);
            break;
        case '*':
            printf("%.2lf\n",d1*d2);
            break;
        default:
            printf("invalid operator");
   };
   
   }while ( op != 'q');
   


    return 0;
}
