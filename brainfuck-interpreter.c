#include <stdio.h>
#include <stdlib.h>

char *code = "><<<<<>>>>++++++>>>]][][][>>>>]]\0";

int main(int argc, char *argv)
{

    int length = strlen(code);
    char *ptr = (char *)calloc(length, sizeof(char));
    printf("%d\n", length);

    // for (int j = 0; j < length; j++)
    // {

    // }

    for (int i = 0; i < length; i++)
    {
        //printf("%d\n", ptr[i]);
        printf("%c\n", code[i]);
    }

    return 0;
}
