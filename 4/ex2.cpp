#include<iostream>
#include<cmath>
#define TMAX 10
using namespace std;
int main(){
    float V[TMAX]={0};

    int n;
    do{
        cout << "Quantos valores deseja que o vetor tenha? " << endl;
        cin >> n;
    }while(n > TMAX || n < 1);
    
    for(int i = 0; i < n; i++){
        cout << "Valor do vetor na posicao " << i + 1 << endl;
        cin >> V[i];
    }

    float S[10]={0};
    S[0] = V[0];
    S[n - 1] = V[n - 1];

    for(int i = 1; i < n - 1; i++){
        S[i] = (V[i - 1] + V[i] + V[i + 1]) / 3;
    }

    for(int i = 0; i < n; i++){
        cout << "Vetor incial: " << V[i] << "| Vetor suavizado: " << S[i] << endl;
    }

    return 0;
}