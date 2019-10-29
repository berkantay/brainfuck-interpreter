#include <stdio.h>
#include <stdlib.h>

char *code = "><<<<<>>>>++++++>>>]][][][>>>>]]";

int main(int argc, char *argv)
{

    int length = strlen(code);
    int *ptr = malloc(sizeof(char) * length);
    // for (int j = 0; j < length; j++)
    // {

    // }

    for (int i = 0; i < length; i++)
    {
        printf("%d\n", ptr[i]);
        printf("%c\n", code[i]);
        printf("***************\n");
    }
}
