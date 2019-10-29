#include <stdio.h>

int main(int argc, char *argv)
{
    brainfuck_interpret("><<><<><><<<<>>>");
}

int brainfuck_interpret(char *code)
{

    int length = strlen(code);
    for (int i = 0; i < length; i++)
    {
        printf("%c\n", code[i]);
    }
}