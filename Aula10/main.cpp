/*
 * Atividade 2 - TODO List.
 * Feito em sala de aula - ESTÁ INCOMPLETO !!!!
 *
 * Prof. Me. Orlando Saraiva Jr
 * Criado em : 27/10/2018
 */
#include <iostream>

using namespace std;


using namespace std;

typedef struct NO {
   int id;
   string tarefa;
   string hora;
   string dia;
   struct NO* prox;
}*LISTA;

static LISTA cabeca = NULL;
static LISTA rabo = NULL;
static LISTA temp = NULL;

bool esta_vazio(){
    return cabeca == NULL;
}
/*
Função para inserir no início da lista
*/
void inserir_no_comeco(int id, string tarefa, string hora, string dia){
    temp = new NO;
    temp->id = id;
   	temp->tarefa = tarefa;
   	temp->hora = hora;
   	temp->dia = dia;
    if(esta_vazio()){
        temp->prox = NULL;
        rabo = temp;
    } else {
        temp->prox = cabeca;
    }
    cabeca = temp;
}
/*
Inserir no final da lista
*/
void inserir_no_final(int id, string tarefa, string hora, string dia){
    temp = new NO;
    temp->id = id;
   	temp->tarefa = tarefa;
   	temp->hora = hora;
   	temp->dia = dia;
    temp->prox = NULL;
    if(esta_vazio()){
        cabeca = temp;
    } else {
        rabo->prox = temp;
    }
    rabo = temp;
}
/*
void inserir_na_posicao(int posicao, int valor){
    LISTA temp2;
    int x = posicao ;
    if(esta_vazio()){
        cout << "Lista vazia " << endl;
    } else {
        if(posicao == 0) {
            inserir(valor);
        }
        temp = head;
        x--;
        while (temp->prox != NULL && x != 0) {
            x--;
            temp = temp->prox;

        }
        //cout << temp->valor << endl<< endl;
        if(temp->prox != NULL) {
            temp2 = new NO;
            temp2->valor = valor;
            temp2->prox = temp->prox;
            temp->prox = temp2;
        }
    }
}
void remover(int x){
    temp = head;
    NO *prev;
    while(temp->prox != NULL && temp->valor != x){
        prev = temp;
        temp = temp->prox;
    }
    if(temp->valor == x) {
        prev->prox = temp->prox;
        delete temp;
    }
    else if(temp->prox == NULL)
    {
        cout << "Valor " << x << " nao encontrado para ser removido." << endl;
    }
}
void encontrar(int x){
    int i=1;
    temp = head;
    while (temp->prox != NULL && temp->valor != x) {
        temp = temp->prox;
        i++;
    }
    if(temp->valor == x)
    {
        cout << "Encontrado na posicao:" << i << endl;
    }
    else if(temp->prox == NULL)
    {
        cout << "Nenhum valor encontrado..." << endl;
    }
}
*/
void mostrar(){
    if(!esta_vazio()) {
        for(temp = cabeca; temp != NULL; temp=temp->prox){
            cout << temp->tarefa << " ";
        }
        cout << endl;
    } else {
        cout << "Lista vazia !" << endl;
    }
}

void limpar_memorias(){
    LISTA thanos;
    delete temp;
    delete rabo;
    while (cabeca->prox != NULL) {
        thanos = cabeca;
        cabeca = cabeca->prox;
        cout << thanos->tarefa << " -- " << cabeca->tarefa << endl<< endl;
        thanos->prox = NULL;
        delete thanos;
    }
}

int main(){
	int id;
    string tarefa;
    string hora;
    string dia;
    mostrar();

    cout << "Digite o id" << endl;
	cin >> id;
	cout << "Digite a tarefa" << endl;
	cin >> tarefa;
	cout << "Digite a hora" << endl;
	cin >> hora;
	cout << "Digite o dia" << endl;
	cin >> dia;
    inserir_no_comeco(id,tarefa,hora,dia);
    mostrar();
    cout << "Digite o id" << endl;
	cin >> id;
	cout << "Digite a tarefa" << endl;
	cin >> tarefa;
	cout << "Digite a hora" << endl;
	cin >> hora;
	cout << "Digite o dia" << endl;
	cin >> dia;
    inserir_no_comeco(id,tarefa,hora,dia);
    mostrar();
    inserir_no_final(id,tarefa,hora,dia);
	mostrar();
/*
    inserir_na_posicao(9, 99);
    inserir_na_posicao(4, 77);
    sinserir_na_posicao(1, 66);
    mostrar();
    inserir_na_posicao(1, 88);
    mostrar();
    inserir_na_posicao(3, 77);
    mostrar();
    /*
    inserir(15);
    mostrar();
    inserir(25);
    mostrar();
    inserir(35);
    mostrar();
    inserir(45);
    mostrar();
    encontrar(15);
    remover(25);
    mostrar();
    remover(22);
    mostrar();
    inserir_na_posicao(2, 66);
    mostrar();
    inserir_no_final(55);

    inserir_no_final(65);*/
    mostrar();
    limpar_memorias();
}
