# Printf

## Description

The printf function sends formatted output to stdout, the standard output stream.

_printf is a custom implementation of the C programming function printf
The _printf() function writes the output under the control of a format string that specifies how subsequent arguments are converted for output.

## Format of the format string

The format string is a character string, beginning and ending in its initial shift state, if any.
The format string is composed of zero or more directives: ordinary characters (not %), which are copied unchanged to the output stream;
and conversion specifications, each of which results in fetching zero or more subsequent arguments.
Each conversion specification is introduced by the character % and ends with conversion specifier.
The overall syntax of a conversion specification is: %[$][flags][width][.precision][length modifier]conversion.

The arguments must correspond properly (after type promotion) with the conversion specifier.
By default, the arguments are used in the order given, where each '*' and each conversion specifier asks for the next argument.


## Conversion specifiers

Specifies the type of conversion to be applied. The conversion specifiers and their meanings are:
   . d, i: The int argument should be signed decimal notation, and the resulting number is written.
   . c: The int argument is converted to a char, and the resulting character is written.
   . s: The const char * argument is expected to be a pointer to an array of character type (pointer to a string).
     Characters from the array are written up to (but not including) a terminating null byte ('\0').
   . %: A '%' is written. No argument is converted. The complete conversion specification is '%%'.


Getting Started

## Requirements

Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The prototypes of all your functions should be included in your header file called main.h
All your header files should be include guarded


## Compilation

Your code will be compiled this way: $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c


## Examples

. String
Input: _printf("%s\n", 'This is my first collaboration');
Output: This is my first collaboration

. Character
Input: _printf("The third vowel is  %c\n", 'C');
Output: The third vowel is C

. Integer
Input: _printf("There are %i letters in the alphabet\n", 27);
Output: There are 27 letters in the alphabet

. Decimal
Input: _printf("%d\n", 1000);
Output: 1000


Authorized functions and macros
write (man 2 write), malloc (man 3 malloc), free (man 3 free), va_start (man 3 va_start)
va_end (man 3 va_end), va_copy (man 3 va_copy), va_arg (man 3 va_arg)


## Mandatory Tasks

0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
Write a function that produces output according to a format.
Prototype: int _printf(const char *format, ...);

1. Education is when you read the fine print. Experience is what you get if you don't
Handle conversion specifiers d, i.

2. With a face like mine, I do better in print
Handle the following custom conversion specifiers:
b: the unsigned int argument is converted to binary

3. What one has not experienced, one will never understand in print
Handle the following conversion specifiers: u, o, x, y

4. Nothing in fine print is ever good news
Use a local buffer of 1024 chars in order to call write as little as possible.

5. My weakness is wearing too much leopard print
Handle the following custom conversion specifier:
S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x,
followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
Handle the following conversion specifier: p.

7. The big print gives and the small print takes away
Handle the following flag characters for non-custom conversion specifiers: +, space, #

8. Sarcasm is lost in print
Handle the following length modifiers for non-custom conversion specifiers: l, h
Conversion specifiers to handle: d, i, u, o, x, X

9. Print some money and give it to us for the rain forests
Handle the field width for non-custom conversion specifiers.

10. The negative is the equivalent of the composer's score, and the print the performance
Handle the precision for non-custom conversion specifiers.

11. It's depressing when you're still around and your albums are out of print
Handle the 0 flag character for non-custom conversion specifiers.

12. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
Handle the - flag character for non-custom conversion specifiers.

13. Print is the sharpest and the strongest weapon of our party
Handle the following custom conversion specifier:
r : prints the reversed string

14. The flood of print has turned reading into a process of gulping rather than savoring
Handle the following custom conversion specifier:
R: prints the rot13'ed string

## Man page
- To install the Man Page:
```
cp _printf_man_page /usr/local/man/man3/_printf_man_page.1
gzip /usr/local/man/man8/_printf_man_page.1
man _printf_man_page
```
