#include<iostream>
#include<cmath>
using namespace std;
int main(){
    string nomes[20]={""};
    float notas[20]={0},notaTotal = 0, mediaTurma = 0;

    int n;
    do{
        cout << "Quantos alunos deseja analizar? " << endl;
        cin >> n;
    }while(n > 20 || n < 1);

    for(int i = 0; i < n; i++){
        cout << "Digite o nome do " << i + 1 << "o aluno: ";
        cin.ignore();
        getline(cin,nomes[i]);

        do{
            cout << "Digite a nota de " << nomes[i] << endl;
            cin >> notas[i];
        }while(notas[i] > 10 || notas[i] < 0);

        notaTotal += notas[i];
    }

    mediaTurma = notaTotal / n;
    cout << "Nota total da turma: " << notaTotal << endl;
    cout << "Media da turma: " << mediaTurma << endl;
    
    cout << "Nome dos estudantes cuja a nota é maior ou igual a média da turma: " << endl;
    for(int j = 0; j < n; j++){
        if(notas[j] >= mediaTurma){
            cout << nomes[j];
            cout << endl;
        }
    }

    int abaixo = 0;
    cout << "Quantos estudantes obtiveram nota abaixo da média da turma. " << endl;
    for(int j = 0; j < n; j++){
        if(notas[j] < mediaTurma){
            abaixo++;
        }
    } 

    cout << "O numero de alunos abaixo da media é " << abaixo;

    return 0;
} 