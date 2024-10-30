#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc > 1) {
    printf("A mensagem a ser codificada eh: %s\n", argv[1]);
    char letter = argv[1][0];
    printf("Letra a ser codificada: %c (%d)\n", letter, letter);
    char mask = 0b00000011;
    mask = mask >> 4;
    printf("Mask = %c (%d)\n", mask, mask);
  } else {
    puts("Uso incorreto.");
    printf("Digite: %s \"sua mensagem\"\n", argv[0]);
  }
  return 0;
}

// ./encoder "sua mensagem" "path to png"
// argv[0]      argv[1]        argv[2]

// argc é o número de argumentos passados para o programa, incluindo o nome do programa.
// argv é um vetor de strings que contém os argumentos passados para o programa.