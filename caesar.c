#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    int iKey = 0;
    string msg;
    if (argc < 2 || atoi(argv[0]) < 0 || atoi(argv[1]) < 0)
    {
        printf("Enter a single command-line arg: non-negative integer.\n");
        return 1;
    }
    else 
    {
        iKey = atoi(argv[1]);
    }
    msg = GetString();
    for (int i = 0, j = strlen(msg); i < j; i++)
    {
        if (islower(msg[i]) && isalpha(msg[i]))
        {
            msg[i] = (msg[i] - 'a' + iKey) % 26 + 97;
        }
        else if (isupper(msg[i]) && isalpha(msg[i]))
        {
            msg[i] = (msg[i] - 'A' + iKey) % 26 + 65;
        }
        printf("%c", msg[i]);
    }
    printf("\n");
    return 0;
}
