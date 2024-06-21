/*Ler um vetor R de 5 elementos contendo o gabarito da LOTO. A seguir, ler um vetor A de 10 elementos contendo 
uma aposta, calcule e mostre quantos pontos fez o apostador. Faça isso para várias apostas (controle com 
“Mais uma aposta? S/N”).*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int loto[5];
    cout << "Gabarito LOTO: " << endl;
    for (int i = 0; i < 5; i++)
    {
        do
        {
            cin >> loto[i];
        } while (loto[i] < 0);
    }
    
    char resp;
    do{
        cout << "Digite os numeros da sua aposta: " << endl;
        int aposta[10];
        for (int i = 0; i < 10; i++)
        {
            do
            {
                cin >> aposta[i];
            } while (aposta[i] < 0);
        }
        
        int pontos = 0;
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 10; j++){
                if (loto[i] == aposta[j])
                {
                    pontos += 1;
                }
            }
        }
        cout << "O total de acertos foi: " << pontos << endl;

        do{
            cout << "Deseja verificar mais uma aposta? S/N " << endl;
            cin.ignore();
            resp = toupper(cin.get());
        }while(resp != 'N' && resp != 'S');
    }while(resp != 'N');

    return 0;

}