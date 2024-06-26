/* Ler um vetor Gabarito que contenha o gabarito de uma prova de 10 
questões, cujas respostas possíveis são A, B, C, D ou E. Logo após, ler uma matriz Respostas que contenha 
as respostas de 20 alunos para estas questões. Calcular e escrever a quantidade de acertos de cada aluno. */
#include<iostream>
using namespace std;
int main(){
    char gab[10];
    cout << "Leituta das respostas do gabarito: A/B/C/D/E " << endl;
    for (int i = 0; i < 10; i++)
    {
        do{
            cout << "Questao " << i + 1 << ": ";
            gab[i]=toupper(cin.get());
            cin.ignore();
        }while(gab[i] < 'A' || gab[i] > 'E');
    }

    char resp[20][10];
    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 10; j++){
            do{
            cout << "Aluno " << i + 1 << " questao " << j + 1 << ": ";
            resp[i][j]=toupper(cin.get());
            cin.ignore();
        }while(resp[i][j] < 'A' || resp[i][j] > 'E');
        }
    }
    
    int aluno[20] = {0};
    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 10; j++){
            if (resp[i][j] == gab[j]){
                aluno[i] ++;
            }
        }
    }
    
    cout << "Acerto de cada aluno: " << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << "Aluno " << i + 1 << ": " << aluno[i] << " acertos." << endl;
    }
    
    return 0;
}