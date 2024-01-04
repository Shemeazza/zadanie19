#include <stdio.h>
int a;
int b;
int c;

int main()
{
    printf("Podaj kolejne wartoœci:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("Wynik to: %d", oblicz(a,b,c));
    return 0;
}

int oblicz(int a, int b, int c){
    return(a*b*c);
}
