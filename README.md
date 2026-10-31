# Sistema de Gerenciamento de Biblioteca

Sistema de linha de comando em C para gerenciar o acervo de uma biblioteca e os empréstimos feitos a usuários. O projeto aplica os conceitos de algoritmos e programação vistos na disciplina: persistência de dados em arquivos, operações de busca e ordenação, e geração de relatórios.

## Funcionalidades

- **Livros**: cadastrar, listar, buscar (por código ou parte do título), atualizar e remover.
- **Usuários**: cadastrar, listar, buscar, atualizar dados, remover e consultar livros emprestados.
- **Empréstimos**: realizar empréstimo (prazo de 14 dias), registrar devolução, listar todos e listar atrasados.
- **Relatórios** (exibidos na tela e salvos em arquivo): acervo disponível, livros mais emprestados (ordenados por seleção), usuários em atraso e histórico de um usuário.
- **Persistência**: salvar e carregar o acervo de livros em arquivo de texto.

## Estrutura do projeto

```
.
├── src/
│   ├── main.c            # ponto de entrada
│   ├── menu.c            # menu principal
│   ├── livros.c          # CRUD e buscas de livros
│   ├── usuarios.c        # CRUD de usuários
│   ├── emprestimos.c     # empréstimos, devoluções e controle de atraso
│   ├── relatorios.c      # relatórios e ordenação
│   └── persistencia.c    # salvar e carregar livros
├── include/              # um .h para cada módulo
├── data/                 # arquivos de dados gerados (não versionados)
├── reports/              # relatórios gerados (não versionados)
├── Makefile
├── LICENSE
└── README.md
```

## Como compilar

Requisito: compilador `gcc` (no Windows, MinGW-w64).

**Com Make:**

```bash
make
```

**Direto com gcc:**

```bash
gcc -Wall -Wextra -g -Iinclude src/*.c -o biblioteca
```

No VS Code, a tarefa de build padrão (`Ctrl+Shift+B`) compila o projeto e gera `biblioteca.exe` na raiz.

## Como executar

Execute sempre a partir da raiz do projeto, pois os caminhos de `data/` e `reports/` são relativos a ela:

```bash
./biblioteca        # Linux / macOS
biblioteca.exe      # Windows
```

Se as pastas `data/` e `reports/` não existirem, crie-as antes:

```bash
mkdir -p data reports
```

## Arquivos gerados

|                Arquivo                |             Conteúdo              |
|---------------------------------------|-----------------------------------|
| `data/livros.txt`                     | acervo de livros                  |
| `data/usuario.txt`                    | usuários cadastrados              |
| `reports/acervo_disponivel.txt`       | livros com exemplares disponíveis |
| `reports/livros_mais_emprestados.txt` | ranking de empréstimos por livro  |
| `reports/usuarios_atrasados.txt`      | matrículas com devolução em atraso|
| `reports/historico_usuario.txt`       | livros emprestados a um usuário   |

## Limitações conhecidas

- Os empréstimos ficam apenas em memória e são perdidos ao encerrar o programa.
- O acervo comporta até 100 livros e 1000 empréstimos.

## Licença

Distribuído sob a licença descrita em [LICENSE](LICENSE).