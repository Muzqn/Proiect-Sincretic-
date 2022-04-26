#include<stdio.h>
#include<stdlib.h>
#include<conio.h>



int main()
{
	int n;
	int arr[20];
	int i,j;
	int opt;
	int patrat;
	int counter=0;
	do
	{
		printf("--------------------------------------------\n");
		printf("0.Iesire\n");
		printf("1.Introducere numere\n");
		printf("2.Afisare numere\n");
		printf("3.Afisare numar de patrate perfecte\n");
		printf("--------------------------------------------\n");
		printf("Alege optiunea dorita:");
		scanf("%d", &opt);
		switch (opt)
		{
		case 0:exit(0);
			break;
		case 1:
			printf("Insereaza numarul de elemente:");
			scanf("%d", &n);
			printf("Insereaza elemente:\n");
			for (i = 0; i < n; i++)
				scanf("%d", &arr[i]);
			break;
		case 2:
			printf("\nElementele sunt:\n");
			for (i = 0; i < n; i++)
				printf("%d  \n", arr[i]);
			break;
		case 3:
			for (i = 0; i < n; i++)
			{
				patrat = arr[i] * arr[i];
				for (j = 0; j < n; j++)
				{
					if (arr[j] == patrat)
					{
						counter = counter + 1;
					}
				}
			}
			printf("Numarul de patrate perfecte este:%d\n", counter);
			counter = 0;
			break;
		default:printf("Optiune gresita , incearca din nou\n");
			break;
		}
	} while (opt);
	getch();
	return 0;
} 





