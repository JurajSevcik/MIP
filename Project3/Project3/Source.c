/*Juraj Ševèík 24.9.2020 proc. prog.
program ktorý vypoèíta obvod kruhu na zaklade polomeru  */
#include<stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	//resetuje hodnotu r a nastavý pí n a 3,14
	double pi, r;
	pi = 3.14;
	r = 0;
	//naèítanie hodnoty z klavesnice 
	printf("Vlož polomer kruhu na vypoèítanie: \n");
	scanf("%lf", &r);
	//výpoèet a zaokruhlenie na 2 desatine miesta 
	printf("Obvod kruhu z polomerok %.2lf je %.2lf", r, (2 * r * pi));
	getchar();
	return 0;
}