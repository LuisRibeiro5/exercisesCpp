#include<iostream>
#include<vector>
int main(){
    std::vector<std::vector<char>> matrix(3, std::vector<char>(3,0));
    int value = 1;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matrix[i][j] = '0' + value;
            value++;
        }
    }

    int k;
    for(k = 0; k < 9; k++){
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
           std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
        
        for(int i = 0; i < 3; i++){
            if (matrix[i][0] && matrix[i][1] && matrix[i][2] || matrix[0][i] && matrix[1][i] && matrix[2][i])
            {
                /* code */
            }
            
        }
        
        char posicao;
        if(k % 2 == 0){
            std::cout << "Vez do bolinha 'O'";
            std::cout << "Escolha qual posicao deseja marcar:";
        }else {
            std::cout << "Vez do xis 'X'";
            std::cout << "Escolha qual posicao deseja marcar:";
        }
        
        bool marcado = true;
        while(marcado){	
            std::cin.get(posicao);    

            if (k % 2 == 0){
                for(int i = 0; i < 3; i++){
                    for(int j = 0; j < 3; j++){
                        if(posicao == 'X' || posicao == 'O'){
                            std::cout << "Posicao ja esta marcada, marque outra";
                            marcado = true;
                            break;
                        }else if(matrix[i][j] == posicao){
                            matrix[i][j] = 'O';
                            marcado = false;
                            break;
                        }
                    }
                }
            } else {
                for(int i = 0; i < 3; i++){
                    for(int j = 0; j < 3; j++){
                        if(posicao == 'X' || posicao == 'O'){
                            std::cout << "Posicao ja esta marcada, marque outra";
                            marcado = true;
                            break;
                        }else if(matrix[i][j] == posicao){
                            matrix[i][j] = 'X';
                            marcado = false;
                            break;
                        }
                    }
                }
            }   
        }
    }
}