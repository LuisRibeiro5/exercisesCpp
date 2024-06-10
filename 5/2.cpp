#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int posicao, vetnum[5]={0};

    for(posicao = 0; posicao < 5; posicao++){
        cout << "Digite um numero para a posicao " << posicao + 1 << endl;
        cin >> vetnum[posicao];
    }

    for(posicao = 0; posicao < 5; posicao++){
        cout << "Numero na posicao " << posicao + 1 << ":" << vetnum[posicao] << endl;
    }

    for(posicao = 4; posicao > -1; posicao--){
        cout << "Inverso, posicao" << posicao + 1 << ":" << vetnum[posicao] << endl;
    }
    
    return 0;
}