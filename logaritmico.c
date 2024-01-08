int buscaBinaria(int arr[], int tamanho, int chave) {
    int inicio = 0, fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (arr[meio] == chave) {
            return meio;  // Encontrou a chave
        }

        if (arr[meio] < chave) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1;  // Chave não encontrada
}
