#include<iostream>
#include<cmath>
using namespace std;
int main(){
    char gabarito[5], resposta[5];
    int nota[3]={0};
    float media=0;
    string nomes[3];

    cout << "Gabarito:" << endl;
    for(int i = 0; i < 5; i++){
        cout << "Questao " << i + 1 << ": ";
        cin >> gabarito[i];
        gabarito[i] = toupper(gabarito[i]);
    }
    cout << "Respostas dos alunos:" <<  endl;

    for(int i = 0; i < 3; i++){
        cout << "Nome aluno " << i + 1 << ": "; 
        cin.ignore();      
        getline(cin,nomes[i]);

        for(int j = 0; j < 5; j++){
            resposta[j] = '\0';
            cout << "Questao " << j + 1 << ": ";
            cin >> resposta[j];
            resposta[j] = toupper(resposta[j]);
          
            if (resposta[j] == gabarito[j]){
                 nota[i] += 2;
            }
        }       
    }
    
    cout << "Notas dos alunos:" << endl;
    for(int i = 0; i < 3; i++){
        cout << nomes[i] << " NOTA: " << nota[i] << endl;
        media += nota[i];
    }

    media = media/3;
    cout << "Media da turma: " << media;

    return 0;
}
    
