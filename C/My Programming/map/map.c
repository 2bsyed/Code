#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_CITIES 5

typedef struct {
    char name[50];
    char attractions[100];
} City;

void printDistanceMap(int distances[][NUM_CITIES], City cities[]) {
    int i, j;
    printf("Distance Map:\n");
    printf("--------------------------------------------------------\n");
    printf("%-15s%-15s%-15s%-15s%-15s%-15s\n", "Cities", "Dhaka", "Sylhet", "Khulna", "Chittagong", "Cumilla");
    printf("--------------------------------------------------------\n");
    for (i = 0; i < NUM_CITIES; i++) {
        printf("%-15s", cities[i].name);
        for (j = 0; j < NUM_CITIES; j++) {
            printf("%-15d", distances[i][j]);
        }
        printf("\n");
    }
    printf("--------------------------------------------------------\n");
}

int main() {
    // Create an array of cities
    City cities[NUM_CITIES];
    strcpy(cities[0].name, "Dhaka");
    strcpy(cities[0].attractions, "Lalbagh Fort, Ahsan Manzil, National Museum");
    strcpy(cities[1].name, "Sylhet");
    strcpy(cities[1].attractions, "Ratargul Swamp Forest, Jaflong, Shahjalal Shrine");
    strcpy(cities[2].name, "Khulna");
    strcpy(cities[2].attractions, "Sundarbans, Shat Gambuj Mosque, Khulna Royal Palace");
    strcpy(cities[3].name, "Chittagong");
    strcpy(cities[3].attractions, "Cox's Bazar, Patenga Beach, Foy's Lake");
    strcpy(cities[4].name, "Cumilla");
    strcpy(cities[4].attractions, "Mainamati Ruins, Lalmai Hills, Shalbon Vihara");

    // Create a 2D array to store distances between cities
    int distances[NUM_CITIES][NUM_CITIES] = {
        {0, 241, 314, 243, 84},
        {241, 0, 394, 263, 152},
        {314, 394, 0, 177, 308},
        {243, 263, 177, 0, 215},
        {84, 152, 308, 215, 0}
    };

    // Print the distance map
    printDistanceMap(distances, cities);

    // Display visiting places or attractions
    int i;
    for (i = 0; i < NUM_CITIES; i++) {
        printf("\n%s Attractions: %s\n", cities[i].name, cities[i].attractions);
    }

    return 0;
}
