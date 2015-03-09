#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    string msg = NULL;
    string key = argv[1];
    int lastchar = 0;
    int counter = 0;
    if (argc !=2)
    {
        printf("You must enter a single command-line argument: \n");
        return 1;
    }
    for (int n = 0; n < strlen(key); n++)
    {
        if (!isalpha(argv[1][n]))
        {
            printf("You have entered non-alphabetical chars\n");
            return 1;
        }
    }
    do
    {
        msg = GetString();
    }
    while (msg == '\0');
    for (int i = 0, j = strlen(msg); i < j; i++)
    {
        if (isalpha(msg[i]))
        {
            counter = lastchar % strlen(key);
            if (islower(msg[i]))
            {
                if (islower(key[counter]))
                {
                    msg[i] = ((msg[i] - 'a' + key[counter] - 97) % 26) + 97;
                    printf("%c", msg[i]);
                }
                else
                {
                    msg[i] = ((msg[i] - 'a' + key[counter] - 65) % 26) + 97;
                    printf("%c", msg[i]);
                }
            }
            if (isupper(msg[i]))
            {
                if (islower(key[lastchar]))
                {
                    msg[i] = ((msg[i] - 'A' + key[counter] - 97) % 26) + 65;
                    printf("%c", msg[i]);
                }
                else
                {
                    msg[i] = ((msg[i] - 'A' + key[counter] - 65) % 26) + 65;
                    printf("%c", msg[i]);
                }
            }
            lastchar++;
        }
        else
        {
            printf("%c", msg[i]);
        }
    }
        printf("\n");
        return 0;
}
