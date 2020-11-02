#include <stdio.h>
#include <cs50.h>
#include <math.h>
void howmanycoins(int cents1, int coins1);
int main(void)
{
    float changeowed; //introducting variable change owed
    
    do
    {   
        changeowed = get_float("Change owed: ");
    }
    while (changeowed <= 0); //will keep asking if change owed is less than 0.00
    
    int cents = round(changeowed * 100); //integer cents from change owed
    int coins = 0; //introducing number of coins as zero, since this number will change
    
    while (cents > 0)
    {
       howmanycoins(cents,coins);
       
    }
    printf("The number of coins you get is %i\n", coins); //print the number of coins they get
}

void howmanycoins(int cents1, int coins1)
{
     if (cents1 >=25) //first big chunk (25 cents)
        {
            coins1++; //add 1 to the coin
            cents1 = cents1 - 25; //subtract 25 from cents
        }
        
        else if (cents1 >=10) //second chunk (10 cents)
        {
            coins1++; // add one to coins
            cents1 = cents1 - 10; //subtract 10 from cents
        }
        
        else if (cents1 >=5) //second chunk (5 cents)
        {
            coins1++; // add one to coins
            cents1 = cents1 - 5; //subtract 5 from cents
        }
        
        else if (cents1 >=1) //second chunk (1 cents)
        {
            coins1++; // add one to coins
            cents1 = cents1 - 1; //subtract 1 from cents
        }

}
