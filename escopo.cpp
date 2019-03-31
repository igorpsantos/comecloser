#include <iostream>

using namespace std;

class perfil{
  int idPerfil;
  string nome;
  string email; // validacao para criacao de perfil a partir do email da faculdade
  char genero;
  int idade;
  string local;
  string cinema;
  string musica;
  string hobbies;
  string curso;
  public:
    perfil(); // construtor
    mostra_perfil();
    edita_perfil();
    exclui_perfil();
    
};

class atributos{
  int atb1,atb2,atb3,atb4,atb5,atb6;
  public:
    atributos(perfil a); // recebe como parametro o perfil de um usuario
    int getAproximacaoUsuario();
    void imprime_relatorio(int idperfil);
};

void learquivo(file *arquivo);
void menu();
void display();

int main(){
  return 0;
}

