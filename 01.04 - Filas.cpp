#include<iostream>
#include<queue>

using namespace std;

queue <string> FilaLoja;

void Add();
void TirarPrimeiroCliente();
void limpar_tela();



int main(){

    limpar_tela();

    Add();

    TirarPrimeiroCliente();

    limpar_tela();

}

void Add(){
    int r;
    char Nome[50];
    int i;

     for (i = 0; i < 5; i++)
     {
        cout << "Voce quer adicionar algum cliente?\n";
        cout << "[1]Sim [2]Nao \n";
        scanf("%d", &r);

        if (r == 1)
            {
                cout << "Nome do Cliente: \n";
                scanf("%s", &Nome);
                FilaLoja.push (Nome);
                limpar_tela();
            }else{
                i = 10;
                limpar_tela();
            } 
              
     };
};

void TirarPrimeiroCliente(){
    int r;
    int i;
    cout << "Tem " << FilaLoja.size() << " clientes na fila\n";

     for (i = 0; i < 5; i++)
     {
        cout << "\nO cliente ";
        cout << FilaLoja.front() << " foi atendido?\n";
        cout << "[1]Sim [2]Nao\n";
        scanf("%d", &r);
        
        
         if(FilaLoja.size() != 1) 
         {
            if (r == 1)
            {
                cout << "\nO cliente ";
                cout << FilaLoja.front() << " foi retirado da fila\n";
                FilaLoja.pop();
               
            }else{
                cout << "\nNao foi atendido\n";
            };
         }else{
             i = 100;
             cout << "\nTodos foram atendidos\n";
         };

     };
};
    
void limpar_tela(){
     for(int i = 0; i < 1000; i++){
          printf("\n");
     }
} 

/*
Como usar:
empty
size
pop
push
front
back
*/