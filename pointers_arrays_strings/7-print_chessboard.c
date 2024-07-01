#include "main.h"
/**
 * print_chessboard - fonction qui affiche un jeu d'Ãchec
 *
 * Write a function that prints the chessboard.
 *
 * @a: jeu d'Ãchec a imprimer
 */
void print_chessboard(char (*a)[8])
{
	int colonne, ligne;

	for (colonne = 0; colonne < 8; colonne++)
	{
		for (ligne = 0; ligne < 8; ligne++)
		{
			_putchar(a[colonne][ligne]);
		}
		_putchar('\n');
	}
}
