class Book:
    def __init__(self, titulo, author, ano):
        self.titulo = titulo
        self.author = author
        self.ano = ano

    def __str__(self):
        return f'"{self.titulo}" por {self.author} ({self.ano})'


class User:
    def __init__(self, nome, endereco, idade, livros_alugados=None):
        self.nome = nome
        self.endereco = endereco
        self.idade = idade
        self.livros_alugados = livros_alugados if livros_alugados else []

    def __str__(self):
        livros = ', '.join(str(livro) for livro in self.livros_alugados) if self.livros_alugados else "Nenhum livro alugado"
        return f'Nome: {self.nome}\nEndereço: {self.endereco}\nIdade: {self.idade}\nLivros alugados: {livros}'



p1 = Book("Planeta dos Macacos", "Pierre Boulle", 1968)


usuario1 = User("João da Silva", "Rua A, 123", 30, [p1])


print(usuario1)
