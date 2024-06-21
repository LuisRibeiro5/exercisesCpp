/*Desenvolva um programa para jogar o jogo da velha. Deve-se controlar o andamento do jogo com uma matriz 
3x3. A cada lance o jogador deve informar qual a posição do tabuleiro que deve ser preenchida – faça validação 
de entrada de dados. Se houver um ganhador, seu programa deve interromper o jogo e avisar que o jogo 
terminou. A cada lance o seu programa deve mostrar o tabuleiro no formato abaixo:*/
#include<iostream>
using namespace std;
int main(){
    char velha[3][3]={{'.','.','.'},{'.','.','.'},{'.','.','.'}};
    char player;

    do{
        cout << "Jogador 1 escolha: X ou O?";
        player=toupper(cin.get());
    }while (player != 'X' && player != 'O');

    int rodada = 1;
    bool ganhou = false;

    while(rodada <= 9 && !ganhou){
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cout << "|" << velha[i][j];
            }
            cout << "|" << endl;
            cout << "-------" << endl;
        }
        
        if (rodada % 2 == 1){
            cout << "Vez do Jogador 1" << endl;
        } else {
            cout << "Vez do Jogador 2" << endl;
        }
        
        int lin, col;
        cout << "Digite a linha e coluna onde deseja posicionar seu marcador: EX lin:1 col:1, lin2 col2... linN colN." << endl;
        
        bool marcou = false;
        do{
            do{
                cout << "Linha: ";
                cin >> lin;
                if (lin < 1 || lin > 3){
                    cout << "Linha vai de 1 a 3, corrija." << endl;
                }
            } while (lin < 1 || lin > 3);
            
            do{
                cout << "Coluna: ";
                cin >> col;
                if (col < 1 || col > 3){
                    cout << "Linha vai de 1 a 3, corrija." << endl;
                }
            } while (col < 1 || col > 3);

            lin--;
            col--;

            if (velha[lin][col] == '.'){
                velha[lin][col] = player;
                marcou = true;
            } else {
                cout << "Posicao ja esta ocupada, escolha outra." << endl;
            }
        }while(!marcou);

        for (int i = 0; i < 3; i++){
            if((velha[i][0] == player && velha[i][1] == player && velha[i][2] == player) || (velha[0][i] == player && velha[1][i] == player && velha[2][i] == player)){
                cout << "Fim de jogo " << player << " ganhou!!" << endl;
                ganhou = true;
                break;
            }
        }
        
       if((velha[0][0] == player && velha[1][1] == player && velha[2][2] == player) || (velha[0][2] == player && velha[1][1] == player && velha[2][0] == player)){
            cout << "Fim de jogo " << player << " ganhou!!" << endl;
            ganhou = true;
            break;
        }
        
        if (player == 'X'){
            player = 'O';
        } else {
            player = 'X';
        }
        rodada++;
    }    

    return 0;
} 
