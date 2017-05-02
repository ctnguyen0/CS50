#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float c;
    int coins = 0;
    do
    {
        printf("O hai!  How much change is owed?\n");
        c = get_float();
    }
    while (c <= 0);
    
    c *= 100;  //remember the problem with imprecision.  I am rounding so that the number isn't truncated to its current integer value even though it should be rounded to the next highest integer value.
    c = round(c);
    int x = c;
    {
    while (x >= 25)
    {
       int q = 25;
       coins += 1;
       x = x - q;

    }
    while (x >= 10)
    {
        int d = 10;
        coins += 1;
        x = x - d;
 
    }
    while (x >= 5)
    {
        int n = 5;
        coins += 1;
        x = x - n;
     
    }
    while (x >= 1)
    {
        int p = 1;
        coins += 1;
        x = x - p;
       
    }
    
    {
        printf("%i\n", coins);
    }
    }
      
}

    
   
