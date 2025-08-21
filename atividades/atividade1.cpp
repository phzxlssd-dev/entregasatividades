#include <iostream>
#include <string>
#include <vector>
using namespace std;
class book {
public:
string titulo;
string autor;
            int anos;


};
class  user    {
 public:
string nome;
string endereco;
        int idade;
     
};
int main()  {
   book mybook;
   mybook.titulo = "O senhor dos aneis";
   mybook.autor = "J.R.R. Tolkien";
   mybook.anos = 1954;
   
   user userinfo;
        userinfo.nome = "Pedro Henrique Nunes";
        userinfo.endereco = "Rua das Flores, 123";
        userinfo.idade = 23;
        cout << "Livro:" << endl;
    cout << "Título: " << mybook.titulo << endl;
    cout << "Autor: " << mybook.autor << endl;
    cout << "Ano: " << mybook.anos << endl;

    cout << "\nUsuário:" << endl;
    cout << "Nome: " << userinfo.nome << endl;
    cout << "Endereço: " << userinfo.endereco << endl;
    cout << "Idade: " << userinfo.idade << endl;
return 0;

