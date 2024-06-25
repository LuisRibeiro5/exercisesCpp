/*Durante um período contínuo de 28 dias (4 semanas), foi anotada a temperatura diária em uma cidade e os dados estão armazenados em uma matriz 4x7. Faça um algoritmo que: 
• leia os valores das temperaturas; 
• calcule, para cada semana, a temperatura média, a máxima e a mínima; 
• determine o dia mais quente e o dia mais frio do período observado; 
• determine a quantidade de dias em que a temperatura esteve acima dos 25oC e a quantidade 
de dias em que a temperatura esteve abaixo dos 25oC. 
• ao final, apresente os resultados.*/
#include<iostream>
using namespace std;
int main(){
    float mat[4][7];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << "Temperatura semana " << i + 1 << " dia: " << j + 1; cin >> mat[i][j]; 
        }
        
    }
    
    float min[4] = {0}, media[4] = {0}, max[4] = {0};
    //temp minima e maxima de cada semana:
    for (int i = 0; i < 4; i++)
    {
        min[i] = mat[i][i];
        max[i] = mat[i][i];
        for (int j = 1; j < 7; j++)
        {
            if (mat[i][j] > max[i]){
                max[i] = mat[i][j];

            } else if(mat[i][j] < min[i]){
                min[i] = mat[i][j];
            }   
        }
    }
    //temp media de cada semana:
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            media[i] += mat[i][j];
        }
        media[i] /= 7;
    }

    //Escrevendo temp minina, maxima e media de cada semana:
    for (int i = 0; i < 4; i++)
    {
        cout << "Semana " << i + 1 << ": " << endl;
        cout << "Temp minima: " << min[i] << endl;
        cout << "Temp maxina: " << max[i] << endl;
        cout << "Temp media: " << media[i] << endl;
        cout << "--------------------------" << endl;
    }
    

    int diafrio = 0, diaquente = 0;
    float maisfrio = mat[0][0], maisquente = mat[0][0];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j < 7; j++)
        {
            if (mat[i][j] > maisquente){
                maisquente = mat[i][j];
                diaquente = i * 7 + j + 1;

            } else if(mat[i][j] < maisfrio){
                maisfrio = mat[i][j];
                diafrio = i * 7 + j + 1;
            }
        }
    }
    //Escrevendo dias mais frio e quente:
    cout << "O dia mais frio foi " << diafrio << "o, com " << maisfrio << " graus." << endl;
    cout << "O dia mais quente foi " << diaquente << "o, com " << maisquente << " graus." << endl;

    //Dias acima e abaixo de 25o
    int acima25 = 0, abaixo25 = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (mat[i][j] >= 25){
                acima25++;

            } else if(mat[i][j] < 25){
                abaixo25++;
            }   
        }
    }

    cout << "A quantidade de dias acima de 25o foi " << acima25 << endl;
    cout << "A quantidade de dias abaixo de 25o foi " << abaixo25 << endl;

    return 0;
}