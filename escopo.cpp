#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>

using namespace std;

class Profile{

    string name;
    string email; // validacao para criacao de perfil a partir do email da faculdade
    char gender;
    int age;
    string location; // curitiba
    string school;
    string attribute1; // o que gosta de fazer
    string attribute2; // se gosta de sair ou ficar em casa
    string attribute3; // se gosta de animais ou não
    string attribute4; // amizade / relacionamento serio
    public:
    Profile(string name, string email, char gender, int age, string location, string school, string attribute1, string attribute2, string attribute3, string attribute4){ // construtor

        this->name = name;
        this->email = email;
        this->gender = gender;
        this->age = age;
        this->location = location;
        this->school = school;
        this->attribute1 = attribute1;
        this->attribute2 = attribute2;
        this->attribute3 = attribute3;
        this->attribute4 = attribute4;

    }

    string getAttribute1(){return this->attribute1;}
    string getAttribute2(){return this->attribute2;}
    string getAttribute3(){return this->attribute3;}
    string getAttribute4(){return this->attribute4;}

    void displayProfile(){

        cout << "USUARIO\n* Nome: " << name << "\n* E-mail: " << email << "\n* Sexo: " << gender << "\n* Idade: " << age << "\n* Localizacao: " << location << "\n* Curso: " <<
        school << "\n* Coisas que gosto (interesses): \n*" << attribute1 << "\n*" << attribute2 << "\n*" << attribute3 << "\n*" << attribute4 << "\n" << endl;

    }

    searchProfile(Profile a);

};

class Attribute : Profile{ // NAO SEI SE É NECESSARIO A CLASSE ATTRIBUTE SER FILHO DA CLASSE PROFILE, ESSA CLASSE É APENAS PARA DEFINIR OS VALORES DAS VARIAVEIS

    int attributeValue1 = 1;
    int attributeValue2 = 2;
    int attributeValue3 = 3;
    int attributeValue4 = 4;

    public:
    Attribute(Profile a); // recebe como parametro o perfil de um usuario

};

// A FUNCAO LE ARQUIVO DEVE ARMAZENAR NOS PERFIS OS DADOS LIDOS DIRETAMENTE DO ARQUIVO, TAMBEM NA CRIAÇÃO DO PERFIL DE QUEM FAZ A BUSCA
// DEVE OBSERVAR QUE OS MESMOS PARAMETROS ESCOLHIDOS PARA OS ATRIBUTOS/CRITERIOS E/OU INTERESSES SERÃO OS MESMOS QUE FORAM CRIADO NO ARQUIVO
// OU TAMBEM CRIAR UMA CLASSE AONDE ESSA SERIA A CLASSE PAI QUE CRIARIA O "BANCO DE DADOS DE USUARIOS" UTILIZANDO A CLASSE FILHA "PERFIL"
// PARA ARMAZENAR OS DEMAIS...
/*void learquivo(file *arquivo);
*/
int menu(int value){
    /* OPCOES DO MENU
    *  CRIAR PERFIL
    *  BUSCAR PERFIL
    *  ATUALIZAR PERFIL
    */
  switch(value){
    case 0: // criar
        // AO CRIAR NA TELA O PERFIL DO USUARIO QUE IRA BUSCAR OS OUTROS PERFIS, E NECESSARIO APARECER OS ATRIBUTOS QUE DEVERAM SER ESCOLHIDOS A PARTIR DE NUMEROS DE UM CONSOLE
        // POR EXEMPLO ATRIBUTO 1 - RELACIONAMENTO - AMIZADE, NAMORO, OUTROS
        return value;
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
    cout << "MENU\n" << endl;
    cout << "0 - CRIAR PERFIL\n\n\n" << "1 - BUSCAR PERFILS (MATCH)\n\n\n" << "2 - ATUALIZAR PERFIL\n\n\n" << "PRESSIONE QUALQUER TECLA PARA SAIR" << endl;
    cin >> op;

    switch(menu(op)){
        case 0:

            string name;
            string email; // validacao para criacao de perfil a partir do email da faculdade
            char gender;
            int age;
            string location; // curitiba
            string school;
            int attribute1; // o que gosta de fazer
            int attribute2; // se gosta de sair ou ficar em casa
            int attribute3; // se gosta de animais ou não
            int attribute4; // amizade / relacionamento serio

            cout << "Digite seu nome: " << endl;
            cin.ignore(); // limpa o caracter de nova linha \n do buffer de entrada ou teclas indesejadas
            getline(cin, name); // lê o dado até que uma nova linha seja detectada
            cout << "Digite seu e-mail: " << endl;
            cin.ignore();
            getline(cin, email);
            cout << "Sexo: " << endl;
            cin >> gender;
            cout << "Sua idade: " << endl;
            cin >> age;
            cout << "Sua Localizacao: " << endl;
            cin.ignore();
            getline(cin, location);
            cout << "O que esta cursando " << endl;
            cin.ignore();
            getline(cin, school);

            cout << "ESCOLHA 4 CARACTERISTICAS QUE VOCE SE IDENTIFICA CONFORME OS NUMEROS INDICADOS: \n" << endl;
            cout << "1 - Esportes\n" << "2 - Sair\n" << "3 - Cinema\n" << "4 - Netflix\n" << "5 - Beber\n" << "6 - Viajar\n" << "7 - Ler\n" << "8 - Jogos\n" << "9 - Fazer Amizades\n" << "10 -Ficar em casa\n"
            << "11 - Pets\n" << endl;

            string attributeToChoose[] = {"Esportes", "Sair", "Cinema", "Netflix", "Beber", "Viajar", "Ler", "Jogos", "Fazer Amizades", "Ficar em casa", "Pets", "\0"};


            cout << "Escolha a primeira caracteristica: " << endl;
            cin >> attribute1;
            cout << "Escolha a segunda caracteristica: " << endl;
            cin >> attribute2;
            cout << "Escolha a terceira caracteristica: " << endl;
            cin >> attribute3;
            cout << "Escolha a quarta caracteristica: " << endl;
            cin >> attribute4;

            Profile user(name, email, gender, age, location, school, attributeToChoose[attribute1 - 1], attributeToChoose[attribute2 - 1], attributeToChoose[attribute3 - 1], attributeToChoose[attribute4 - 1]);
            user.displayProfile();
            break;

    }

    return 0;
}

