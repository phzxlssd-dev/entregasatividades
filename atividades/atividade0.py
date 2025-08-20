class Book:
    def __init__(self, title: str, author: str, year: int):
        self.title = title
        self.author = author
        self.year = year

        
def __str__(self):
        return f"{self.title} ({self.year}), por {self.author}"


class User:
    def __init__(self, nome: str, endereco: str, idade: int, livros_alugados=None):
        self.nome = nome
        self.endereco = endereco
        self.idade = idade
        self.livros_alugados = livros_alugados if livros_alugados else []

    def __str__(self):
        livros = ", ".join(str(l) for l in self.livros_alugados) if self.livros_alugados else "Nenhum"
        return (
            f"Nome: {self.nome}\n"
            f"Endereço: {self.endereco}\n"
            f"Idade: {self.idade}\n"
            f"Livros alugados: {livros}"
        )


# Criando alguns livros
livro1 = Book("Dom Casmurro", "Machado de Assis", 1899)
livro2 = Book("O Senhor dos Anéis", "J. R. R. Tolkien", 1954)

# Criando dois usuários
usuario1 = User("Ana Silva", "Rua A, 123", 25, [livro1])
usuario2 = User("Carlos Souza", "Av. B, 456", 30, [livro1, livro2])

# Imprimindo os atributos
print("Usuário 1:")
print(usuario1)
print("\nUsuário 2:")
print(usuario2)
