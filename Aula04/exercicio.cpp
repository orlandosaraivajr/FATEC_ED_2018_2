#include <iostream>
#include <stdlib.h>

#define MAXIMO 10

using namespace std;


int main(int argc, char *argv[]){

    int x;

    struct Pessoa {
        string nome;
        string sobrenome;
        float nota_1;
        float nota_2;
    };
    
    Pessoa *cadastro_pessoa;
    
    cadastro_pessoa = (Pessoa*) malloc(MAXIMO * sizeof(Pessoa));
    
    for(x = 0; x < MAXIMO; x++) {
        cadastro_pessoa[x].nome = "Orlando";
        cadastro_pessoa[x].sobrenome  = "Saraiva";
    }


    cout << "\n ********************** \n";
    
    /* Imprimir resultados  */
    for(x = 0; x < MAXIMO; x++) {
        cout << cadastro_pessoa[x].nome << "  ";
        cout << cadastro_pessoa[x].sobrenome  << endl;
    }
    cout << "\n ********************** \n";

    delete cadastro_pessoa;
    return 0;
}
