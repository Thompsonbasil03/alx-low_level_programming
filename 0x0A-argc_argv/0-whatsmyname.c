#include <stdio.h>
#include "main.h"

/**
* main -> a function to print the nameof the program
* @argc: count arguments
* @argv: arguments
*
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
(void) argc;
printf("%s\n", argv[0]);

return (0);
}
