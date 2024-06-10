#include<iostream>
#include<cmath>
using namespace std;

int main () {
    int num, par=0,impar=0,numt=0;

    do
    {
        cout << "Digite um numero, para finalizar o programa digite 0" << endl;
        cin >> num;
        if (num > 0 and num % 2 == 0) 
        {
            numt += num;
            par++;
        } else {
            impar++;
        } 
    } while (num != 0);
    if (par == 0)
    {
        cout << "A media dos numeros pares é " << (float)numt/par << endl;
    }
    cout << "A quantidade de numeros impares é " << impar - 1;

    
    return 0;
}