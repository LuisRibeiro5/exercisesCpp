#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int qtde, cont, den=2;
    float total = 0;

    do {
        cout << "Quantos termos da série você deseja ver?";
        cin >> qtde;
    } while (qtde < 0);
    
    for (cont = 1; cont <= qtde; cont++)
    {
        if (cont == 1)
        {
            cout << cont << "/" << den << " -";
            total = (float) cont/den;
        } else {
            if (cont % 2 == 0)
            {
                cout << cont << "/" << 2 * den << " + ";
                total -= (float) cont / (2 * den);
                den *= 2;
            } else {
                cout << cont << "/" << 2 * den << " - ";
                total += (float) cont / (2 * den);
                den *= 2;
            }   
        }
    }
    cout << endl;
    cout << "O resultado será igual à:" << total;

    return 0;
}
