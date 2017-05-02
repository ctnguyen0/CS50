#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])

{
    string k; //key
    string m; //plaintext messsage "m"
    int ak;   //alpha index key
    
    if (argc != 2)  //if arguement count is not 2.
    {
        printf("Error.\n");
        return 1;
    }
    
    k = argv[1];
    int l = strlen(k);
    
    for (int i = 0; i < l; i++)
    {
            if (isalpha(k[i]) == 0)  //if the key is not all letters, return error!
        {
            printf("Error.\n");
            return 1;
        }
    }  
    
        printf("plaintext: ");  //get plaintext message "m"
        m = get_string();
        printf("ciphertext: "); 
  
    
    for (int i = 0, lm = strlen (m); i < lm; i++)  //now we are going to loop, "enciper" each char in the message.  Lets call this the master loop.  
    {
        l = l % strlen(k);  // this here is the equation to loop back to the beginning of the key.  The idea here is divide the length of the key by the length of the key itself but outputing the remainder using modulo.
                            // doing so would cause a wrap around to the beginning if we continually increase "l" by one, which we'll do so as we go down our code.  Try working it out on paper to better visualize it the concept.
        if (isalpha(m[i]))  // checking if the plaintext message is all alphanumeric.
        {
            if (isupper(k[l]))    //here we are going to convert the key into its corresponding alpha index, one char at a time.  
            {
                ak = k[l] - 'A';  //for example, if k[l] = B, then B - A = 1.  1 is the alpha index key.  
            }
            
            else                  // this here is to convert the key for lowercase letters.  
            {
                ak = k[l] - 'a';
            }
            
            if (isupper(m[i]))    // now we're going to enciper the message, one char at a time.  
            {
                printf("%c", (((m[i] - 'A') + ak) % 26) + 'A');  //this equation is just like the one in Caesasr, with an extra step in that we have to convert our key to its alpha index equivalent first, which we are doing above.
                l++;              // here's the important part, each time we encipher one char we increase "l", the current position in our key string, by one.  This is where our earlier equation l = l % strlen(k) comes in handy 
                                  // as it will eventually output a remainder 0 again which effective "wraps" our key back to the beginning position. 
            }
            
            else 
            {
                printf("%c", (((m[i] - 'a') + ak) % 26) + 'a');
                l++;
            }
        }
        else
            {
                printf("%c", m[i]);
            }
    }
    printf("\n");
    return 0;
}
        
