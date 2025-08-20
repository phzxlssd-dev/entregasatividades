#include <iostream>
#include <vector>
#include <string>

class Book {
public:
    std::string title;
    std::string author;
    int year;

    Book(std::string t, std::string a, int y)
        : title(t), author(a), year(y) {}
    
    void print() {
        std::cout << title << " (" << year << "), por " << author << std::endl;
    }
};

class User {
public:
    std::string nome;
    std::string endereco;
    int idade;
    std::vector<Book> livros_alugados;

    User(std::string n, std::string e, int i, std::vector<Book> livros)
        : nome(n), endereco(e), idade(i), livros_alugados(livros) {}

    void print() {
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Endereço: " << endereco << std::endl;
        std::cout << "Idade: " << idade << std::endl;
        std::cout << "Livros alugados:" << std::endl;
        if (livros_alugados.empty()) {
            std::cout << "  Nenhum" << std::endl;
        } else {
            for (auto &livro : livros_alugados) {
                std::cout << "  - ";
                livro.print();
            }
        }
        std::cout << std::endl;
    }
};

int main() {
    // Criando alguns livros
    Book livro1("Dom Casmurro", "Machado de Assis", 1899);
    Book livro2("O Senhor dos Anéis", "J. R. R. Tolkien", 1954);

    // Criando usuários
    User usuario1("Ana Silva", "Rua A, 123", 25, {livro1});
    User usuario2("Carlos Souza", "Av. B, 456", 30, {livro1, livro2});

    // Imprimindo atributos dos usuários
    std::cout << "Usuário 1:" << std::endl;
    usuario1.print();

    std::cout << "Usuário 2:" << std::endl;
    usuario2.print();

    return 0;
}
