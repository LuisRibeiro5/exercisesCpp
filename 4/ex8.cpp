#include<iostream>
#define tmax 15
using namespace std;
int main(){
    int n;
    do
    {
        cout << "Digite o numero de posicoes do vetor: ";
        cin >> n;
        if (n > tmax || n < 1)
        {
            cout << "Numero de posicoes deve tar entre 1 e 15" << endl;
        }
        
    } while (n > tmax || n < 1);

    int vet[n];
    for(int i = 0; i < n; i++){
        cout << "Digite o " << i + 1 << "o valor: ";
        cin >> vet[i];
    }
    
    for(int i = 0; i < n - 1; i++){
        int posicao = i;
        for(int j = posicao + 1; j < n; j++){
            if (vet[j] < vet[posicao])
            {
                posicao = j;
            }
        }
        swap(vet[i],vet[posicao]);
    }

    for(int i = 0; i < n; i++){
        cout << vet[i] << " ";
    }

    return 0;
}   
