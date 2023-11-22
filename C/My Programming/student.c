#include <stdio.h>

// Define a structure to represent a student
struct Student {
    char name[50];
    int id;
    char section;
    float cgpa;
    char semester[20];
};

int main() {
    // Declare an array of structures to store student records
    printf("Enter Students Number\n");
    int n;
    scanf("%d",&n);
    struct Student students[n];

    // Collect information for each student from the user
    for (int i = 0; i < n; i++) {
        printf("Enter information for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Section: ");
        scanf(" %c", &students[i].section);
        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
        printf("Semester: ");
        scanf("%s", students[i].semester);
    }

    // Display the collected information in the desired format
    printf("\nName\t\tID\tSection\tCGPA\tSemester\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t\t%d\t%c\t%.2f\t%s\n", students[i].name, students[i].id, students[i].section,
               students[i].cgpa, students[i].semester);
    }

    return 0;
}
