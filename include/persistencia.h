#ifndef PERSISTENCIA_H
#define PERSISTENCIA_H

#include "livros.h"
#include "emprestimos.h"
#include "usuarios.h"

extern Livro livros[100];
extern int totalLivros;

void menuRecuperar(Livro livros[], int totalLivros);

void salvarLivros(Livro livros[], int totalLivros);
int carregarLivros(Livro livros[], int totalLivros);

#endif
