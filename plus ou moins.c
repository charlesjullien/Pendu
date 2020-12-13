#include <stdio.h>
#include <time.h>

int main()
{
	int		MIN;
	int		MAX;
	int		mystery_num;
	int		typed_num;
	int		replay;
	int		count;

	MIN = 1;
	MAX = 100;
	srand(time(NULL));
	replay = 1;
	count = 0;
	while (replay == 1)
	{
		mystery_num = (rand() % (MAX - MIN + 1)) + MIN;
		printf("       **************Bienvenue au jeu du + ou - !!!**************\n\n");
		while (typed_num != mystery_num)
		{
			count++;
			printf("Veuillez entrer une valeur entre 1 et 100 pour trouver le nombre mystère : ");
			scanf("%d", &typed_num);
			printf("\n\n");
			if (typed_num == mystery_num)
			{
				printf("Bravo !! Vous avez trouvé le nombre mystère(%d) au bout de %d essais!!\n\n", mystery_num, count);
			}
			else if (typed_num > mystery_num && (typed_num >= MIN && typed_num <= MAX))
			{
				printf("C'est moins!\n\n");
			}
			else if (typed_num < mystery_num && (typed_num >= MIN && typed_num <= MAX))
			{
				printf("C'est plus!\n\n");
			}
			else
				printf("%d n'est pas une entrée correcte...\n\n", typed_num);

		}
		printf("Voulez vous refaire une partie? Si oui, tappez 1, sinon tappez 0\n\n");
		scanf("%d", &replay);
	}
	return (0);
}
