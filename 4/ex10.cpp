#include<iostream>
#include<vector>
#define tmax 100
using namespace std;

int main(){
    int n;
    do {
        cout << "Digite o numero de posicoes do vetor: ";
        cin >> n;
        if (n > tmax || n < 1) {
            cout << "ERRO, tamanho deve estar entre 1 e 100" << endl;
        }
    } while (n > tmax || n < 1);
    
    int vet[n];
    for(int i = 0; i < n; i++){
        cout << "Posicao " << i + 1 << ": ";
        cin >> vet[i];
    }   

    vector<int> primos;
    for(int i = 0; i < n; i++){
        bool ehPrimo = true;
        for(int j = 2; j * j <= vet[i]; j++){
            if(vet[i] % j == 0){
                ehPrimo = false;
                break;
            }
        }

        if(ehPrimo && vet[i] > 1){
            primos.push_back(vet[i]);
        }
    }

    cout << "Numeros primos: ";
    for(int primo : primos){
        cout << primo << " ";
    }

    return 0;
}