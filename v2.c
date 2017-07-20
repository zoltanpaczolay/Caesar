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
        printf("plaintext: ");
        string p = get_string();
        printf("ciphertext: ");
        
        //Iterate over the characters of plaintext, cyhper it if letters. 
        for(int i = 0, n = strlen(p); i < n; i++)
        {
            if(isalpha(p[i]))
            {
                if(isupper(p[i]))
                {
                    p[i] = (p[i] - 'A' + k) % 26;
                    printf("%c", p[i] + 'A'); 
                }
                if(islower(p[i]))
                {
                    p[i] = (p[i] - 'a' + k) % 26;
                    printf("%c", p[i] + 'a');
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
