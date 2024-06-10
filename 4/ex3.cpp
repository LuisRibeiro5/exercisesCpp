#include<iostream>
#include<cmath>
#define TMAX 15
using namespace std;
int main(){
    float v[TMAX]={0}, w[TMAX]={0};

    int n;
    do
    {
        cout << "Quantos valores deseja armazenar? " << endl;
        cin >> n;
    } while (n > TMAX || n < 1);

    cout << "Primeiro vetor:" << endl;
    for(int i = 0; i < n; i++){
        cout << "posicao " << i + 1 << ": ";
        cin >> v[i]; cout << endl;
    }

    cout << "Segundo vetor:" << endl;
    for(int i = 0; i < n; i++){
        cout << "Posicao " << i + 1 << ": ";
        cin >> w[i]; cout << endl;
    }
    
    float z[TMAX]={0};
    for(int i = 0; i < n; i++){
        z[i] = v[i] + w[i];
    }

    cout << "A soma do primeiro e do segundo vetor é: " << endl;
    for(int i = 0; i < n; i++){
        cout << "[" << v[i] << "]" << "+ [" << w[i] << "] = [" << z[i] << "]" << endl;
    }

    for(int i = 0; i < n; i++){
        z[i] = v[i] - w[i];
    }

    cout << "A subtracao do primeiro e do segundo vetor é: " << endl;
    for(int i = 0; i < n; i++){
        cout << "[" << v[i] << "]" << "- [" << w[i] << "] = [" << z[i] << "]" << endl;
    }

    for(int i = 0; i < n; i++){
        z[i] = v[i] / w[i];
    }

    cout << "A divisao do primeiro e do segundo vetor é: " << endl;
    for(int i = 0; i < n; i++){
        cout << "[" << v[i] << "]" << "/ [" << w[i] << "] = [" << z[i] << "]" << endl;
    }

    for(int i = 0; i < n; i++){
        z[i] = v[i] * w[i];
    }

    cout << "A multiplicacao do primeiro e do segundo vetor é: " << endl;
    for(int i = 0; i < n; i++){
        cout << "[" << v[i] << "]" << "* [" << w[i] << "] = [" << z[i] << "]" << endl;
    }

    int p = 0;
    for(int i = 0; i < n; i++){
        p += z[i];
    }

    cout << "O produto escalar entre o Primeiro e segundo vetor eh: "  << p;

    return 0;
}