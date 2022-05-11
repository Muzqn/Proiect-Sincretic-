#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>


int PatratPerfect(int valoare)
{
	int v1;
	float v2;
	v2 = sqrt((double)valoare);
	v1 = v2;
	if (v1 == v2)
		return 1;
	else
		return 0;
}

int main()
{
	int n;
	int arr[20];
	int i;
	int opt;
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
				counter = counter + PatratPerfect(arr[i]);
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





