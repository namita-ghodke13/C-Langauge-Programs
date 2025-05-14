/*The temperature of a city varies according to seasons.There are four 
seasons - Spring, Summer, Monsoon and Winter. The temperature ranges are :
Spring (15-25 degrees), Summer (25-40 degrees), Monsoon (20-35 degrees),
Winter (5-20 degrees). Accept weekly temperatures (12 weeks per season) for
each season, check if they are in the correct range and calculate the
average temperature for each season.*/

#include <stdio.h>
int main() 
{
    int temp;
    printf("Enter the Temperature in Degrees Celsius : ");
    scanf("%d", &temp);
    if (temp >= 15 && temp <= 25) 
    {
        printf("The Season is Spring.\n");
    } 
    else if (temp > 25 && temp <= 40) 
    {
        printf("The Season is Summer.\n");
    } 
    else if (temp >= 20 && temp <= 35) 
    {
        printf("The Season is Monsoon.\n");
    } 
    else if (temp >= 5 && temp < 20) 
    {
        printf("The Season is Winter.\n");
    } 
    else 
    {
        printf("The Temperature does not fall into any of the defined Seasonal Ranges.\n");
    }
}
