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
     vector<book> livros;
   book mybook;
   mybook.titulo = "O senhor dos aneis";
   mybook.autor = "J.R.R. Tolkien";
   mybook.anos = 1954;
  livros.push_back(mybook);
  book mybook2;
  mybook2.titulo="Castelo Interior ou Moradas";
    mybook2.autor="Sta. Tereza D'vila";
    mybook2.anos= 1899;

   
   vector<user> usuarios;
   user userinfo;
        userinfo.nome = "Pedro Henrique Nunes";
        userinfo.endereco = "Rua das Flores, 123";
        userinfo.idade = 23;
        usuarios.push_back(userinfo);  
        user user2;
        user2.nome= "sarah stse";
        user2.endereco= "rua dos loucos";
        user2.idade=23;


        cout << "Livros:" << endl;
        for (int i=0;i<livros.size();i++){
    cout << "Título: " << livros[i].titulo << endl;
    cout << "Autor: " << livros[i].autor << endl;
    cout << "Ano: " << livros[i].anos << endl;
        }
        for(int i=0;i>usuarios.size();i++){

    cout << "\nUsuário:" << endl;
    cout << "Nome: " << usuarios[i].nome << endl;
    cout << "Endereço: " << usuarios[i].endereco << endl;
    cout << "Idade: " << usuarios[i].idade << endl;
    
        }
        
        return 0;
}



