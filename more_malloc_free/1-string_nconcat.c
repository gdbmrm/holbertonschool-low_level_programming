#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - fonction qui renvoie la longeur d'un string
 *
 * Write a function that returns the length of a string.
 *
 * @s: string d'entrÃe
 *
 * Return: longeur du string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);
}

/**
 * string_nconcat - nom fonction
 *
 * Write a function that concatenates two strings.
 *
 * @s1: premiere chaine a concatener
 * @s2: deuxieme chaine a concatener
 * @n: nombre de caractere de s2 a concatener
 *
 * Return: tableau avec les deux chaines
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *ar;
	unsigned int lens2 = 0;

	if (s1 == NULL)/** test si la chaine est NULL*/
	{
		s1 = ""; }
	if (s2 == NULL)/** test si la chaine est NULL*/
	{
		s2 = ""; }
	ar = malloc((_strlen(s1) + n) + 1);/**allocation des 2len + '\0'*/

	if (ar == NULL)
	{
		return (NULL); }
	while (s2[lens2] != '\0')/** longueur de s2*/
	{
		lens2++; }
	while (s1[i] != '\0') /**pour copier s1 dans ar*/
	{
		ar[i] = s1[i];
		i++; }
	if (n >= lens2)
	{
		while (s2[j] != '\0')
		{
			ar[i] = s2[j];
			j++;
			i++; }}
	while (j < n && s2[j] != '\0') /**copie a la suite s2 dans ar*/
	{
		ar[i] = s2[j];
		j++;
		i++; }
	ar[i] = '\0';
	return (ar);
}
