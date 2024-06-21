//Jogo da velha
#include<iostream>
#include<vector>

int main(){
    char velha[3][3] = {""};
    //preenchimento da matriz para identificacao das casas
    int cont = 1;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            velha[i][j] = '0' + cont;
            cont++;
        }
    }

    //Comeco do jogo com um looping que se repete 9 vezes(maximo de jogadas possiveis)
    for(int round = 0; round < 9; round++){
        //Mostrar jogo da velha e posicoes disponiveis
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                std::cout << velha[i][j];
                if(j < 2) std::cout << "|";
                if(i < 2 && j == 2) std::cout << std::endl << "------" << std::endl;
            }
        }
        std::cout << std::endl;
        //Jogador 1 escolhe X ou O
        char player;
        if(round == 0){
            do{
                std::cout << "Jogador 1, X ou O? ";
                std::cin >> player;
                player = toupper(player);
                //mensagem caso escolha seja diferente de X ou O
                if (player != 'X' && player != 'O'){
                    std::cout << "O jogador deve escolher X ou O" << std::endl;
                }
            }while(player != 'X' && player != 'O');
        }
    
        //mostra se é a vez do jogdor 1 ou 2
        if (round % 2 == 0){
            std::cout << "Vez do jogador 1 '";
        }else{
            std::cout << "Vez do jogador 2 '";
        }
        std::cout << player << "'";
        std::cout << std::endl;

        //Incio da logica para escolha de posicoes
        char posicao;
        bool naomarcada = true;
        while(naomarcada){
            //controle para que posicao seja entre 1 e 9
            do{
                std::cout << "Qual posicao voce escolhe para marcar? 1/9 ";
                std::cin >> posicao;       
            }while(posicao < '1' || posicao > '9');

            //Verificacao das posicoes e mensagem caso posicao tenha X ou O
           int index = posicao - '1';
           int linha = index / 3;
           int coluna = index % 3;

           if(velha[linha][coluna] == 'X' || velha[linha][coluna] == 'O'){
                std::cout << "Posicao ja foi escolhida, escolha outra." << std::endl;
           } else{
                velha[linha][coluna] = player;
                naomarcada = false;
           }
        }
        
        //inicio da logica para verificacao se alguem venceu
        bool venceu = false;
        //verificacao das linhas
        for(int i = 0; i < 3; i++){
            if(velha[i][0] == player && velha[i][1] == player && velha[i][2] == player){
                std::cout << player << " venceu!!"; 
                venceu = true;
            }
        }

        //verificao das colunas
        for(int i = 0; i < 3; i++){
            if(velha[0][i] == player && velha[1][i] == player && velha[2][i] == player){
                std::cout << player << " venceu!!"; 
                venceu = true;
            }
        }

        //verificacao das diagonais
        if(velha[0][0] == player && velha[1][1] == player && velha[2][2] == player){
            std::cout << player << " venceu!!";
            venceu = true;
        }   
        if(velha[0][2] == player && velha[1][1] == player && velha[2][0] == player){
             std::cout << player << " venceu!!";  
             venceu = true;
        }

        if(venceu) break;

        if(player == 'X'){
            player = 'O';
        } else {
            player = 'X';
        }
        std::cout << std::endl;
    }

    std::cout << "Fim do jogo! ";

    return 0;
}