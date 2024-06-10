#include <iostream>
#include<cmath>	
using namespace std;
int main (){

    int contaluno[3]={0},faixa[3]={0},idadeC[3]={0},media[3]={0};
    int idade,curso;

    for(int i = 1 ;i < 5 ; i++){
        do
        {
            cout << "Qual a sua idade?" << endl;
            cin >> idade;
            cout << "Digite o codigo do seu curso:" << endl;
            cout << "1-Engenharia | 2-Computacao | 3-Administracao." << endl;
            cin >> curso;
            curso--;
        } while (idade <0 and (curso < 0 or curso > 2));
        
        contaluno[curso]++;
        idadeC[curso] += idade;
        if (idade > 19 and idade < 26)
        {
            faixa[curso]++;
        }

    }

    for(int j = 0; j<3; j++){
        if (contaluno[j] > 0){
            media[j] = float(idadeC[j])/contaluno[j]; 
        }
    }

    for(int k = 0; k < 3; k++){
        cout << "Alunos no curso" << k+1 << "," << contaluno[k] << endl; 
    }

    for (int l = 0; l < 3; l++){
        cout << "Número de alunos com idade entre 20 e 25 no curso " << l << ":" << faixa[l] << endl;
    }

    if (media[0] < media[1] and media[0] < media[2])
    {
        cout << "Curso com menor media de idade é  curso 1";
    } else if (media[1] < media[2]){
        cout << "Curso com menor media de idade é curso 2";
    } else {
        cout << "Curso com menor media de idade é curso 3";
    }
    
    return 0;
}