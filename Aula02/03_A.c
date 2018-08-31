/*
Terceiro programa em C++
Cadastro de aluno

Prof. Me. Orlando Saraiva Jr
*/
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

string recebe_nome_aluno();
string recebe_disciplina_aluno();
float recebe_nota_1();
float recebe_nota_2();

int main(int argc, char *argv[]){
    struct cadastro {
        string nome;
        string disciplina;
        float nota_1;
        float nota_2;
        string tipo_sanguineo;
    };

    struct cadastro variavel_aluno;

    variavel_aluno.nome = "Orlando Saraiva";
    variavel_aluno.disciplina = "A melhor de sábado";
    variavel_aluno.nota_1 = 7.4;
    variavel_aluno.nota_2 = 5.2;
    variavel_aluno.tipo_sanguineo = "O+";

    cout << "Nome = " << variavel_aluno.nome << endl;
    cout << "Disciplina = " << variavel_aluno.disciplina << endl;
    cout << "Nota 1 = " << variavel_aluno.nota_1 << endl;
    cout << "Nota 2 = " << variavel_aluno.nota_2 << endl;
    cout << "Tipo Sanguineo = " << variavel_aluno.tipo_sanguineo << endl;
    cout << "Média Simples = " << (variavel_aluno.nota_1 + variavel_aluno.nota_2) / 2 << endl;
    return 0;
}

string recebe_nome_aluno() {
    string nome_recebido;
    cout << "Digite o nome do aluno: ";
    cin >> nome_recebido;
    return nome_recebido;
}

string recebe_disciplina_aluno() {
    string disciplina;
    cout << "Digite a disciplina cursada: ";
    cin >> disciplina;
    return disciplina;
}

float recebe_nota_1() {
    string nota;
    float nota_1;
    cout << "Digite a nota do aluno: ";
    cin >> nota;
    nota_1 = strtof((nota).c_str(),0); // string to float
    return nota_1;
}

float recebe_nota_2() {
    string nota;
    float nota_2;
    cout << "Digite a nota do aluno: ";
    cin >> nota;
    nota_2 = strtof((nota).c_str(),0); // string to float
    return nota_2;
}
