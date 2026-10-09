# Internet Cafe Shop System in C language

## A simple C program with a function of calculations and decision making

### This project is proposed by a 1st year BSCpE students from University of Science and Technology of Southern Philippines (USTP)
### Group-7 Members:
### Abbu, Mike Jefferson
### Colinares, David Khael
### Prudente, Fritz
### Requierme, Sam

<img width="629" height="576" alt="Screenshot 2026-10-09 221810" src="https://github.com/user-attachments/assets/ca87077a-1106-4bd4-9c60-38fdfffbfd6c" />


***Program Language in C***


## source code

```c
#include <stdio.h>
int main () {

//this system created by Group-7 members

/*members:

Abbu, Mike Jefferson
Colinares, David Khael
Prudente, Fritz
Requierme, Sam

*/

// Part 1 INTRODUCTION
    int pctype = 0;
    int timeduration = 0;
    int cubicle = 0;
    int membershipcard = 0;
    int membershipcard2 = 0;
    int membershipcardfixedcost = 0;

// Part 2 DECISION
    int addon = 0;
    int drinkitem = 0;
    int fooditem = 0;

//Part 3 CALCULATION VARIABLES
    //INTERNET
    float pcfee = 0.00;
    float cafecharge = 0.00;

    //DRINKS
    int drinkQ = 0;     //drink quantity
    float drinkprice = 0.00;
    float drinktotal = 0.00;
    
    //FOOD
    int foodQ = 0;   //food quantity    
    
    float foodprice = 0.00;
    float foodtotal = 0.00;

    //FINAL CALCULATIONS VARIABLES
    float carddiscount = 0.00;           //if user has a membership card it will further assign to fixed discount of 15% or 0.15
    float discountedamount = 0.00;
    float finalamount = 0.00;
    float totalamount = 0.00;

    //Part 4 CATEGORY
    char drinktype[100];     //type of drink the user wants to buy
    char foodtype[100];      //type of food the user wants to buy
    char *typeofpc;     //indicates the type of computer the user wants to use
    char *duration;     //how long is the user use
    char *timechosen;   //user's choice of time duration
    char *addonchoice;  //the addon decision wether the user wants to add drinks or food or both or none

    //     pctype  =      " a decision variable if you want to use gaming or non-gaming computer "

    //the introduction of cafe coded by Sam
    printf("====WELCOME TO THE INTERNET CAFE====\n"); 
    printf("  ===Powered by GROUP-7 Members===\n");
    printf("\n\n\n===Which type of Computer you want to use?====\n");
    printf("1 -- Gaming Computer Php 50.00   2 -- Non-Gaming Computer Php 30.00\n"); //gaming pc is php 50 and non-gaming pc is php 30 are fixed price and multiplied by hours of use 
    printf("\n>>>Enter your decision: ");
    scanf("%d", &pctype);

    if (pctype < 1 || pctype > 2) {
        printf("\nERROR: Invalid selection input\n");
        return 0;
    }
    else if (pctype == 1) {
        typeofpc = "Gaming Computer (Php 50.00)";
        pcfee = 50.00;
    } 
    else {
        typeofpc = "Non-Gaming Computer (Php 30.00)";
        pcfee = 30.00;
    }
    //user will input how many hours he/she wants to use the computer

    printf("\n\n\n====How many hours you want to use the computer?====\n");
    printf("1 -- (1 hour)  \t2 -- (2 hours) \t3 -- (3 hours) \t4 -- (6 hours) \t5 -- (12 hours)\n");
    printf("\n>>>Enter your decision: ");
    scanf("%d", &timeduration);

    //the fixed price of the computer is multiplied by the hours to get the total price of the computer usage

    if (timeduration == 1) {
        duration = "Short Usage";
        timechosen = "1 hour";
        cafecharge = pcfee * 1;
    } else if (timeduration == 2) {
        duration = "Average Usage";
        timechosen = "2 hours";
        cafecharge = pcfee * 2;
    } else if (timeduration == 3) {
        duration = "Medium Usage";
        timechosen = "3 hours";
        cafecharge = pcfee * 3;
    } else if (timeduration == 4) {
        duration = "Long Usage";
        timechosen = "6 hours";
        cafecharge = pcfee * 6;
    } else if (timeduration == 5) {
        duration = "Half Day";
        timechosen = "12 hours";
        cafecharge = pcfee * 12;
    } else {
        printf("\nInvalid time selection!\n");
        return 0;
    }

    //The user will input what cubicle he/she wants
    //If the user inputs 0, it means there is no available cubicle
    //The user will then go to the cashier and ask for a cubicle number

    printf("\n\n\n====Please take a number beside of the machine====\n");
    printf("\nInput your cubicle number (1-30) if there none input (0)\n");
    printf("\n>>>Enter your decision: ");
    scanf("%d", &cubicle);

    if (cubicle < 0 || cubicle > 30) {
        printf("\nERROR: Invalid Cubicle Input\n");
        return 0;
    }    
    else if (cubicle == 0) {
        printf("\n\n\n====Go to the cashier====\n");
        printf("\n>>>Enter the cubicle number given by the cashier: ");
        scanf("%d", &cubicle);
    }
    else {    //nothing because if there is an else if, it must have an else function so it will run
    }

    //addon section or decision section if the user wants to add drinks or food or both or none.

    printf("\n\n\n===Would you like an Add-on?===\n");              
    printf("0 -- No Thanks  1 -- Drinks   2 -- Snacks  3 -- Both (Drinks & Snacks)\n");
    printf("\n>>>Enter your decision: ");
    scanf("%d", &addon);

    //addon decision, if user wants addon then it will display that he/she added or not. by Sam
    if (addon < 0 || addon > 3) {
        printf("\nERROR: Invalid Add-on Input\n");
        return 0;
    }
    else if (addon == 0) {
        addonchoice = "No Add-on";
    } 
    else if (addon == 1) {
        addonchoice = "Drinks";
    } 
    else if (addon == 2) {
        addonchoice = "Snacks";
    } 
    else { 
        addonchoice = "Both (Drinks & Snacks)";
    } 
    //this is Sam's code ends


    //Drinks menu section_________________________________________________________(made by Fritz Gerald C. Prudente)
    if (addon == 1 || addon == 3) {
    printf("\n\n---------------------_Coffee (Cup)_----------------------\n");
        printf("Item No.1 - Mocha - Php 85.00\n");
        printf("Item No.2 - Cappuccino - Php 75.00\n");
        printf("Item No.3 - Latte - Php 75.00\n");
        printf("Item No.4 - Iced Coffee - Php 65.00\n");
        printf("Item No.5 - Espresso - Php 60.00\n");
        printf("Item No.6 - Americano - Php 55.00\n");
        printf("-----------------------_Tea (Cup)_-----------------------\n");
        printf("Item No.7 - Milk Tea - Php 70.00\n");
        printf("Item No.8 - Iced Tea - Php 45.00\n");
        printf("Item No.9 - Calamnsi Tea - Php 45.00\n");
        printf("Item No.10 - Green Tea - Php 40.00\n");
        printf("Item No.11 - Black Tea - Php 40.00\n");
        printf("--------------------_Soft_Drinks (Bottle)_------------------\n");
        printf("Item No.12 - Coca Cola - Php 30.00\n");
        printf("Item No.13 - Pepsi - Php 30.00\n");
        printf("Item No.14 - Sprite - Php 30.00\n");
        printf("Item No.15 - Mountain Dew - Php 30.00\n");
        printf("Item No.16 - Royal - Php 30.00\n");
        printf("-------------------_Energy_Drinks (Bottle)_-----------------\n");
        printf("Item No.17 - Monster Energy - Php 110.00\n");
        printf("Item No.18 - Red Bull - Php 100.00\n");
        printf("Item No.19 - Cobra - Php 40.00\n");   
        printf("Item No.20 - Sting - Php 40.00\n");
        printf("=====================================================\n");
        printf("\n>>>Enter your Drink Item No.: ");
        scanf("%d", &drinkitem);

        if (drinkitem < 1 || drinkitem > 20) {
            printf("\nERROR: Invalid selection input\n");
            return 0;
        } 
    
        else if (drinkitem <= 11) {
            printf("\n\n===How much are you planning to refill?===\n");      
            printf("\n>>>Enter your decision: ");
            scanf("%d", &drinkQ);

        }
   
        else if (drinkitem >= 12) {
            printf("\n\n\n===How many cans are you going to buy?===\n");
            printf("\n>>>Enter your decision: ");
            scanf("%d", &drinkQ);
        }
        
    }

    //food menu section_________________________________________________________(By yours truly hehe: Colinares, David Khael R.)
    if (addon == 2 || addon == 3) {  
        printf("\n\n\n==================== Food_Menu ====================\n");
        printf("-----------------_ Sandwiches _---------------------\n");
        printf("Item No.1 - Ice Cream Sandwich - Php 30\n");
        printf("Item No.2 - Ham and Cheese Sandwich - Php 35\n");
        printf("Item No.3 - Hotdog Sandwich - Php 45\n");
        printf("--------------------_ Pizza _------------------------\n");
        printf("Item No.4 - Plain Cheese Pizza (7/9/12-inch) - Php 100\n");
        printf("Item No.5 - Pepperoni Pizza (7/9/12-inch) - Php 150\n");
        printf("Item No.6 - Hawaiian Pizza (7/9/12-inch) - Php 150\n");
        printf("-------------------_ Quick_Snacks _-----------------\n");
        printf("Item No.7 - French Fries - Php 45\n");
        printf("Item No.8 - Chicken Nuggets - Php 50\n");
        printf("Item No.9 - Mozzarella Sticks - Php 45\n");
        printf("Item No.10 - Onion Rings - Php 40\n");
        printf("Item No.11 - Popcorn - Php 25\n");
        printf("Item No.12 - Nachos with Cheese - Php 40\n");
        printf("Item No.13 - Corndogs - Php 30\n");
        printf("-----------------_ Quick_Meals _--------------------\n");
        printf("Item No.14 - Instant Ramen - Php 45\n");
        printf("Item No.15 - Pancit Canton - Php 30\n");
        printf("--------------------_ Desserts _--------------------\n");
        printf("Item No.16 - Chocolate Chip Cookies - Php 20\n");
        printf("Item No.17 - Waffles - Php 35\n");
        printf("=====================================================\n\n");
        printf("\n>>>Enter your Food Item No.: ");
        scanf("%d", &fooditem);
            if (fooditem < 1 || fooditem > 20) {
            printf("\nERROR: Invalid selection input\n");
            return 0;
        }
        
        if (fooditem >= 1 && fooditem <= 3) {
            printf("\n\n\n===How much sandwiches are you going to buy?===\n");
            printf("\n>>>Enter your decision: ");
            scanf("%d", &foodQ);
        }
        
        else if (fooditem >= 4 && fooditem <= 6) {   
            printf("\n\n\n===How many boxes of it are you going to buy?===\n");
            printf("\n>>>Enter your decision: ");
            scanf("%d", &foodQ);
        }
        else if (fooditem >= 7 && fooditem <= 13) {   
            printf("\n\n\n===How many sets are you going to buy?===\n");
            printf("\n>>>Enter your decision: ");
            scanf("%d", &foodQ);
        }
        else if (fooditem >= 14 && fooditem <= 15) {   
            printf("\n\n\n===How many bowls of noodles are you going to buy?===\n");
            printf("\n>>>Enter your decision: ");
            scanf("%d", &foodQ);
        }
        else {   
            printf("\n\n\n===How many desserts are you going to buy?===\n");
            printf("\n>>>Enter your decision: ");
            scanf("%d", &foodQ);
        }
    }

    if (addon == 0){
        addonchoice = "No Addons";
    } else if (addon == 1){
        addonchoice = "Drink Only";
    } else if (addon == 2) {
        addonchoice = "Food Only";
    } else {addonchoice = "Both (Drink and Food)";}

    printf("\n\n\n===Do you have an Internet Cafe membership card?===\n");
    printf("(1 -- Yes   or   2 -- No)\n");
    printf("\n>>>Enter value: ");
    scanf("%d", &membershipcard);
    
    if (membershipcard < 1 || membershipcard > 2) {
        printf("ERROR: Invalid input\n");
        return 0;
    }
    if (membershipcard == 1) {                                               
        carddiscount = 0.15;  
    } else {
        printf("\n\n\n====Would you like to buy a membership card?====\n");
        printf("===You get a 15%% discount for each purchase for 3 months===\n");
        printf("==The membership card costs Php 250==\n");
        printf("\t(1 - yes, 2 - no)\n");
        printf("\n>>>Enter your decision: ");
        scanf("%d", &membershipcard2);
            
        if(membershipcard2 > 2 || membershipcard2 < 1) {
            printf("\nERROR: INVALID INPUT\n");
            return 0;
        } 
        else if (membershipcard2 == 1) { 
        membershipcardfixedcost = 250;
        carddiscount = 0.15;
        } 
        else if (membershipcard2 == 2) {
            
        }
        else {
            printf("\nERROR: INVALID INPUT\n");
            return 0;
        }
    }


//drink item sprintf() ni David________________________________________________________________________   
     

    if(drinkitem == 1) {
        drinkprice = 85.00;
        sprintf(drinktype, "Mocha");
    }
    else if (drinkitem == 2) {
        drinkprice = 75.00;
        sprintf(drinktype, "Cappuccino");
    }
    else if (drinkitem == 3) {
        drinkprice = 75.00;
        sprintf(drinktype, "Latte");
    }
    else if (drinkitem == 4) {
        drinkprice = 65.00;
        sprintf(drinktype, "Iced Coffee");
    }
    else if (drinkitem == 5) {
        drinkprice = 60.00;
        sprintf(drinktype, "Espresso");
    }
    else if (drinkitem == 6) {
        drinkprice = 55.00;
        sprintf(drinktype, "Americano");
    }
    else if (drinkitem == 7) {
        drinkprice = 70.00;
        sprintf(drinktype, "Milk Tea");
    }
    else if (drinkitem == 8) {
        drinkprice = 45.00;
        sprintf(drinktype, "Iced Tea");
    }
    else if (drinkitem == 9) {
        drinkprice = 45.00;
        sprintf(drinktype, "Calamansi Tea");
    }
    else if (drinkitem == 10) {
        drinkprice = 40.00;
        sprintf(drinktype, "Green Tea");
    }
    else if (drinkitem == 11) {
        drinkprice = 40.00;
        sprintf(drinktype, "Black Tea");
    }
    else if (drinkitem == 12) {
        drinkprice = 30.00;
        sprintf(drinktype, "Coca Cola");
    }
    else if (drinkitem == 13) {
        drinkprice = 30.00;
        sprintf(drinktype, "Pepsi");
    }
    else if (drinkitem == 14) {
        drinkprice = 30.00;
        sprintf(drinktype, "Sprite");
    }
    else if (drinkitem == 15) {
        drinkprice = 30.00;
        sprintf(drinktype, "Mountain Dew");
    }
    else if (drinkitem == 16) {
        drinkprice = 30.00;
        sprintf(drinktype, "Royal");
    }
    else if (drinkitem == 17) {
        drinkprice = 110.00;
        sprintf(drinktype, "Monster Energy");
    }
    else if (drinkitem == 18) {
        drinkprice = 100.00;
        sprintf(drinktype, "Red Bull");
    }
    else if (drinkitem == 19) {
        drinkprice = 40.00;
        sprintf(drinktype, "Cobra");
    }
    else {
        drinkprice = 40.00;
        sprintf(drinktype, "Sting");
    }

    drinktotal = drinkprice * drinkQ;

//food item calculation______________________________________________________________

    if (fooditem == 1) {
        foodprice = 30.00;
        sprintf(foodtype, "Ice Cream Sandwich");
    }
    else if(fooditem == 2) {
        foodprice = 35.00;
        sprintf(foodtype, "Ham and Cheese Sandwich");
    }
    else if(fooditem == 3) {
        foodprice = 45.00;
        sprintf(foodtype, "Hotdog Sandwich");
    }
    else if(fooditem == 4) {
        foodprice = 100.00;
        sprintf(foodtype, "Plain Cheese Pizza");
    }
    else if(fooditem == 5) {
        foodprice = 150.00;
        sprintf(foodtype, "Pepperoni Pizza");
    }
    else if(fooditem == 6) {
        foodprice = 150.00;
        sprintf(foodtype, "Hawaiian Pizza");
    }
    else if(fooditem == 7) {
        foodprice = 45.00;
        sprintf(foodtype, "French Fries");
    }
    else if(fooditem == 8) {
        foodprice = 50.00;
        sprintf(foodtype, "Chicken Nuggets");
    }
    else if(fooditem == 9) {
        foodprice = 45.00;
        sprintf(foodtype, "Mozzarella Sticks");
    }
    else if(fooditem == 10) {
        foodprice = 40.00;
        sprintf(foodtype, "Onion Rings");
    }
    else if(fooditem == 11) {
        foodprice = 25.00;
        sprintf(foodtype, "Popcorn");
    }
    else if(fooditem == 12) {
        foodprice = 40.00;
        sprintf(foodtype, "Nachos with Cheese");
    }
    else if(fooditem == 13) {
        foodprice = 30.00;
        sprintf(foodtype, "Corndogs");
    }
    else if(fooditem == 14) {
        foodprice = 45.00;
        sprintf(foodtype, "Instant Ramen");
    }
    else if(fooditem == 15) {
        foodprice = 30.00;
        sprintf(foodtype, "Pancit Canton");
    }
    else if(fooditem == 16) {
        foodprice = 20.00;
        sprintf(foodtype, "Chocolate Chip Cookies");
    }
    else {
        foodprice = 35.00;
        sprintf(foodtype, "Waffles");
    }

    foodtotal = foodprice * foodQ;

//membership card discount calculation (FINAL)_________________________________________________

totalamount = foodtotal + drinktotal + cafecharge;
discountedamount = totalamount * carddiscount;
finalamount = (membershipcardfixedcost + totalamount) - discountedamount;

//RECIEPT_____________________________________________________________________________

printf("\n=====================RECEIPT=====================\n");
printf("Computer Type: %s\n", typeofpc);
printf("Time Chosen: %s\n", timechosen);
printf("Duration Type: %s\n", duration);
printf("Cafe Fee: Php %.2f\n", cafecharge);
printf("Addons: %s\n", addonchoice);

if (addon == 1) {
    printf("Drink Item: %s\n", drinktype);
    printf("Drink Refills: %d\n", drinkQ);
    printf("Drink Price: Php %.2f\n", drinkprice);
    printf("Drink Total: Php %.2f\n", drinktotal);
} else if (addon == 2) {
    printf("Food Item: %s\n", foodtype);
    printf("Food Quantity: %d\n", foodQ);
    printf("Food Price: Php %.2f\n", foodprice);
    printf("Food Total: Php %.2f\n", foodtotal);
} else if (addon == 3) {
    printf("Drink Item: %s \n", drinktype);
    printf("Drink Quality: %d \n", drinkQ);
    printf("Drink Price: Php %.2f\n", drinkprice);
    printf("Drink Total: Php %.2f\n", drinktotal);
    printf("Food Item: %s\n", foodtype);
    printf("Food Quantity: %d\n", foodQ);
    printf("Food Price: Php %.2f \n", foodprice);
    printf("Food Total: Php %.2f \n", foodtotal);
}
printf("Discount:  %.2f %%\n", carddiscount * 100); //:)) Php = No %% = Yes
printf("Subtotal Amount: Php %.2f\n", totalamount);
printf("Amount Discounted: Php %.2f\n", discountedamount);
printf("Total Amount: Php %.2f\n", finalamount);
printf("=================================================\n");
printf("          Cubicle Number: %d\n", cubicle);




//MGA AFTER THOUGHTS HAHAHAHAHAH___________________________________________________________________________________________________________________________________________



//⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⣀⣤⣴⠶⠟⠋⠁⠀⢠⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⣿⣿⣿⣿⣿
//⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣷⡾⠿⠛⠋⠉⠀⠀⠀⠀⠀⠀⠀⠙⢦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣿⣿⣿⣿
//⣿⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⣿
//⣿⣿⣿⣿⣿⣿⡿⠁⠀⢀⡴⠚⠒⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡆⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣤⣤⣤⣤⣤⣄⣀⣀⣸⣿⣿⣿
//⣿⣿⣿⣿⣿⡿⠁⣀⡴⠋⠀⠀⠀⠀⢳⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡀⢸⠀⠀⠀⠀⠀⠀⣠⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
//⣿⣿⣿⣿⣿⠟⠋⠉⠀⠀⠀⠀⣠⣿⠿⢤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣠⣤⣤⣤⣄⣀⣀⠀⠀⢇⢸⠀⠀⢀⣠⣴⣿⣿⣿⡿⠟⠛⠉⠉⠁⠉⠉⠙⣿⣿⣿⣿⣿⣿     //i have noticed the reason dli kaayo mu run ang code...
//⣿⣿⣿⣿⠏⠀⠀⠀⠀⠈⢲⣾⠟⠁⠀⠀⠈⠙⠲⣄⠀⠀⠀⠀⠀⣀⣠⠴⢾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣦⣶⣿⣿⣿⣿⡿⠋⠀⠀⠀⣀⣀⣠⣤⣴⣾⣿⣿⣿⣿⣿⣿        too many arguements daw... bracket problem nasad...
//⣿⣿⣿⣿⠀⠀⠀⢀⣤⣄⣼⡏⠀⢰⣆⠀⠀⠀⢀⣽⣀⣠⣤⠴⠛⠁⠀⠀⠘⠛⠋⠉⠀⠀⠀⠈⠉⠛⠿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⣀⣀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⣿         is this the computer engineering dream? HAHAHAHAHA
//⣿⣿⣿⣿⠀⠀⠙⠛⠋⢸⢻⣷⣶⣿⣿⣷⣶⣾⣿⣿⣯⣽⠶⠒⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣿⣿⣿⣿⣿⣤⣀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⢿                  puros debug debug debug debug- 
//⣿⣿⣿⣿⠀⠀⠀⢀⣿⢿⣸⡿⠙⠛⢻⡿⠛⠛⠛⢻⣷⡆⠀⠀⢠⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀⢸
//⣿⣿⣿⡇⢠⡀⠉⠉⠡⠀⢿⢧⣠⣾⠋⢻⣄⠀⠀⢸⡋⢻⡆⠀⢸⡇⠀⠀⠀⠀Fritz⠀⠀⠀⠀⠀⢠⣾⣿⣿⣯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀⠀⢸          [summoner has been disconnected for message spam]
//⣿⣿⡿⠀⠀⠀⠀⠀⠀⡇⢸⠀⠈⠉⢧⡀⠈⣁⣼⡿⠀⠈⣿⣄⣼⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⡙⠹⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⢸
//⣿⣿⠃⠀⠀⠀⠀⠀⠀⡇⢸⠀⠀⠀⠀⢡⣾⠿⠃⠀⠀⠀⠘⣿⣿⣿⣦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿⡿⠁⠁⠀⠀⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠉⠁⠀⠀⠀⠀⣼                      -Prudente, Fritz Gerald C.
//⣿⡟⠀⠀⠀⠀⠀⠀⠀⡇⠘⣧⠀⢀⣠⡾⠋⠀⠀⠀⠀⠀⠀⠉⠻⣿⣿⣿⣿⣦⣤⣄⢀⡀⢀⣤⢶⣻⣿⣿⠏⠀⠀⠀⠀⠀⠀⠈⠉⠉⠋⠉⣉⣽⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⣿
//⣿⡇⠀⠀⠀⠀⠀⠀⢰⠇⢀⣼⠶⠟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⢿⣿⣿⣿⣿⣧⣴⣾⣿⣿⠿⠋⠁⠀⠀⠀⠀⠀⠀⠀⣀⣀⣤⡶⠟⠟⣸⣿⠃⠀⠀⠀⠀⠀⠀⠀⢰⣿
//⣿⢷⡀⠀⠀⠀⠀⢀⣿⡶⡟⠁⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠛⠛⠛⠛⠉⠉⠀⠀⢀⣀⣀⣤⣤⣴⠶⠞⢻⠋⠉⠀⣀⣴⡟⣹⠇⠀⢀⡀⠀⠀⠀⠀⢀⣿⣿
//⣇⠀⠉⠓⠲⠦⠴⠿⢻⡇⠁⠀⠀⠀⠀⠉⢠⣾⣿⣿⣷⣶⣶⠶⠶⠶⠶⠶⠶⠶⠶⠶⠶⠒⠒⠛⠛⠛⠋⠉⠉⣽⡇⠀⠀⣀⣤⠤⠶⠞⠋⠀⣴⠏⠀⢰⡏⠀⠀⠀⠀⠀⣼⣿⣿
//⣿⣿⣶⣤⣤⣤⣤⡾⠟⠁⠀⠀⠀⠀⠀⠀⠘⠋⠀⠈⠻⣿⡿⣿⣦⣤⣀⠀⠀⠀⢠⡄⠀⠀⠀⢀⣨⣄⣠⣤⡴⡾⠛⢛⡉⠉⠀⠀⠀⠀⢀⣸⠋⠀⠠⣿⠇⠀⠀⠀⡐⣾⣿⣿⣿
//⣿⣿⣿⣿⣿⡗⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⢿⣿⣿⣛⠒⡛⠻⡟⠛⠛⠛⠉⢉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠿⠁⠀⣠⣠⠟⠀⢠⠀⣰⣿⣿⣿⣿⣿
//⣿⣿⣿⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠻⣝⡛⠾⣧⣆⠀⠀⠀⠘⡆⠀⠀⠀⠀⣀⡀⠀⣀⣠⠴⠛⠁⠀⠀⢀⣿⠋⠀⠀⣿⣴⣿⣿⣿⣿⣿⣿
//⣿⣿⣿⣿⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠓⠦⠍⠉⠛⠒⠲⠶⠤⠤⠴⠿⠿⠓⠛⠉⠀⠀⠀⠀⠀⣰⡿⠃⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿
//⣿⣿⣿⣿⣿⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠒⠒⠂⢀⣀⢀⣀⣀⣤⣾⠟⠁⣀⣠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿






//⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠆⠜⣿⣿⣿⣿⣿⣿
//⣿⣿⣿⣿⠿⠿⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠻⣿                      //we no use A.I (it took me 4 days straight btw)
//⣿⣿⡏⠁⠀⠀⠀⠀⠀⣀⣠⣤⣤⣶⣶⣶⣶⣶⣦⣤⡄⠀⠀⠀⠀⢀⣴⣿                                         
//⣿⣿⣷⣄⠀⠀⠀⢠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⡧⠇⢀⣤⣶⣿⣿                                                   -Requierme, Sam C.
//⣿⣿⣿⣿⣿⣿⣾⣮⣭⣿⡻⣽⣒⠀⣤⣜⣭⠐⢐⣒⠢⢰⢸⣿⣿⣿⣿                                   
//⣿⣿⣿⣿⣿⣿⣿⣏⣿⣿⣿⣿⣿⣿⡟⣾⣿⠂⢈⢿⣷⣞⣸⣿⣿⣿⣿                    //everytime lagi mag decline mi og ideas, kay naay ma add :sob:
//⣿⣿⣿⣿⣿⣿⣿⣿⣽⣿⣿⣷⣶⣾⡿⠿⣿⠗⠈⢻⣿⣿⣿⣿⣿⣿⣿       
//⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠻⠋⠉⠑⠀⠀⢘⢻⣿⣿⣿⣿⣿⣿                                                           -Requierme, Sam C.
//⣿⣿⣿⣿⣿⣿⣿⡿⠟⢹⣿⣿⡇⢀⣶⣶⠴⠶⠀⠀⢽⣿⣿⣿⣿⣿⣿
//⣿⣿⣿⣿⣿⣿⡿⠀⠀⢸⣿⣿⠀⠀⠣⠀⠀⠀⠀⠀⡟⢿⣿⣿⣿⣿⣿                     //we work hard yes :))) 
//⣿⣿⣿⡿⠟⠋⠀⠀⠀⠀⠹⣿⣧⣀⠀⠀⠀⠀⡀⣴⠁⢘⡙⢿⣿⣿⣿                          
//⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⢿⠗⠂⠄⠀⣴⡟⠀⠀⡃⠀⠉⠉⠟                           -Colinares, David Khael R.






//⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠘⠇⣍⠪⡻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣝⠎⢰⣿⡕⠻⢿⣿⣿⣿
//⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⢤⠧⡅⡺⣄⠀⠀⠉⠁⠙⠿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡻⣽⣀⡼⣿⡷⣼⣿⣿⣿⢿
//⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠡⢴⣰⣧⠆⠁⡴⠁⡒⠀⡀⢱⡖⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢡⡇⣤⡿⢁⣿⢯⣻⣿⢗
//⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⢓⠏⢏⢽⡼⣒⣞⠓⠀⡹⠔⠞⡄⢵⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣅⠠⣷⠟⢁⡿⡫⡾⣙⡥⡯
//⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠢⠒⡈⢀⢞⣼⢋⡎⡞⡁⣀⡾⢀⢸⠀⠈⠀⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠻⠿⠿⣃⡀⠧⢄⡾⠀⣼⠂⡜⣡⡄
//⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠟⢙⠝⡿⠃⠀⠐⡁⠁⣼⢣⢿⠸⣛⢰⢫⠦⣿⣈⠃⣀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⡌⠧⢘⣭⣭⣤⡤⠀⠰⣛⠸⡟⠁⣀
//⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⣵⠹⠋⢹⣟⣿⣿⣿⣿⣿⣿⣿⣿⡿⡟⡁⢆⡎⣿⡿⡇⢨⡆⠁⣿⢣⡿⠟⣣⡲⠝⢡⢶⠿⠿⣤⢠⣹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣾⣿⣿⣿⣿⣆⠘⠯⠃⠠⡒⠡               //if it works, it works (ang code nag bitay na)
//⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢃⣾⣷⡄⠸⣶⣿⣿⡜⣿⣿⣿⣿⡟⣱⢗⠏⠐⡸⡇⢿⠀⣷⡼⣼⡟⠁⠻⢡⣜⡟⢻⣶⣶⢺⣿⠏⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠠⠿⠫                                             
//⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻⣿⣧⣿⢿⠃⣗⡿⣩⡿⣷⡽⣿⣿⠃⡀⢱⡏⡄⠀⢑⣤⡏⣄⢹⠀⢀⣿⣷⢒⣿⣤⣤⣽⣫⣾⠟⣐⠵⢻⠻⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⡀⢠⢥⡎                                             -Requierme, Sam C.
//⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⡧⢿⡏⡮⣠⠏⣡⣿⣿⠻⣅⢘⠻⣸⣱⠟⣸⣡⣠⢸⣿⣧⣟⣇⡄⡸⡃⠐⡜⣁⣿⣿⢏⠟⣠⠂⣼⣴⣧⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣾⠂⠬⣾⣗
//⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⡱⣼⣾⢱⢰⣩⢿⡧⣴⡏⢀⣿⢀⣤⣥⡍⢀⣿⣿⠽⠛⣿⣿⡿⠻⣣⡀⠐⣴⣼⢹⢏⡫⠢⠘⠱⣡⠚⢫⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⢀⢦⣿⣇⡁
//⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠆⡄⢿⢳⣷⣿⢯⣾⡗⣿⠠⣫⢹⢘⣝⢿⣵⢸⣿⣫⢆⣳⣿⣮⡝⣻⠿⡧⡀⠳⣫⢟⠉⠵⡈⡴⣱⢊⢀⡴⡿⠏⠙⠻⠿⡻⣟⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⡰⠿⢈⣻⢿⣑
//⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠫⡭⠑⢤⣰⣮⣿⣟⠅⢿⣿⣃⡿⢰⣣⢠⡪⣟⣄⡹⡜⢱⢗⣵⣿⣿⣯⣴⣿⣮⡏⣱⡷⢉⡵⢀⡴⢳⣴⢳⡓⣈⡄⡄⢀⠈⢆⢂⡄⠈⢄⡽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢏⠁⡶⠋⠀⢲⡯
//⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣿⣿⣿⣿⣿⠿⣿⣿⣿⠉⡍⣷⢣⣰⣹⣻⣿⣿⣵⢀⣬⣿⣿⣦⡐⣵⣾⣿⣏⣿⠆⢠⣥⡞⢩⠛⣟⣿⠿⣿⣟⣤⣋⡌⠾⣓⣮⣤⣼⣷⣶⣶⣶⣷⣬⣭⣛⡋⠼⠿⣾⣦⣼⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⠢⠀⢀⡀⡴⢿⠗
//⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣤⢄⡊⡿⠋⢰⢶⣾⣷⣥⣿⣿⠛⢻⣿⣷⣾⣧⣶⣽⠷⣿⣿⣿⣿⣟⠀⣿⣝⢗⣢⠖⢓⢥⡽⡿⣞⣯⣷⣿⣿⣿⠿⠿⠟⠛⠛⠛⢛⡻⠟⠻⣿⣿⣿⣶⣭⣻⣿⣿⣿⣝⡻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣽⡗⠂⢠⠫⣡⠤⣦
//⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣅⡆⡤⣳⣾⣏⢟⣽⢟⣽⣴⣿⢯⣾⣿⣿⢋⠭⠤⢌⣁⣭⡿⣨⡄⢸⣿⠪⣭⣾⣿⢏⣴⣾⣿⡿⠿⠛⠁⠀⠀⠀⠀⠀⠀⠀⠄⢆⡂⠀⠙⠻⣿⣟⢛⠿⣿⣿⣿⣿⣿⣷⠑⢧⣽⣿⣿⣿⣿⣿⡿⣿⣿⣿⠖⠢⡿⡝⢩⣿⡎                   //if you're reading this have a nice day :))
//⢰⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠑⠀⣿⣟⣴⠻⢿⣻⣯⣟⣁⣾⣿⣿⣷⣿⢿⣿⣿⠿⢿⣿⣿⠘⡚⣼⣾⣾⢿⣼⣿⡿⠟⢉⡀⠀⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠀⠀⠀⠀⢸⡿⠈⠑⠈⠝⠿⣿⢿⣿⣾⣤⢢⣽⣿⣿⣿⣿⣍⣻⡿⠧⢸⠷⣂⠆⡺⣟⠇                                  -Dave Kale Collins
//⢼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣿⣿⣿⡆⣼⣿⡻⣟⣾⣿⣽⢻⡟⣿⣿⣽⣧⣬⣯⣿⣷⣔⣽⣿⡿⣵⣿⡿⠋⠁⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠰⠟⠁⠀⠀⠀⠀⠐⠈⢷⡻⣿⡿⣿⣿⣿⣿⣿⣿⣿⣏⣬⠙⠂⠀⠁⢀⠄⠠⠖
//⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⢳⣀⣷⣿⣿⣯⣢⣿⣽⣿⣩⣾⣿⢿⣿⣟⣿⣯⣿⣿⡿⣼⣟⣡⠈⠈⠈⡉⠀⠀⠀⠀⢀⣀⡀⠄⠁⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠁⠻⡔⣿⡻⣿⣿⣿⣿⣿⣿⡿⣌⢆⣴⢀⣜⠨⣤⢏⠅
//⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⣶⣼⣿⣽⣯⣾⣿⣿⣥⣻⣽⠿⣿⣿⡾⡟⡃⢳⣿⣽⡿⣷⢏⡾⠋⠀⠀⠀⠀⠀⠀⢄⠀⡄⣁⠤⠀⠀⠀⠀⢦⢴⢧⡆⠀⡀⠀⣀⠀⠀⡀⡀⠀⠀⠀⠀⠀⢷⣸⣿⣿⣿⣿⣿⣿⣿⣪⣫⣾⣧⣽⣧⣷⣿⢻⡎
//⣿⣤⣉⣉⣟⣿⢽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣮⡿⢓⣱⣠⣜⣫⣴⣿⢋⠂⠀⠀⠀⠀⠀⠀⠂⠂⠀⣀⠶⡕⣕⣦⣾⣷⢬⡅⣞⡿⣻⢙⣷⠴⣾⣀⢶⢀⣲⣀⠄⠀⠀⠀⠠⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⣿⣮⣿⢑
//⣿⣿⣷⣶⣦⣡⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣿⣾⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣒⣫⣿⣷⣿⣿⣾⣟⣶⣶⡾⢿⣿⣿⣶⣾⣿⣾⣓⣒⣓⣲⣦⡳⢦⣁⣁⠸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁                                                                                          
//⣿⣿⣏⣥⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠬⢧⣽⣽⡿⢋⣛⣯⣵⠶⠾⣓⣛⣫⣭⣥⠴⢦⣀⣀⠤⠤⠤⠄⠁⠁⠉⠛⠫⣿⣿⣿⣿⣿⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⠯                  //SPECIAL MENTION SA MGA TAGA CEA_CPE_1C!!!
//⣿⣿⠘⣾⡇⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢽⣿⣿⣿⠈⠀⠀⠀⠀⠀⠀⢀⢀⢢⢤⣿⡿⣋⠼⣛⣯⣽⠶⢞⣛⠿⠽⠛⠛⠚⠉⠉⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠲⠀⢮⣿⣿⡧⣽⢿⣿⣿⣻⣿⣿⣿⡻⣩⣿                                  -GROUP 7
//⣟⣯⡪⠘⡇⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⢻⣿⣲⣶⣿⣿⣿⡀⠀⠀⠀⠀⠀⠂⣠⣾⡿⠟⣫⠕⣚⡯⠭⠓⣊⡉⠀⠀⠀⠀⠀⠀⠀⢆⡐⠐⠹⡄⢀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢫⣿⡟⢽⣿⣿⣿⡷⣾⣿⣿⡷⣿⢟
//⠫⠉⣄⠀⡁⡔⣽⣿⣿⣿⣿⠻⣿⣿⣿⡿⢿⣿⣛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢟⣟⣹⣿⣛⣻⣿⣿⣧⠀⠀⠀⠠⡼⠿⠋⣁⠤⠔⠂⢉⠀⠀⠈⠉⠀⢀⠀⢈⡄⠂⠀⠈⠀⢀⣀⣀⡀⠈⠂⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⢹⣿⣯⣞⣿⣿⡿⡉⣹⣿⣢⢽⣿
//⣪⡹⡿⠤⡌⢐⢈⣿⣿⣭⣕⡽⣾⣿⡿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡷⣟⣱⡇⣿⢾⣿⣿⣿⣿⠀⠀⠠⢊⠤⠒⠉⢠⣠⠞⢉⠉⠉⢡⠀⠀⠀⠀⠀⢸⣷⣤⠄⠀⢩⠍⠉⢍⠙⢿⣦⡐⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣾⢿⣿⡺⣿⣿⣺⣿⣿⣿⢹⣿
//⡀⠀⠇⢐⡆⣶⠝⣻⢽⡟⣟⡺⣿⣿⣥⣿⣿⣿⣿⣿⣿⡿⢿⣿⣿⣿⣿⣽⣿⣿⣿⣿⣿⣾⣿⣿⡷⡟⣾⣿⣿⣿⣿⣦⡪⠊⠁⠀⠀⢀⢟⠃⠀⠸⣄⣀⡼⣇⣖⠀⠀⠀⢸⠋⠁⢀⣀⢹⣄⣀⡼⢇⠄⠹⢷⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⢿⣿⣷⣷⡘⣿⢸⣿⣾⣿⢾⣿
//⣲⠓⢶⣜⣒⠿⣟⣚⡛⠗⡓⣽⡟⣻⣿⣿⣿⡾⣿⣿⣿⣄⠰⡝⣿⡛⣛⣛⣽⣭⣽⣿⡿⡻⣾⣿⡇⣸⣿⣿⣿⣿⡯⠃⠀⠀⠀⠀⠀⡠⠀⠀⠀⠤⣭⣶⣿⠟⠁⠀⠀⢰⣯⠆⠀⠀⠨⢿⣿⣿⣾⡳⠆⣠⡀⠀⠀⠀⠀⠀⠀⠀⡀⣾⣿⣿⣿⣿⣿⣿⡌⡿⣿⣿⣟⢟⡽
//⡙⣲⣻⡼⡻⣔⣿⡿⣤⠲⡟⣿⣿⣿⣿⣿⣿⡷⣿⡃⠉⠉⠀⠘⡸⣿⣮⠛⠙⠋⠀⢀⣼⣿⢹⡿⡗⣿⣿⣿⣿⣿⡁⠀⠀⠀⠀⠀⠀⠁⢲⣿⣷⣶⡶⠀⠄⢀⠀⠀⠀⢸⣿⣆⠠⠀⠄⢀⢙⠻⣿⣷⣿⣿⡣⠀⠀⠀⠀⠀⠀⠀⢨⣿⣿⣿⣻⣿⣿⢼⣾⣆⢸⠟⢴⣽⣦               //"Si david na bahala sa sprintf() sir"
//⢼⣽⣿⣯⣿⡾⣓⢿⣶⣿⣿⣿⣿⣿⣿⣿⣿⣷⣝⢿⠠⠦⠄⠄⠇⠟⠏⣠⣴⣶⣿⣿⣿⣿⢸⣾⣷⣿⣿⣿⣿⡇⠠⠁⠀⠀⠀⠀⠀⠄⠈⠯⠿⠋⠀⠀⠠⠀⠀⠀⠀⢈⣛⡉⠀⠀⢀⠘⣿⣦⠂⠉⠻⠟⠁⠀⠀⠀⢠⣼⡇⠀⣾⣟⣿⣸⣿⣷⣿⢻⢻⣿⢸⣘⣸⣿⡏                              - Fritz && Sam
//⠉⠉⠉⠉⠀⠐⢬⠻⢟⣟⣿⣿⣿⣿⣿⣿⣿⣷⣙⣀⡉⠛⠋⠉⣡⣾⣿⣿⣿⣿⣿⣿⣿⣯⡿⣿⣿⡟⣿⣿⣿⣇⠈⠀⠀⠀⠠⠀⠀⠀⠀⠐⠀⠀⠤⣴⣯⣾⠃⢀⠺⣿⣿⣷⠀⠈⣿⣷⣖⣁⠀⢄⠀⠀⠀⠀⢀⠇⣾⣿⣿⠀⣿⣿⢻⢻⣿⣿⡯⣿⢿⣽⠀⣧⣿⡏⣗
//⠛⠟⣗⠲⢍⣉⠩⣭⣭⣥⡭⠍⠈⡅⡄⠒⠒⠈⠁⣔⣄⡀⣠⣮⡻⣿⣿⣿⣿⣿⣿⣿⣿⣧⣿⣿⣿⣿⣿⣿⣿⣿⡄⠀⠀⠀⠀⠘⠢⠠⠀⠀⠀⠀⡲⣯⣟⣟⠸⡁⠁⠘⠫⠋⠈⠅⠽⣿⣿⡔⣀⠀⠀⠀⠀⣖⢃⣾⣿⣿⣿⠀⣿⣿⣇⣿⣿⣿⣗⣿⣿⣿⢠⣿⣿⡇⣇
//⠒⠠⡁⠻⡆⢻⡗⡻⣿⢿⣷⠀⠀⣇⠧⣬⡀⠀⣰⣿⣿⢟⣫⣛⡻⠟⠙⣻⣿⣿⣿⣿⣼⣷⣿⣿⣟⣿⣿⣿⣿⣿⣿⠰⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣄⡮⡟⠉⠀⠀⢀⢀⡄⡀⠀⠀⠀⠙⢿⣿⣇⠀⠀⠀⠄⠘⣼⣿⣿⣿⣿⣦⣿⣿⡗⣿⣿⢸⡟⣿⢿⣿⣸⣿⣿⡇⡎              // Sir ayaw tuo ana kay si Fritz ug Sam nagbinuang ra sa code, pero ako lang ni gi comment kay basin ma delete ni nila.
//⠳⠁⠀⠀⠀⠈⠧⣟⠶⠐⠂⠀⠄⠽⠿⠿⠯⠤⢠⢿⡁⢐⠾⣨⡟⠲⣀⠬⡻⣭⢩⡭⡍⢻⣿⣿⣹⣿⣿⢺⣿⣿⣿⡆⠀⣶⣦⣤⣤⣤⣀⠀⠀⠘⠎⠁⠀⠀⢀⡠⠬⢤⠠⠥⣤⡀⠀⠀⠂⠓⠎⠈⠀⢠⣤⣾⡿⣿⣿⢿⣿⣇⣿⣾⣿⣿⣷⣿⣿⣿⣟⡏⣽⣎⣿⣧⡇                                                                 -Elvis Presley
//⣛⣛⣋⣉⠍⠉⠉⠉⠉⠈⠉⠙⠫⠉⠉⡉⠉⠉⠉⠉⠉⡉⠉⣉⡉⠉⠉⡉⠉⣉⡉⢉⢉⠉⣿⣿⡇⣿⢿⢺⡟⣿⣿⣷⣿⣿⣿⣿⣿⣿⣿⡀⠀⠀⡄⠀⠀⠊⠈⠀⠀⠀⠀⠀⠈⠑⠀⠀⠀⠀⠀⠀⠁⣸⣿⣿⡇⡿⣿⣿⣿⡇⣿⣿⣼⣧⢿⣿⣿⣟⡿⠇⣿⢹⣿⢿⣇
//⠤⠄⠤⠄⠤⠀⠀⡀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠂⠁⢈⢿⣻⢸⡇⣿⣾⢸⣯⢾⣸⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⠂⠀⠀⠀⠁⠉⠉⠛⠈⠉⠉⠁⠀⠈⠀⠀⠀⠀⠀⣿⣿⣿⡇⢷⢻⢻⣿⣇⣾⢽⡋⡒⢸⣟⣸⢸⣷⢀⣿⣴⢛⠾⡗           // hoy david ngano gi abot na si elvis presley sa code?
//⢾⠀⠂⠀  ⠂⠀⢀⠈⠀⢀⠀⢈⠲⠀⡀⠀⡄⠐⣈⣔⣤⣬⡄⠀⠀⠀⢰⠀.⠀⠰⠀⠀⠈⢞⣿⡮⠅⣷⢞⠸⠟⠃⣹⠹⠛⡹⣿⣿⣿⣿⣿⣿⠀⠀⠄⠀⠀⠀⠀⢀⣀⡀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⡇⢸⣿⢾⢿⢹⡵⣯⠎⠇⣬⣪⡇⡼⠇⢸⣿⢛⠌⢼⡟                        - Prudente, Fritz Gerald C.
//⣽⡈⠅⠀ ⠀⠀⢂⠓⠀⢰⢚⢸⢐⡱⠁⠘⠆⢀⣠⣖⢂⠳⠸⠀⢿⣤⠸⠠⠀⠀⠀⠀⠀⢺⣯⣬⠓⡇⣣⣵⢡⣰⣿⡂⠋⡈⢻⣿⣟⣿⣿⣿⠀⠀⠀⠀⠀⡄⡚⢿⡻⠣⠛⠃⡟⡤⠀⠀⢐⠀⠀⠀⠘⡛⣟⡿⠁⣾⣟⣽⡿⢸⣛⣭⣭⣜⣾⣿⠙⣿⠆⢸⡿⠹⠇⢸⢏         
//⢘⣈⣎⠀⡄⡸⢀⢽⠐⣝⣿⢸⢈⡧⠀⠀⢪⠯⢊⣙⣰⢷⣿⠶⠋⠁⠀⠀⠁⠂⠀⠀⠀⠚⣍⡩⣡⡞⠛⢳⡇⣿⣆⠙⢴⣴⣋⣳⣵⡿⣫⠞⠀⠀⠀⠀⠀⠀⠀⠊⠀⠠⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠸⢏⣿⣮⡿⣹⣶⣧⠾⠻⠽⠿⠟⠛⠂⡠⠖⠀⡼⣿⢸⠀⡜⡄
//⠘⠊⠒⠒⠀⠂⠐⠂⠐⠳⠝⠙⠚⠓⠂⠘⡑⠋⠋⠛⠛⠋⠁⠀⠀⠀⠀⠀⠀⠀⠴⠶⠶⢴⣷⣷⣝⢗⡔⣞⣰⣿⣛⠉⠀⠉⣉⢉⣡⣾⠁⢠⠠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠈⠈⠘⠁⢽⣮⡑⠒⠀⠀⣀⢀⢠⡄⠂⢉⠀⠀⠀⡿⠘⠀⠑⠄
//⠀⠄⠀⠀⠀⠀⠀⠐⡇⠄⢰⠀⢠⠙⠀⠀⠅⠂⠀⠀⠀⠀⠀⠀⠐⠀⠀⠀⠒⠦⠀⠔⠢⣼⣿⡷⢆⡉⣹⢯⡤⣽⡁⢱⠏⠟⣠⣾⡗⠀⠀⣠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣄⣤⢀⠆⢱⠀⠂⠀⠀⢠⢀⠀⠑⠽⡿⢦⠤⣊⣍⣲⣮⢽⣇⠀⠀⢰⠃⡅⢖⣤⣀⠤
//⢀⡀⠄⢀⣠⠀⢐⡢⠤⡤⠈⠀⠀⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣄⠀⠢⠤⠤⠀⠀⢺⣿⣿⡐⠞⠔⠦⢠⣿⣷⢈⣤⣴⣿⠟⢁⠊⢠⡏⠀⠐⣌⢀⠀⠀⠠⣰⣷⣶⣿⣿⣿⣿⠢⢠⣠⣍⠀⠀⠀⠀⠀⣼⠔⠁⡠⠃⣡⣈⠭⠭⠥⠧⠬⣟⠶⡤⢀⢊⡁⠻⡩⢛⣈
//⡼⢽⣑⢚⠃⠊⠄⡙⠇⢠⡇⡈⡪⡻⡎⠀⠀⠀⡀⡀⢠⠄⠀⠀⠀⠀⠈⠀⠐⠖⠀⠐⠶⢐⡽⡟⡟⢇⠰⣸⠘⣻⣵⡿⠛⣿⠿⣠⡟⠀⠠⠀⠀⠀⠠⢆⠐⠀⠀⠈⠛⠻⣿⣿⡿⢧⢕⣼⣿⡃⠀⠀⠀⠀⡀⠈⠴⡗⠃⢄⡈⠻⣷⣶⣤⡀⠉⠁⠁⠈⠶⠏⠈⠀⠐⠉⠀
//⢸⣇⢇⢀⠀⠀⢀⠃⠀⢘⡆⠃⠈⠷⢿⣗⣤⣤⡰⠀⠆⠀⠀⡀⠀⢴⠀⠀⢠⣄⠀⠐⢶⡾⠠⣵⠱⠾⣘⣥⣾⣿⢟⢀⣾⠋⣴⢟⡀⠀⠀⠀⠀⠀⠠⠀⠃⠀⠀⠀⠀⠀⣶⣗⣦⣶⣶⣿⡋⠀⠀⠀⠀⠀⣏⡠⢰⡼⡄⠀⠱⡀⠘⣿⣎⠻⣷⣄⠘⠒⠀⠀⠀⠤⠤⠤⠂
//⠰⠐⠠⠀⠂⠀⠉⠀⠁⠐⠆⠀⣖⠛⠟⢻⢹⣿⣻⣶⣔⣂⠀⠀⠀⠀⠀⢀⣄⡠⠀⠤⢤⠰⠋⢃⣽⣾⣿⠟⠛⠂⢠⣯⣵⣾⢏⡵⣿⠆⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠵⠵⣩⣻⠛⢛⣻⡥⠀⠀⠀⠀⠀⠀⣄⠇⠀⡝⡷⠀⢰⡆⠀⠘⢿⡄⠁⢈⠫⣽⠏⠘⠦⠀⠀⠀⠀
//⠀⠀⠆⠀⡀⡄⠀⠠⠀⠀⠀⡀⡐⣵⣿⢧⡏⠛⣽⣿⡿⡈⡦⣀⡀⠀⠀⠀⠐⠀⠀⠀⢆⣴⣾⣿⠛⠻⠳⠂⠎⢢⡋⠉⢉⠙⢆⣈⡀⠆⠀⠐⡀⠀⠀⠀⠀⠢⠂⠠⠤⠀⠀⠁⠀⣠⠎⠀⠀⢀⡀⡌⠀⠀⡇⠀⠀⣠⠱⢥⣿⡿⡀⠀⠸⣿⡀⠀⠘⣏⠄⠀⠠⠀⠡⡀⠠
//⡀⣀⣄⠰⢇⡰⣴⢹⣷⠀⡰⡽⡿⡎⡇⡟⣤⠀⠘⢛⣺⣇⠐⢀⢰⢸⢶⠊⡀⣀⣤⣷⣟⠟⠛⠪⢿⣟⢤⢓⣀⡐⠂⢱⡀⠀⠘⠏⠂⠀⣠⣄⡱⡀⡀⡀⠀⢸⣦⡀⢀⠀⠀⢀⣼⣏⣀⣂⣆⣿⣃⣤⣦⠀⠋⣷⢠⡏⣾⡘⡹⢿⡇⠰⠀⣿⠳⠀⠀⣰⣿⣿⡻⣿⢻⡿⣦
//⠎⠀⣧⣇⣼⢹⡸⡛⠈⣾⣾⣝⢀⢰⡿⣧⠉⠀⣱⣿⣯⣿⢈⣯⠭⠀⣨⣴⣾⣿⣽⣷⣽⣷⡄⠀⠀⠪⢀⠀⣳⡿⡲⣷⢴⣾⡆⡆⡀⡌⣟⣻⣷⡽⣹⡿⡿⣿⣿⣿⣿⡶⡾⣿⣿⣿⣿⣿⣿⠟⡟⡟⠟⠀⣐⣧⣸⠇⠛⣸⣤⠗⠂⣉⠀⢱⡆⠠⣴⢊⡰⢥⣄⠀⢮⣏⣅




//⠀⠀⠀⠀⠀⠀  ⠀ ⣀⣀⣀⣀⣀⣠⣀⣀⣀⣠⡀⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀⠀⠀  ⠀ ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀⠀  ⠀⠀ ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀⠀⠀ ⠀  ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀⠀⠀⠀   ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀⠀⠀⠀   ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀⠀⠀⠀   ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀
// .⣤⣤⣤⣤⣤⣤⣤⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣤⣤⣤⣤⣤⣤⣤..
//  ⠈⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁
//⠀ ⠀ ⠈⠙⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀⠀
//⠀⠀ ⠀ ⠀⠀⠙⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀⠀
//⠀⠀⠀  ⠀⠀⠀⠀⠙⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀  ⠀⠀⠀⠀⠀⠙⢿⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀⠀ ⠀ ⠀⠀⠀⠀⠀⠙⢿⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀ ⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
               return 0;
}
```
