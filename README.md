# Brainfuck Interperation Look-up Table
`>`

increment the data pointer (to point to the next cell to the right).

`<`

decrement the data pointer (to point to the next cell to the left).

`+`

increment (increase by one) the byte at the data pointer.

`-`

decrement (decrease by one) the byte at the data pointer.

`.`

output the byte at the data pointer.

`,`

accept one byte of input, storing its value in the byte at the data pointer.

`[`

if the byte at the data pointer is zero, then instead of moving the [instruction pointer](https://fatiherikli.github.io/wiki/Program_Counter "Program Counter") forward to the next command, [jump](https://fatiherikli.github.io/wiki/Branch_(computer_science) "Branch (computer science)") it _forward_ to the command after the _matching_ `]` command.

`]`

if the byte at the data pointer is nonzero, then instead of moving the instruction pointer forward to the next command, jump it _back_ to the command after the _matching_ `[` command.

`!`

if the exclaim box is checked, allows the interpreter to use all characters to the right of the `!` as program input.

## Brainfuck Code Generator
You can generate bf code from the link below: 
https://copy.sh/brainfuck/text.html

## Installation

 **git clone https://github.com/berkantay/brainfuck-interpreter**
 


**gcc -Wall brainfuck-interpreter.c -o brainfuck**

**./brainfuck**



## Delete a file

# brainfuck-interpreter
Brainfuck interpreter is written in C language
