#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int resultat = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	resultat = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n",resultat);
	return (resultat);
}
