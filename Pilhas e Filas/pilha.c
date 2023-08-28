#include <stdio.h>
#include <stdlib.h>

typedef struct Pilha
{
  int stack[100];
  int top;
}Pilha;

void estaVazia(Pilha* s){
  if(s->top == -1){
    printf("pilha vazia\n");
  }else{
    printf("pilha não vazia\n");
  }
}
void esvaziaPilha(Pilha* s){
  s->top = -1;
}
int consultaPilha(Pilha *s)
{
  if (s->top == -1)
  {
    printf("A pilha está vazia.\n");
    return -1;
  }
  else
  {
    return s->stack[s->top];
  }
}
void empilha(Pilha* s, int item){
  s->top++;
  s->stack[s->top] = item;
}
int desempilha(Pilha* s){
  int item = s->stack[s->top];
  s->top--;
  return item;
}
int main () {
  Pilha stack;
  int i;

  stack.top = -1;

  printf("empilha\n");

  empilha(&stack, 10);
  empilha(&stack, 20);
  empilha(&stack, 30);
  empilha(&stack, 40);

  for (i = 0; i <= stack.top; i++)
  {
    printf("%d\n", stack.stack[i]);
  }

  printf("desempilha\n");

  desempilha(&stack);

  for (i = 0; i <= stack.top; i++)
  {
    printf("%d\n", stack.stack[i]);
  }

  printf("consultar o ultimo elemento da pilha\n");
  int elemento = consultaPilha(&stack);
  printf("%d\n", elemento);

  estaVazia(&stack);

  esvaziaPilha(&stack);

  estaVazia(&stack);

  return 0;
}