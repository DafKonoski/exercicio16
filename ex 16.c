//Solicitar no teclado uma frase com no máximo 40 letras. Se o
//tamanho for maior que 40, dar uma mensagem de entrada inválida e
//solictar novamente, se passar, imprimir a frase na vertical com um
//tempo em cada letra.

#include <stdio.h>

int main() {

  char frase[40];
  int tam;
  
  printf("Digite uma frase:\n");
  gets(frase);

  tam = strlen(frase);

  while(tam > 40){
    printf("Entrada invalida!\nDigite novamente.\n");
    gets(frase);
    tam = strlen(frase);
  }

  for(int i = 0; i < tam; i ++){
    printf("%c\n", frase[i]);
  }
  
}