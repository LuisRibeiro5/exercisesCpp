#include <iostream> //Exercicio1
#include <cmath>
using namespace std;

int main ()
{
    int num, cont, soma;
    char resp;

    do
    {
        do 
        {
            cout << "Digite um número maior que 0 para descobrir se ele é ou não perfeito.";
            cin >> num;
        } while (num < 0);
        cout << "Divisores:";
        soma=0;
        cont=1;
        do
        {
            if (cont != num and num % cont == 0)
            {
                soma += cont;
                cout << cont << ",";
            }
            cont++;            
        } while (cont <= num);
        if (soma == num)
        {
            cout <<endl << "O número " << num << " é perfeito pois a soma dos seus divisores é =" << soma << endl;
        } else
        {
            cout << endl << "O número " << num << " não é perfeito pois a soma dos seus divisores é =" << soma << endl;
        }
        cin.ignore();
        cout << "Mais um número? N/S";
        resp = toupper(cin.get());
    } while (resp != 'N');
    return 0;
    
}



