class Book:
    def __init__(self, titulo:str, author:str, ano:int):
        self.titulo = titulo
        self.author = author
        self.ano = ano
        p1=(p1)
class User:
    def __init__(self, nome:str, endereco:str, idade:int ):
        self.nome = nome
        self.endereco = endereco
        self.idade = idade
        self.livros_alugados =[]

    def __alugar_livro(self, livro:Book):
        self . livros_alugados.append(livro)
 
    def __remover_livro(self, livro:Book):
        self.livros_alugados.remove(livro)

    def __imprimir_livros(self):
        for livro in self.livros_alugados:
            print(livro.titulo)
livro1= Book("planet of monkeys","pierre",1968)
livro2= Book("castle inter","golber",2022)

user1= User("pateta","rua das rosas",22)
user2= User("bobo","rua das carlas",21)
user1.alugar_livro(livro1)
user2.alugar_livro(livro2)
user1.imprimir_livros(livro1)
user2.imprimir_livros(livro2)
