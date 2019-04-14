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
  int atb1,atb2,atb3,atb4;
  public:
    Atributos(perfil a); // recebe como parametro o perfil de um usuario
    
};

void learquivo(file *arquivo);
void menu();
void display();

int main(){
  return 0;
}

