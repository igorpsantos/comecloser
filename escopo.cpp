#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class perfil{

    string nome;
    string email; // validacao para criacao de perfil a partir do email da faculdade
    char genero;
    int idade;
    string local; // curitiba
    string curso;
    string atributo1; // o que gosta de fazer
    string atributo2; // se gosta de sair ou ficar em casa
    string atributo3; // se gosta de animais ou não
    string atributo4; // amizade / relacionamento serio
    public:
    perfil(string nome, string email, char genero, int idade, string local, string curso, string atributo1, string atributo2, string atributo3, string atributo4){ // construtor

        this->nome = nome;
        this->email = email;
        this->genero = genero;
        this->idade = idade;
        this->local = local;
        this->curso = curso;
        this->atributo1 = atributo1;
        this->atributo2 = atributo2;
        this->atributo3 = atributo3;
        this->atributo4 = atributo4;

    }

    string getAttribute1(){return this->atributo1;}
    string getAttribute2(){return this->atributo2;}
    string getAttribute3(){return this->atributo3;}
    string getAttribute4(){return this->atributo4;}

    void mostra(){

        cout << "USUARIO\n* Nome: " << nome << "\n* E-mail: " << email << "\n* Sexo: " << genero << "\n* Idade: " << idade << "\n* Localizacao: " << local << "\n* Curso: " <<
        curso << "\n* Coisas que gosto (interesses): \n*" << atributo1 << "\n*" << atributo2 << "\n*" << atributo3 << "\n*" << atributo4 << "\n" << endl;

    }

    busca(perfil a);

};

class Atributos : perfil{

    const int atb1 = 1;
    const int atb2 = 2;
    const int atb3 = 3;
    const int atb4 = 4;

    public:
    Atributos(perfil a); // recebe como parametro o perfil de um usuario

};

// A FUNCAO LE ARQUIVO DEVE ARMAZENAR NOS PERFIS OS DADOS LIDOS DIRETAMENTE DO ARQUIVO, TAMBEM NA CRIAÇÃO DO PERFIL DE QUEM FAZ A BUSCA
// DEVE OBSERVAR QUE OS MESMOS PARAMETROS ESCOLHIDOS PARA OS ATRIBUTOS/CRITERIOS E/OU INTERESSES SERÃO OS MESMOS QUE FORAM CRIADO NO ARQUIVO
// OU TAMBEM CRIAR UMA CLASSE AONDE ESSA SERIA A CLASSE PAI QUE CRIARIA O "BANCO DE DADOS DE USUARIOS" UTILIZANDO A CLASSE FILHA "PERFIL"
// PARA ARMAZENAR OS DEMAIS...
/*void learquivo(file *arquivo);
*/
int menu(int operacao){
    /* OPCOES DO MENU
    *  CRIAR PERFIL
    *  BUSCAR PERFIL
    *  ATUALIZAR PERFIL
    */
  switch(operacao){
    case 0: // criar
        // AO CRIAR NA TELA O PERFIL DO USUARIO QUE IRA BUSCAR OS OUTROS PERFIS, E NECESSARIO APARECER OS ATRIBUTOS QUE DEVERAM SER ESCOLHIDOS A PARTIR DE NUMEROS DE UM CONSOLE
        // POR EXEMPLO ATRIBUTO 1 - RELACIONAMENTO - AMIZADE, NAMORO, OUTROS
        return operacao;
      break;
    case 1: // buscar perfil
      break;
    case 2: // atualizar
      break;

      //OPERACAO INVALIDA? LOOP ?
  }

}

void display(); // nome do software - COMECLOSER -> "Chega mais" tradução ao pé da letra

int main(){
    int op;
    cout << "MENU\n\n\n" << endl;
    cout << "0 - CRIAR PERFIL\n\n\n" << "1 - BUSCAR PERFILS (MATCH)\n\n\n" << "2 - ATUALIZAR PERFIL\n\n\n" << "PRESSIONE QUALQUER TECLA PARA SAIR" << endl;
    cin >> op;


    switch(menu(op)){
        case 0:

            string nome;
            string email; // validacao para criacao de perfil a partir do email da faculdade
            char genero;
            int idade;
            string local; // curitiba
            string curso;
            string atributo1; // o que gosta de fazer
            string atributo2; // se gosta de sair ou ficar em casa
            string atributo3; // se gosta de animais ou não
            string atributo4; // amizade / relacionamento serio

            cout << "Digite seu nome: " << endl;
            cin >> nome;
            cout << "Digite seu e-mail: " << endl;
            cin >> email;
            cout << "Sexo: " << endl;
            cin >> genero;
            cout << "Sua idade: " << endl;
            cin >> idade;
            cout << "Sua Localizacao: " << endl;
            cin >> local;
            cout << "O que está cursando? " << endl;
            cin >> curso;
            cout << "ESCOLHA 4 CARACTERISTICAS QUE VOCE SE IDENTIFICA CONFORME OS NUMEROS INDICADOS: \n" << endl;
            cout << "1 - Esportes\n" << "2 - Sair\n" << "3 - Cinema\n" << "4 - Netflix\n" << "5 - Beber\n" << "6 - Viajar\n" << "7 - Ler\n" << "8 - Jogos\n" << "9 - Socializar\n" << "10 -Ficar em casa\n"
            << "11 - Pets\n" << endl;

            cout << "ESCOLHE OS 4 ATRIBUTOS\n";
            cin >> atributo1 >> atributo2 >> atributo3 >> atributo4;

            perfil teste(nome, email, genero, idade, local, curso, atributo1, atributo2, atributo3, atributo4);
            teste.mostra();
            break;
    }

    return 0;
}

