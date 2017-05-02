#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])

{
    int k;
    string m;
    if (argc != 2) //if number of arguments is greater than 2, print error.
    {
        printf("Error\n");
        return 1;
    }
    
    k = atoi(argv[1]);  //because the desired arguement is originally a string, need to convert it
                        //into a int so that we can use the input as a number as part of our 
                        //later equation to shift the letters so many spaces, therefore "encode" 
                        //our message depending on the input provided.
    printf("plaintext: ");
    m = get_string();   // get the original message "m"
    printf("ciphertext: ");
    
    
    for (int i = 0, l = strlen(m); i < l; i++)  //now going to loop and review each char in "m" and encode it.
    {
        if (isalpha (m[i])) // this is to check that the string is all letters
        {
            if (isupper(m[i])) //if a char is upper case
            {
                printf("%c", (((m[i] - 'A') + k) % 26) + 'A');  //these equations here will convert each char int message string, which is currently in ASCII format to it's alphabet index, then increase it by the key "k" value,
                                                                //divide by 26 (total letters in the alphabet) but output the remainder using modulo (%) to do a wrap around the alphabet to avoid a run off
                                                                //then convert back to ASCII.  
            }
            else if (islower(m[i]))  //if a char is lower case
            {
                printf("%c", (((m[i] - 'a') + k) % 26) + 'a');
            }
        }
            
            else // if there is a space, then it will just print the space.
            {
                printf("%c", m[i]);
            }
    }
    printf("\n");
    return 0;
}
