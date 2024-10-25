#include <stdio.h>

int main() {
    int N;

    // Input bilangan N
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    // Mengecek apakah N > 50
    if (N > 50) {
        N = N - 25;
    } else {
        N = N + 10;
    }

    // Menampilkan hasil N
    printf("Nilai N setelah diproses: %d\n", N);

    return 0;
}
