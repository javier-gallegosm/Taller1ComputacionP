#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
using namespace std;

float fn(char* C, char a){
    int i=0;
    float suma=0;
    float arreglo;
    for(i;i< strlen(C);i++)
    {
        if(C[i]== 'x')
        {
            C[i]=a;
        }
        if(C[i]== 'X')
        {
            C[i]=a;
        }
        if(C[i]== '*')
        {
            C[i]='0';
        }
        if(C[i]== '+')
        {
            C[i]='0';
        }
    }
    for(int j=0; j< strlen(C);j++)
    {
        char caracter = C[j];
        float comoEntero = caracter - '0';
    }
    for(int k=0; k < strlen(C);k++)
    {
        cout << C[k] << endl;

    }
    cout << "el valor entero es:"<<arreglo << endl;
    }

    /*
    float m=0;
    int n;
    char auxiliar[10];   // ejemplo es que si x esta elevado a 2 en el auxiliar el valor que acompaña a x en este caso 1, queda en la posicion 2 del arreglo auxiliar
    for(int i=0; i < strlen(C);i++)
    {
        if(C[i] == '*' && C[i+1] == '*')
        {
            n=C[i-2];
            cout<<n << endl;
            auxiliar[n]= C[i-2];
        }
    }
    for(int i=0; i < strlen(auxiliar);i++)
    {
        m= m+ pow(auxiliar[i]*x,i);
        return m;
    }
    }

float dfn(char C[]){   // esta funcion guarda los valores de la funcion en un arreglo auxiliar en el que sus indices son los coeficientes
    float m=0;
    char auxiliar[10];   // ejemplo es que si x esta elevado a 2 en el auxiliar el valor que acompaña a x en este caso 1, queda en la posicion 2 del arreglo auxiliar
    char auxiliar2[10];
    for(int i=0; i < strlen(C);i++)
    {
        if(C[i] == '*' && C[i+1] == '*')
        {
            auxiliar[C[i+2]]= C[i-2];
        }
    }
    for(int i=1; i < strlen(auxiliar);i++)
    {
        auxiliar[i-1]=auxiliar[i]*i;
    }
    for(int i=0; i < strlen(auxiliar);i++)
    {
        m= m+ auxiliar[i]*i;
        return m;
    }
}
*/
int main()
{
    char *x;
    char c;
    cout<< "ingrese f(X)"<<endl;
    cin >> x;
    cout << "ingrese un valor de x" << endl;
    cout <<endl;
    cin >> c;
    float s= fn(x,c);
    cout << "el valor de la funcion es = "<<s << endl;
    return 0;
}
// arreglar el tema de la x




