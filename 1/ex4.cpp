#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int qtde, num, cont=1, i=1, numdiv=0;

    do
    {
        cout << "Quantos numeros voce deseja verificar?";
        cin >> qtde;
    }while (qtde <= 0);
    
    while (cont <= qtde)
    {   
        cout << "Digite o " << cont << "o numero a ser verificado:";
        cin >> num;

        if (num == 0)
        {
            cout << "0 nao tem divisores." << endl;
        } else {
            cout << "Os divisores de " << num << "sao: ";
            do
            {
                if (num % i == 0){
                    if (i != num) {
                         cout << i << ",";
                    } else {
                       cout << i << ". "; 
                    }
                    numdiv++;
                }

                i++;

            } while (i <= num);
            cout << "E o total de divisores e: " << numdiv << endl;

        }

        cont++;    
    }
    
}