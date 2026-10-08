#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int order, confirm, amnt;

    float php, totalphp;

    char display [50];

    printf("CHOOSE THE NUMBER OF YOUR ORDER FROM THE FOLLOWING: \n 1. ICE CREAM SANDWICH \n 2. HAM AND CHEESE SANDWICH \n 3. PEPPERONI PIZZA \n ");
    scanf("%d", &order);

    if (order < 1) {
        printf("INVALID ORDER: PLEASE CHOOSE AN AVAILABLE ORDER");

        return 0;
    } else if (order > 3) {
        printf("INVALID ORDER: PLEASE CHOOSE AN AVAILABLE ORDER");

        return 0;
    }

    if (order == 1) {
        printf("ICE CREAM SANDWICH (30PHP) \n CONFIRM(1)/CANCEL(2) ORDER: ");
        scanf("%d", &confirm);
        printf("PLEASE ENTER AMOUNT (20 MAX):");
        scanf("%d", &amnt);
        php = 30;
        sprintf(display, "ICE CREAM SANDWICH");
        totalphp = php * amnt;
        
    } else if (order == 2) {
        printf("HAM AND CHEESE SANDWICH (25PHP) \n CONFIRM(1)/CANCEL(2): ");
        scanf("%d", &confirm);
        printf("PLEASE ENTER AMOUNT (20 MAX):");
        scanf("%d", &amnt);
        php = 25;
        sprintf(display, "HAM AND CHEESE SANDWICH");
        totalphp = php * amnt;

    } else if (order == 3) {
        printf("PEPPERONI PIZZA (60PHP) \n CONFIRM(1)/CANCEL(2): ");
        scanf("%d", &confirm);
        printf("PLEASE ENTER AMOUNT (20 MX):");
        scanf("%d", &amnt);
        php = 60;
        sprintf(display, "PEPPERONI PIZZA");
        totalphp = php * amnt;

    }

    if (amnt < 1 || amnt > 20) {
        printf("INVALID INPUT: INPUT TOO LOW/HIGH");

        return 0;
    }

    if (confirm == 1) {
        printf("ORDER SUCCESSFUL: PLEASE CONTINUE TO CHECKOUT\n");
    } else if (confirm == 2) {
        printf("ORDER CANCELLED");

        return 0;
    } else {
        printf("INVALID INPUT \n");

        return 0;
    }

    printf("\n ------- ORDER --------- \n");
    printf("ORDER: %s \n", display);
    printf("ORDER AMOUNT: %d \n", amnt);
    printf("COST PER ORDER: %.2f \n", php);
    printf("TOTAL COST: %.2fphp \n", totalphp);
    printf("THANK YOU FOR ORDERING! \n");

    return 0;
}