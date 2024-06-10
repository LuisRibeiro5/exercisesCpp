#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int mat[4][4]={0};

    cout << "Digite numeros para completar a matriz" << endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << "Posicao " << i + 1 << j +  1 << " ["; cin >> mat[i][j]; cout << "]" << endl;
        }
    }

    int escolha;
    do
    {
        cout << "Digite o codigo do que deseja ver:" << endl;
        cout << "1 - matriz completa" << endl;
        cout << "2 - diagonal principal da matriz" << endl;
        cout << "3 - triangular superior" << endl;
        cout << "4 - triangular inferior" << endl;
        cout << "5 - Sair." << endl;
        cout << "Digite: "; cin >> escolha;

        if (escolha == 1){
            for (int i = 0; i < 4; i++){
                for (int j = 0; j < 4; j++){
                    cout << mat[i][j] << " ";
                }
                cout << endl;
            }    
        }
        
        if (escolha == 2){
            for (int i = 0; i < 4; i++){
                for (int j = 0; j < 4; j++){
                    if (i == j){
                         cout << mat[i][j] << " ";
                    }else{
                        cout << " "; 
                    }
                }
                cout << endl;
            }
        }
        
        if (escolha == 3){
            for (int i = 0; i < 4; i++){
                for (int j = 0; j < 4 ; j++){
                    if (i < j){
                         cout << mat[i][j] << " " ;
                    }else{
                        cout << " "; 
                    }
                }
                cout << endl;
            }
        }

        if (escolha == 4){
            for (int i = 0; i < 4; i++){
                for (int j = 0; j < 4; j++){
                    if (i > j){
                         cout << mat[i][j] << " ";
                    }else{
                        cout << " ";
                    }
                }
                cout << endl;
            }
        }

    } while (escolha != 5);
    cout << "Obrigado por participar!";

    return 0;
}