//Funciones: No reciben ni retornan

#include<iostream>
using namespace std;

void sumar()
{
    int num1, num2, r;
    cout<<"Ingresa numero 1: ";
    cin>>num1;
    cout<<"Ingresa numero 2: ";
    cin>>num2;
    r = num1 + num2;
    cout << "La suma es " << r;
}

int main()
{
    sumar();
}

/*Como ven, todo lo que habr�amos puesto en nuestro main mejor los pusimos en una funci�n y desde el main la llamamos. 
Una funci�n siempre, siempre, siempre tiene que ir antes del main.
Una funci�n de este tipo que hemos usado muchas veces es getch();*/

