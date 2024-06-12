#include<iostream>
#define tmax 30
using namespace std;
int main(){
    int n;
    do
    {
        cout << "Digite o numero de alunos da turma: "; cin >> n;

        if (n > tmax || n < 1)
        {
            cout << "ERRO, numero de alunos deve ser entre 1 e 30." << endl;
        }
    } while (n > tmax || n < 1);

    string aluno[tmax];
    float nota[tmax];
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout << "Digite o nome e nota do " << i + 1 << "o aluno" << endl;
        cout << "Aluno: "; getline(cin,aluno[i]);
        cout << "Notas: "; cin >> nota[i];
        cin.ignore();
    }
    
    char resp;
    do{
        string buscar;
        cout << "Digite um nome para verificar se está estre os alunos presentes: "; 
        getline(cin,buscar);

        bool achou = false;
        int posicao = 0;
        while(not(achou) and posicao < n)
        {
            if (aluno[posicao] == buscar)
            {
                cout << "Aluno presente! Nota: " << nota[posicao];
                achou = true;
            }else if (posicao == n - 1)
            {
                cout << "Aluno nao esta presente.";
            }
            
            posicao++;
            
        }

        cout << "deseja pesquisar mais uma aluno? S/N";
        cin >> resp;
        resp = toupper(resp);
        cin.ignore();

    }while(resp != 'N');


}