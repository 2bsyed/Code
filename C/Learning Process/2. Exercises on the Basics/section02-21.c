#include <stdio.h>
#include <stdlib.h>

void printArrayRow(double arr[][12], int rows, int columns) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++)
            printf("%.2lf ", arr[i][j]);
        printf("\n");
    }
}

void printArrayColumn(double arr[][12], int rows, int columns) {
    for(int i = 0; i < columns; i++) {
        for(int j = 0; j < rows; j++)
            printf("%.2lf ", arr[j][i]);
        printf("\n");
    }
}
int main() {
    double rainFall[5][12] = { /// 5 years, 12 months
                                {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
                                {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
                                {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
                                {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
                                {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
                            };
    printArrayColumn(rainFall, 5, 12);
}
