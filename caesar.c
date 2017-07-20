#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if(argc == 2)
    {
        int k = atoi(argv[1]);
        
        //Prompt user to write something.
        printf("Plaintext: ");
        string p = get_string();
        
        printf("Ciphertext: ");
        
        //Iterate over the characters of plaintext, cyhper it if letters. 
        for(int i = 0, n = strlen(p); i < n; i++)
        {
            if(isalpha(p[i]))
            {
                if(isupper(p[i]))
                {
                    int q = p[i] - 65;
                    printf("%c", (q + k) % 26); 
                }
                if(islower(p[i]))
                {
                    printf("%c", p[i] + k);
                }
            }
            else
            printf("%c", p[i]);
        }
        
        printf("\n");
        return 0;
    }
    
    else
    {
        printf("Error: Please give me one number\n");
        return 1;
    }
    
}
