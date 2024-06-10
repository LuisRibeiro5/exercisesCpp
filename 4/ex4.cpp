#include<iostream>
#include<cmath>
#define max 15
using namespace std;
int main(){
    int v[max]={0};

    int n;
    do
    {
        cout << "Quantos valores deseja armazenar? " << endl;
        cin >> n;
    } while (n > max || n < 1);
    
    for(int i = 0; i < n; i++){
        cout << i + 1 << "o valor: ";
        cin >> v[i]; cout << endl; 
    }

    int min = v[0];
    for(int i = 1; i < n; i++){
        if (min > v[i])
        {
            min = v[i];
        }
    }

    int maior = v[0];
    for (int i = 1; i < n; i++){
        if (maior < v[i])
        {
           maior = v[i];
        }
    }

    cout << "O menor valor do vetor eh: " << min << endl;
    cout << "O maior valor do vetor eh: " << maior << endl;

    return 0;
    
}