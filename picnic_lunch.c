/*Write a program to calculate the total price for a picnic lunch that a 
user is purchasing for her group of friends.She is first asked to enter
a budget for the lunch.She has the option of buying apples,cake,and bread.
Set the price per kg of apples,price per cake,and price per loaf of bread
in constant variables.Use a menu to ask the user what item and how much of
each item she would like to purchase.Keep calculating the total of the 
items purchased.After purchase of an item,display the remaining amount.
Exit the menu if the total has exceeded the bugdet.In addition,provide an
option that allows the user to exit the purchasing loop at any time.*/

#include <stdio.h>
#define PRICE_PER_KG_APPLE 3.5  
#define PRICE_PER_CAKE 10.0     
#define PRICE_PER_BREAD 2.5     
int main() 
{
    float budget, total = 0, remaining;
    int choice;
    float quantity;
    printf("Enter your budget for the lunch: $");
    scanf("%f", &budget);
    remaining = budget;
    while (1) 
    {
        printf("\nMenu:\n");
        printf("1. Buy Apples ($%.2f per kg)\n", PRICE_PER_KG_APPLE);
        printf("2. Buy Cake ($%.2f per cake)\n", PRICE_PER_CAKE);
        printf("3. Buy Bread ($%.2f per loaf)\n", PRICE_PER_BREAD);
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 4) 
        {
            printf("Exiting the purchasing loop. Thank you!\n");
            break;
        }
        switch (choice) 
        {
            case 1:printf("Enter the quantity of apples (in kg): ");
                   scanf("%f", &quantity);
                   total += quantity * PRICE_PER_KG_APPLE;
                   break;
            case 2:printf("Enter the number of cakes: ");
                   scanf("%f", &quantity);
                   total += quantity * PRICE_PER_CAKE;
                   break;
            case 3:printf("Enter the number of loaves of bread: ");
                   scanf("%f", &quantity);
                   total += quantity * PRICE_PER_BREAD;
                   break;
            default:printf("Invalid choice! Please select a valid option.\n");
                    continue;
        }
        remaining = budget - total;
        if (remaining < 0) 
        {
            printf("\nYou have exceeded your budget!\n");
            printf("Total spent: $%.2f\n", total);
            break;
        } 
        else 
        {
            printf("\nTotal spent: $%.2f\n", total);
            printf("Remaining budget: $%.2f\n", remaining);
        }
    }
}
