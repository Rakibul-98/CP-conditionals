// https://atcoder.jp/contests/abc304/tasks/abc304_b?lang=en

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    
    if (N < 1000) {
        printf("%d\n", N);
    } else if (N < 10000) {
        printf("%d\n", N - (N % 10));
    } else if (N < 100000) {
        printf("%d\n", N - (N % 100));
    } else if (N < 1000000) {
        printf("%d\n", N - (N % 1000));
    } else if (N < 10000000) {
        printf("%d\n", N - (N % 10000));
    } else if (N < 100000000) {
        printf("%d\n", N - (N % 100000));
    } else {
        printf("%d\n", N - (N % 1000000));
    }

    return 0;
}
