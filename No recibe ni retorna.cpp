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

/*Como ven, todo lo que habríamos puesto en nuestro main mejor los pusimos en una función y desde el main la llamamos. 
Una función siempre, siempre, siempre tiene que ir antes del main.
Una función de este tipo que hemos usado muchas veces es getch();*/

