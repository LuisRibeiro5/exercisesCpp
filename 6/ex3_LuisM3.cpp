/*Ler um vetor R de 10 elementos e um vetor S de 20 elementos. A seguir, gerar um vetor X que contenha uma 
única ocorrência dos elementos comuns a R e S (intersecção). Após completar o preenchimento, mostrar o 
vetor X. Considerar que nos vetores R e S podem existir elementos repetidos. */
#include<iostream>
using namespace std;
int main(){
    int R[10], S[20];
    cout << "Leitura vetor R: " << endl;
    for (int i = 0; i < 10; i++){   
        cout << i + 1 << "o: ";
        cin >> R[i];
    }
    
    cout << "Leitura vetor S: " << endl;
    for (int i = 0; i < 20; i++){
        cout << i + 1 << "o: ";
        cin >> S[i];
    }

    int X[10] = {0};
    int contX = 0;
    for (int i = 0; i < 10 ; i++){
        for (int j = 0; j < 20; j++){

            if (R[i] == S[j]){

                bool taNoVetor = false;
                for (int k = 0; k < 10; k++){
                    if(R[i] == X[k]){
                        taNoVetor = true;
                        break;
                    }
                }
                
                if(!taNoVetor){
                    X[contX] = R[i];
                    contX++;
                    break;
                }
                
            }
            
        }
        
    }

    cout << "Os numeros em comum sao: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << X[i] << ", " << endl;
    }
    
    return 0;
    
}