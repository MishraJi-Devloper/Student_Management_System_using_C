#include <stdio.h>
#include <string.h>

#define SABSE_JYADAcHATRYA 100

struct Chatrya {
    char id[20];
    char name[50];
    float gpa;
};

struct Chatrya students[SABSE_JYADAcHATRYA];
int Chatraya_Sankhya = 0;

void addStudent() {
    if ( Chatraya_Sankhya< SABSE_JYADAcHATRYA) {
        printf("Enter student ID: ");
        scanf("%s", students[Chatraya_Sankhya].id);

        printf("Enter student name: ");
        scanf(" %[^\n]", students[Chatraya_Sankhya].name);

        printf("Enter student GPA: ");
        scanf("%f", &students[Chatraya_Sankhya].gpa);

      Chatraya_Sankhya++;
        printf("\nStudent added successfully!\n");
    } else {
        printf("Maximum number of students reached.\n");
    }
}

void displayStudents() {
    printf("\nStudent List:\n");
    printf("%-15s %-30s %-10s\n", "ID", "Name", "GPA");

    for (int i = 0; i < Chatraya_Sankhya; i++) {
        printf("%-15s %-30s %-10.2f\n", students[i].id, students[i].name, students[i].gpa);
    }
}

void searchStudent() {
    char searchId[20];
    printf("Enter student ID to search: ");
    scanf("%s", searchId);

    int found = 0;
    for (int i = 0; i < Chatraya_Sankhya; i++) {
        if (strcmp(students[i].id, searchId) == 0) {
            printf("\nStudent found:\n");
            printf("%-15s %-30s %-10s\n", "ID", "Name", "GPA");
            printf("%-15s %-30s %-10.2f\n", students[i].id, students[i].name, students[i].gpa);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nStudent not found.\n");
    }
}

int main() {
    int choice;
        printf("<======| Welcome to Student Management System |======>\n");
    do {
        printf("\nStudent Database Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                printf("\nExiting program. Goodbye!\n<======| Thank you for using Studnet Management System |======>\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
