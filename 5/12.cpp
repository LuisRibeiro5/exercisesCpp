#include<iostream>
#include<vector>
#include<iomanip>
int main(){
    std::vector<std::vector<float>> matrix(42, std::vector<float>(2));
    int n;
    do{
        std::cout << "Digite o numero de turistas: ";
        std::cin >> n;
    }while(n > 300 || n < 1);

    for(int i = 0; i < n; i++){
        int praia;
        do
        {
            std::cout << "Digite qual praia voce prefere, 1 ate 42: ";
        std::cin >> praia;
        } while (praia > 42 || praia < 1);
        
        matrix[praia - 1][0]++;

        float salario;
        do
        {
            std::cout << "Digite seu salario: ";
            std::cin >> salario;
        } while (salario < 1);
        
        matrix[praia - 1][1] += salario;
    }

    for(int i = 0; i < 42; i++){
        if(matrix[i][0] > 0){
            std::cout << "Praia " << i + 1 << " pessoas: " << matrix[i][0] << ", Media salario: " << matrix[i][1]/matrix[i][0] << "R$" << std::endl; 
            std::cout << std::setw(10) << i
                      << std::setw(20) << matrix[i][0]
                      << std::fixed << std::setprecision(2)
                      << std::setw(20) << matrix[i][1]/matrix[i][0] << std::endl;
        }
    }
}