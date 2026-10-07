#include <stdio.h>
int main(){
    int gamingpc;
    int nongamingpc;
    int hours;
    int minutes;
    int pctype;
    int studentorsenior;
    int timeduration;
    int cubicle;

    float totaltime;
    float gamingpcfee;
    float nongamingpcfee;

    char *duration;

    printf("===WELCOME TO GROUP 7 INTERNET CAFE===\n");
    printf("     ===Powered by StarLink===\n");
    printf("\n===Choose what type of PC want to use===\n");
    printf("1--Gaming PC \t 2--Non-Gaming PC\n");
    printf("\n>>>Enter your PC type: ");
    scanf("%d", &pctype);

    if (pctype < 1 || pctype > 2) {
        printf("ERROR: Invalid selection input\n");
        return 0;
    }

    printf("\n===Choose how many hours and minutes you want to use the PC===");
    printf("\n1 -- (1 hour) \t2 -- (2 hours) \t3 -- (3 hours) \t4 -- (6 hours) \t5 -- (12 hours)\n");
    printf("\n>>>Enter your time duration: ");
    scanf("%d", &timeduration);

    if (timeduration <= 0 || timeduration > 6) {
        printf("ERROR: Invalid hour value");

    return 0;
    }

    printf("\n===Cubicle===\n");
    printf(">>>Enter the vacant cubicle number: ");
    scanf("%d", &cubicle);

    if (cubicle < 1) {
        printf("\n====Go to the cashier====\n");
        printf("Enter the cubicle number given by the cashier: ");
        scanf("%d", &cubicle);
    } else if (cubicle < 0) {
        printf("ERROR: Invalid Cubicle Input");

    return 0;
    }

    printf("\n===Are you a student or senior?===\n");
    printf("(0 -- for Regular  1 -- for Student/Senior)\n");
    printf("\n>>>Enter value: ");
    scanf("%d", &studentorsenior);

    if (studentorsenior < 1 || studentorsenior > 2) {
        printf("ERROR: Invalid input\n");
        return 0;
    }
    

    return 0;
}
