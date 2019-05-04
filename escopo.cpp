#include <iostream>

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
    perfil(); // construtor
    busca(perfil a);
};

class Atributos : perfil{
  int atb1,atb2,atb3,atb4; // valor inteiro de um atributo para definir valores
  public:
    Atributos(perfil a); // recebe como parametro o perfil de um usuario
    
};

// A FUNCAO LE ARQUIVO DEVE ARMAZENAR NOS PERFIS OS DADOS LIDOS DIRETAMENTE DO ARQUIVO, TAMBEM NA CRIAÇÃO DO PERFIL DE QUEM FAZ A BUSCA
// DEVE OBSERVAR QUE OS MESMOS PARAMETROS ESCOLHIDOS PARA OS ATRIBUTOS/CRITERIOS E/OU INTERESSES SERÃO OS MESMOS QUE FORAM CRIADO NO ARQUIVO
// OU TAMBEM CRIAR UMA CLASSE AONDE ESSA SERIA A CLASSE PAI QUE CRIARIA O "BANCO DE DADOS DE USUARIOS" UTILIZANDO A CLASSE FILHA "PERFIL"
// PARA ARMAZENAR OS DEMAIS...
void learquivo(file *arquivo);

void menu(int operacao){
  /* OPCOES DO MENU
  *  CRIAR PERFIL
  *  BUSCAR PERFIL
  *  ATUALIZAR PERFIL
  */
  switch(operacao){
    case 0: // criar
      break;
    case 1: // buscar perfil
      break;
    case 2: // atualizar
      break;
    DEFAULT:
      //OPERACAO INVALIDA? LOOP ?
  }    
}

void display(); // nome do software - COMECLOSER -> "Chega mais" tradução ao pé da letra

int main(){
  return 0;
}

