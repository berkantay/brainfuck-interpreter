#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *code = "+[--->++<]>+++.++++++++.--[--->+<]>--.++[->+++<]>++.--[--->+<]>--.----------.+++++.-[->+++++<]>-.>-[--->+<]>-.-[--->+<]>++++.---.-------.--.-[--->+<]>+.--[->+++<]>.--[--->+<]>-.+[->++<]>+.+[----->+<]>+.--------.-----.[--->+<]>---.---.---------.-[--->+<]>+.--[->+++<]>.[--->+<]>---.-----------.\0";
int main(int argc, char *argv)
{

    int length = strlen(code);
    char *ptr = (char *)calloc(1000, sizeof(char));
    char *emulptr = ptr;
    printf("%d\n", length);

    for (int i = 0; i < length; i++)
    {
        if (code[i] == '>')
        {
            ptr++; //increases the value of the pointer, i mean the adress
        }
        else if (code[i] == '<')
        {
            ptr--; //decreases the value of the pointer
        }
        else if (code[i] == '+')
        {
            (*ptr)++; //increases the value pointed by ptr
        }
        else if (code[i] == '-')
        {

            (*ptr)--;
        }
        else if (code[i] == '.')
        {
            printf("%c", *ptr);
        }
        else if (code[i] == ',')
        {

            scanf("%c", ptr);
        }
        else if (code[i] == '[')
        {
            if (*ptr == 0)
            {
                for (int j = i; j < length; j++)
                {
                    i++;
                    if (code[j] == ']')
                    {
                        i++;
                        break;
                    }
                }
            }
        }
        else if (code[i] == ']')
        {
            if (*ptr != 0)
            {
                for (int j = i; j > 0; j--)
                {
                    i--;
                    if (code[j] == '[')
                    {
                        i++;
                        break;
                    }
                }
            }
        }
    }
}

void printer(char *buffer, int length)
{

    for (int i = 0; i < length; i++)
    {
        printf("%d-", buffer[i]);
    }    
    printf("\n");
    free(ptr);
}
