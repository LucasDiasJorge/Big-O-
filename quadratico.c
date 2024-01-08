void imprimePares(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("(%d, %d)\n", arr[i], arr[j]);
        }
    }
}
