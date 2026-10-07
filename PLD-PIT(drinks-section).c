#include <stdio.h> 

int main(void) {

int item;
int drefilld1, drefilld2, drefilld3;
int refillcc, refillnc, refillnoc, prefillc;
float dbase, ddiscount, ddiscounted, dtotal, dtotfinal;


//drinks section coded by fritz
//Code Vocabulary_________________________________________________________________

//    -      drefilld1       =       drink refill decision 1
//    -      drefilld2       =       drink refill decision 2
//    -      drefilld3       =       drink refill decision 3
//    -      refillcc        =       refill card charge option
//    -      refillnc        =       new refill card option
//    -      refillnoc       =       no refill card option
//    -      prefillc        =       purchased refill card 
//    -      dbase           =       base price of drink
//    -      ddiscount       =       discount of drink
//    -      ddiscounted     =       discounted price of drink
//    -      dtotal          =       total price of drinks
//    -      dtotfinal       =       final total price of drinks

//Drinks Menu_________________________________________________________________

printf("==================== Drinks_Menu ====================\n");
printf("---------------------_ Coffee _----------------------\n");
printf("Item No.1 - Mocha - ₱85\n");
printf("Item No.2 - Cappuccino - ₱75\n");
printf("Item No.3 - Latte - ₱75\n");
printf("Item No.4 - Iced Coffee - ₱65\n");
printf("Item No.5 - Espresso - ₱60\n");
printf("Item No.6 - Americano - ₱55\n");
printf("-----------------------_ Tea _-----------------------\n");
printf("Item No.7 - Milk Tea - ₱70\n");
printf("Item No.8 - Iced Tea - ₱45\n");
printf("Item No.9 - Calamnsi Tea - ₱45\n");
printf("Item No.10 - Green Tea - ₱40\n");
printf("Item No.11 - Black Tea - ₱40\n");
printf("--------------------_ Soft_Drinks _------------------\n");
printf("Item No.12 - Coca Cola - ₱30\n");
printf("Item No.13 - Pepsi - ₱30\n");
printf("Item No.14 - Sprite - ₱30\n");
printf("Item No.15 - Mountain Dew - ₱30\n");
printf("Item No.16 - Royal - ₱30\n");
printf("-------------------_ Energy_Drinks _-----------------\n");
printf("Item No.17 - Monster Energy - ₱110\n");
printf("Item No.18 - Red Bull - ₱100\n");
printf("Item No.19 - Cobra - ₱40\n");
printf("Item No.20 - Sting - ₱40\n");
printf("=====================================================\n\n");

//Phase 1 ordering
    
printf("              What would you like to order?\n");
printf("                     >>>   ");
scanf("%d", &item);

if(item > 20 || item < 1)
{
    printf("ERROR: INVALID INPUT");
    return 0;
}

//Phase 2 Decisions (note: gi kapoy ko aning pag ayo sa mga brackets)
//_________________________________________________________________________

printf("            Would you like refill for your drink?\n");
printf("                   (1 - yes, 2 - no)\n");
printf("                     >>>   ");
scanf("%d", &drefilld1);

if(drefilld1 > 2 || drefilld1 < 1) {
    printf("ERROR: INVALID INPUT");
    return 0;
}
    
if(drefilld1 == 1) {

    printf("               Do you have a refill card?\n");
    printf("                   (1 - yes, 2 - no)\n");
    printf("                     >>>   ");
    scanf("%d", &drefilld2);

    if(drefilld2 > 2 || drefilld2 < 1) {
        printf("ERROR: INVALID INPUT");
        return 0;
    }

    if(drefilld2 == 1) {

        printf("       How much are you going to charge your refill card?\n");
        printf("                     >>>   ");
        scanf("%d", &refillcc); 

        if(refillcc > 0) {
            ddiscount = 0.15;
        }

        if(refillcc <= 0) {
            printf("ERROR: NGANO KA NAG INGON GUSTO KA MAG REFILL KUNG DLI MAN DIAY KA GUSTO!!!");
            return 0;
        }
    }

    if(drefilld2 == 2) {

        printf("            Would you like to buy a refill card?\n");
        printf("     You get a 15%% discount for each refill for 3 months\n");
        printf("               The refill card costs ₱250\n");
        printf("                    (1 - yes, 2 - no)\n");
        printf("                     >>>   ");
        scanf("%d", &drefilld3);
        if(drefilld3 > 2 || drefilld3 < 1) {
            printf("ERROR: INVALID INPUT");
            return 0;
        }
        if(drefilld3 == 1) {prefillc = 250;}
        else {prefillc = 0;}

        if(drefilld3 == 1) {ddiscount = 0.15;}
        else {ddiscount = 0;}

        if(drefilld3 == 1) {

            printf("             How much are you planning to refill?\n");
            printf("                     >>>   ");
            scanf("%d", &refillnc);

            if(refillnc <= 0) {
                printf("ERROR: NGANO KA NAG INGON GUSTO KA MAG REFILL KUNG DLI MAN DIAY KA GUSTO!!!");
                return 0;
            }
        }

        else {

            printf("          Alright, how much would you like to refill still?\n");
            printf("                     >>>   ");
            scanf("%d", &refillnoc);

            if(refillnoc <= 0) {
                printf("ERROR: NGANO KA NAG INGON GUSTO KA MAG REFILL KUNG DLI MAN DIAY KA GUSTO!!!");
                return 0;
            }
        }
    }
}


//Calculating base values from inputs__________________________________________

if(item == 1) {dbase = 85;}
else if (item == 2) {dbase = 75;}
else if (item == 3) {dbase = 75;}
else if (item == 4) {dbase = 65;}
else if (item == 5) {dbase = 60;}
else if (item == 6) {dbase = 55;}
else if (item == 7) {dbase = 70;}
else if (item == 8) {dbase = 45;}
else if (item == 9) {dbase = 45;}
else if (item == 10) {dbase = 40;}
else if (item == 11) {dbase = 40;}
else if (item == 12) {dbase = 30;}
else if (item == 13) {dbase = 30;}
else if (item == 14) {dbase = 30;}
else if (item == 15) {dbase = 30;}
else if (item == 16) {dbase = 30;}
else if (item == 17) {dbase = 110;}
else if (item == 18) {dbase = 100;}
else if (item == 19) {dbase = 40;}
else {dbase = 40;}


//Calculating branch from values__________________________________________

if (drefilld1 == 1 && drefilld2 == 1 && refillcc > 0) {
    dtotal = dbase * refillcc;
    ddiscounted = ddiscount * dtotal;
    dtotfinal = dtotal - ddiscounted;
}
else if (drefilld1 == 1 && drefilld2 == 2 && drefilld3 == 1 && refillnc > 0) {
    dtotal = dbase * refillnc;
    ddiscounted = ddiscount * dtotal;
    dtotfinal = dtotal- ddiscounted;
}
else if (drefilld1 == 1 && drefilld2 == 2 && drefilld3 == 2 && refillnoc > 0) {
    dtotfinal = dbase * refillnoc;
}
else {
    dtotfinal = dbase;
}



//Debugging_____________________________________________________________________

printf("%d\n", item);
printf("%d\n", drefilld1);
printf("%d\n", drefilld2);
printf("%d\n", drefilld3);
printf("%d\n", refillcc);
printf("%d\n", refillnc);
printf("%d\n", refillnoc);
printf("%d\n", prefillc);
printf("%.2f\n", dbase);
printf("%.2f\n", ddiscount);
printf("%.2f\n", ddiscounted);
printf("%.2f\n", dtotal);
printf("%.2f\n", dtotfinal);

return 0;
}