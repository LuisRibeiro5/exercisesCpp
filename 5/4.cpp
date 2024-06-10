#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n1[10]={0}, n2[10]={0}, i = 0;
    string aluno[10]={""};
    char res, presente[10]={""};
    float media[10]={0};
    
    do
    {   
        cout << "Nome do aluno " << i + 1 << endl;
        cin.ignore();
        getline(cin,aluno[i]);
        i++; 
        if (i > 10)
        {
            cout << "Numero maximo de alunos da turma! Proxima etapa..." << endl;
            res = 'N';
        } else {
        cout << "Mais um aluno ? S/N" << endl;
        res = toupper(cin.get());
        }
       
    } while (res != 'N' );

    for(int i = 1; i < 11; i++){
        if(aluno[i - 1] == ""){
            n1[i - 1] = 0;
        } else {
        cout << "Qual a nota 1 do aluno " <<  aluno[i - 1] << "?" << endl;
        cin >> n1[i - 1];
        }
    }

    for(int i = 1; i < 11; i++){
        if(aluno[i - 1] == ""){
            n2[i - 1] = 0;
        } else {
        cout << "Qual a nota 2 do aluno " << aluno[i - 1] << "?" << endl;
        cin >> n2[i - 1];
        }
    }

    
    for(int i = 1; i < 11; i++){
        if(aluno[i - 1] == ""){
            media[i - 1] = 0;
        } else {
        media[i - 1] = float(n1[i - 1] + n2[i - 1]) / 2;
        }
    }

    for(int i = 1; i < 11; i++){
        if (aluno[i - 1] != "")
        {
            presente[i - 1] = 'P';
        }else{
            presente[i - 1] = 'F';
        }
        
    }   
    
    for(int i = 1; i < 11; i++){
        if(presente[i - 1] == 'P'){
        cout << "Aluno: " << aluno[i - 1] << endl;
        cout << "Nota1: " << n1[i - 1];
        cout << "  Nota2: " << n2[i - 1];
        cout << "  Media: " << media[i - 1] << endl;
        } else {
            cout << "O aluno na posicao " << i << " faltou." << endl; 
        }
    }

    return 0;
    
}