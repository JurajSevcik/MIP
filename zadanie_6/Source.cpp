//Juraj Ševèík
//rekurzívni nekoneèní fibonacci 


#include<stdio.h>
/*
//int fibonaci(int i){int cislo = 0;int pomocna = i;if ((i == 1) || (i == 2)){return 1;}else{while (pomocna > 2){cislo = fibonaci(i - 1) + fibonaci(i - 2);pomocna--;}return cislo;}}

//int main(void){int cislo;int i = 0;do{cislo = fibonaci(i);printf("%d\n", cislo);i++;} while (true);return 0;}

//int main(void){long int a = 1, b = 1, c = 0;int i = 0;do{printf("%d.  %d\n",i,(a + b));c = a;a = a + b;b = c;i++;} while (i < 50);return 0;}//toto je zaujímavý riadok 
*/ 
//skusam nieco ine 

int main(void)
{
	int a = 10;
	int b = 10;
	int pol = a / 2;
	for (int k = 0; k < 3; k++)//opakovanie podseba
	{
		for (int i = 0; i < a; i++)
		{

			for (int j = 0; j < b; j++)
			{


				if ((j >= pol) && (i <= pol))
				{
					printf("x");
				}
				else if ((i >= pol) && (j > pol) && (i <= j))
				{
					printf("x");
				}
				else if ((i >= pol) && (j < pol) && (j + i == b - 1))
				{
					printf("x");
				}
				else
				{
					printf(".");
				}


			}
			printf("\n");

		}
	}
	
	return 0;
}