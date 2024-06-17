#include<stdio.h>
/**
 * main - Entry point
 * Description: 'Write a C program that prints the size of various types
 * on the computer it is compiled and run on.
 * Return: Always 0 (Success)
 */

int main(void)
{
int intType;
float floatType;
long int longintType;
long long longlongType;
char charType;

printf("Size of a char: %zu bytes\n", sizeof(charType))
printf("Size of a int: %zu bytes\n", sizeof(intType))
printf("Size of a long int: %zu bytes\n", sizeof(longintType))
printf("Size of a long long: %zu bytes\n", sizeof(longlongType))
printf("Size of a float: %zu bytes\n", sizeof(floatType))
return (0);
}
