#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - Returns results of the program execution
* You are not allowed to code any other function than main in this file
* You are not allowed to directly call op_add, op_sub, op_mul, op_div
* or op_mod from the main function
* You have to use atoi to convert arguments to int
* You are not allowed to use any kind of loop
* You are allowed to use a maximum of 3 if statements
*
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: Zero.
*/
int main(int argc, char *argv[])
{
int num1, num2;
char *op;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
op = argv[2];
num2 = atoi(argv[3]);

if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(num1, num2));
return (0);
}
