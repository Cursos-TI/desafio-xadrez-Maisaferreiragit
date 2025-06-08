int main() {

    
    // Número de casas para cada movimento
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    // Simulação do movimento da TORRE
    // Utilizando estrutura de repetição: for
    
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Simulação do movimento do BISPO
    // Utilizando estrutura de repetição: while
    
    printf("Movimento do Bispo (5 casas na Diagonal para Cima Direita):\n");
    int i = 1;
    while (i <= movimentoBispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // Simulação do movimento da RAINHA
    // Utilizando estrutura de repetição: do-while

    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= movimentoRainha);
    printf("\n");

    return 0;
}
