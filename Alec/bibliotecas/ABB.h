#ifndef ABB_H
  #define ABB_H

  typedef struct abb_ ABB;

  #define ERRO 1000010
  #define NA 0
  #define ESQ 1
  #define DIR 2

  ABB *abb_criar(void);
  void abb_apagar(ABB **arvore);
  bool abb_inserir(ABB *arvore, int elemento);
  int abb_remover(ABB *arvore);
  void abb_imprimir(ABB *arvore, bool ordenada);
  int abb_busca(ABB *arvore, int chave);

#endif