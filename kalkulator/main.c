#include <stdio.h>
#include <stdlib.h>

int main()
{
int liczba1;
int liczba2;
int op;
printf("Podaj pierwsza liczbe: ");
scanf("%d" ,&liczba1);
printf("Podaj druga liczbe: ");
scanf("%d",&liczba2);

printf("Dodawanie - 1\n");
printf("Odejmowanie - 2\n");
printf("Mnozenie - 3\n");
printf("Dzielenie - 4\n");
printf("Wybierz operator\n");
scanf("%d",&op);

switch(op){
case 1:add(liczba1,liczba2);break;
case 2:substract(liczba1,liczba2);break;
case 3:mult(liczba1,liczba2);break;
case 4:devide(liczba1,liczba2);break;
default:printf("Nieprawidlowy operator!\n");
}
}
void add(int a,int b){
    printf("Wynik: %d", a+b);
}

void substract(int a,int b){
    printf("Wynik: %d", a-b);
}

void mult(int a,int b){
    printf("Wynik: %d", a*b);
}

void devide(int a,int b){
    if(b==0){
        printf("Nie wolno dzielic przez zero");
    }else{
    printf("Wynik: %f", a/(float)b);
    }

}




