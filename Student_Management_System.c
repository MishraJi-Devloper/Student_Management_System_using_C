#include <stdio.h>
#include <string.h>

#define SABSE_JYADAcHATRYA 100

struct Chatrya {
    char id[20];
    char naam[50];
    float gpa;
};

struct Chatrya chhatra[SABSE_JYADAcHATRYA];
int chhatraSankhya = 0;

void chhatraJod() {
    if (chhatraSankhya < SABSE_JYADAcHATRYA) {
        printf("Chatra ID dalein: ");
        scanf("%s", chhatra[chhatraSankhya].id);

        printf("Chatra ka naam dalein: ");
        scanf(" %[^\n]", chhatra[chhatraSankhya].naam);

        printf("Chatra ka GPA dalein: ");
        scanf("%f", &chhatra[chhatraSankhya].gpa);

        chhatraSankhya++;
        printf("\nChatra saflta purvak joda gaya!\n");
    } else {
        printf("Adhik se adhik chatra sankhya tak pahunch gaya hai.\n");
    }
}

void chhatraPradarshit() {
    printf("\nChatra Suchi:\n");
    printf("%-15s %-30s %-10s\n", "ID", "Naam", "GPA");

    for (int i = 0; i < chhatraSankhya; i++) {
        printf("%-15s %-30s %-10.2f\n", chhatra[i].id, chhatra[i].naam, chhatra[i].gpa);
    }
}

void chhatraKhoj() {
    char khojID[20];
    printf("Khojne ke liye chatra ID dalein: ");
    scanf("%s", khojID);

    int mila = 0;
    for (int i = 0; i < chhatraSankhya; i++) {
        if (strcmp(chhatra[i].id, khojID) == 0) {
            printf("\nChatra mil gaya:\n");
            printf("%-15s %-30s %-10s\n", "ID", "Naam", "GPA");
            printf("%-15s %-30s %-10.2f\n", chhatra[i].id, chhatra[i].naam, chhatra[i].gpa);
            mila = 1;
            break;
        }
    }

    if (!mila) {
        printf("\nChatra nahi mila.\n");
    }
}

int main() {
    int chunav;
    printf("<======| Swagat hai Student Prabandhan Pranali mein |======>\n");
    do {
        printf("\nChatra Database Prabandhan Pranali\n");
        printf("1. Chatra Jod\n");
        printf("2. Chatra Pradarshit\n");
        printf("3. Chatra Khoj\n");
        printf("4. Bahar Nikalein\n");
        printf("Apna chunav dalein: ");
        scanf("%d", &chunav);

        switch (chunav) {
            case 1:
                chhatraJod();
                break;
            case 2:
                chhatraPradarshit();
                break;
            case 3:
                chhatraKhoj();
                break;
            case 4:
                printf("\nPrrogram se bahar nikal rahe hain. Alvida!\n<======| Student Prabandhan Pranali ka istemal karne ke liye dhanyavad |======>\n");
                break;
            default:
                printf("\nAnvalid chunav. Kripaya phir se koshish karein.\n");
        }
    } while (chunav != 4);

    return 0;
}
