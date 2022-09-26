#include <stdio.h>
#include <stdlib.h>

int main() {
    double rainFall[5][12] = { /// 5 years, 12 months
                                {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
                                {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
                                {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
                                {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
                                {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
                            };

    /** calculate the rain fall of each year **/
    double rainFallYear[5] = {};
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 12; j++)
            rainFallYear[i] += rainFall[i][j];

    for(int i = 0; i < 5; i++)
        printf("%.2lf ", rainFallYear[i]);

        printf("\n");

    /** calculate the monthly average of each month**/
    double monthlyAverage[12] = {};
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 5; j++)
            monthlyAverage[i] += rainFall[j][i];
        monthlyAverage[i] /= 5;
    }

    for(int i = 0; i < 12; i++)
        printf("%.2lf ", monthlyAverage[i]);
    return 0;
}
