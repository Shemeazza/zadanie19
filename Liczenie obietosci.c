#include <stdio.h>
#include <math.h>
int a;
int b;
int c;
float kula = 0.0;

int obliczprosto(int a, int b, int c){
    return(a*b*c);
}
float obliczkula(int a){
	float b = (4/3.0)*M_PI*pow(a,3);
	return b;
}

int main()
{
    printf("Podaj Promien:\n");
    scanf("%d",&a);
    kula = obliczkula(a);
    printf("Wynik to: %f", kula);   
    return 0;
}
