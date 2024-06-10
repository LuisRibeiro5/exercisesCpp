#include<iostream>
#include<cmath>
using namespace std;

int main () {
    string nome, alunos18="";
    char resp;
    int idade,alunos20=0;

    do
    {
        cout << "Digite o nome do aluno:";
        getline(cin,nome);

        do
        {
            cout << "Digite a idade do aluno:";
            cin >> idade;
        } while (idade <= 0);

        if (idade == 18) {
            alunos18 += nome + ",";     
        } else if (idade > 20)
        {
            alunos20++;
        }
    	cin.ignore();
        cout << "Mais um aluno?" << endl;
        resp = toupper(cin.get());
        cin.ignore();
    } while (resp != 'N');
    
    cout << "Os alunos com 18 anos sao:" << alunos18 << endl;
    cout << "A quantidade de alunos maiores de 20 é " << alunos20; 
}