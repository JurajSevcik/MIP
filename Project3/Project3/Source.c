/*Juraj �ev��k 24.9.2020 proc. prog.
program ktor� vypo��ta obvod kruhu na zaklade polomeru  */
#include<stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	//resetuje hodnotu r a nastav� p� n a 3,14
	double pi, r;
	pi = 3.14;
	r = 0;
	//na��tanie hodnoty z klavesnice 
	printf("Vlo� polomer kruhu na vypo��tanie: \n");
	scanf("%lf", &r);
	//v�po�et a zaokruhlenie na 2 desatine miesta 
	printf("Obvod kruhu z polomerok %.2lf je %.2lf", r, (2 * r * pi));
	getchar();
	return 0;
}