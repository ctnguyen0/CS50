#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // ask user for input
    string n = get_string();
    if (n != NULL)
    {
        //print the first initial in uppercase
        printf("%c", toupper(n[0]));
    }
    //now I need to have the program run through the whole string length
    for (int i = 0, l = strlen(n); i < l; i++)
        {
            //within the string I'm trying to find a space, char by char.  If there is a space then... 
            if (n[i] == ' ')
            //the program will print the next char after that which should be the first letter of the next name.
            {
            printf("%c", toupper(n[i + 1])); 
            }
        }
       printf("\n");
}
