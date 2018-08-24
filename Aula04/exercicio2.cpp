#include <iostream>

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

    struct Turma {
        struct Pessoa aluno[MAXIMO];
    };

    
    Turma *cadastro_pessoa;
    
    cadastro_pessoa = new Turma;
    
    for(x = 0; x < MAXIMO; x++) {
        cadastro_pessoa->aluno[x].nome = "Orlando";
        cadastro_pessoa->aluno[x].sobrenome  = "Saraiva";
    }


    cout << "\n ********************** \n";
    
    /* Imprimir resultados  */
    for(x = 0; x < MAXIMO; x++) {
        cout << cadastro_pessoa->aluno[x].nome << "  ";
        cout << cadastro_pessoa->aluno[x].sobrenome  << endl;
    }
    cout << "\n ********************** \n";

    delete cadastro_pessoa;
    return 0;
}
