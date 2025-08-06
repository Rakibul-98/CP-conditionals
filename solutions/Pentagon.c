// https://atcoder.jp/contests/abc333/tasks/abc333_b?lang=en

#include <stdio.h>

int main()
{
    char S1, S2, T1, T2;
    scanf(" %c %c", &S1, &S2);
    scanf(" %c %c", &T1, &T2);
    
    int d1 = S2 - S1;
    if(d1 < 0) d1 = -d1;
    if(d1 > 2) d1 = 5 - d1;

    int d2 = T2 - T1;
    if(d2 < 0) d2 = -d2;
    if(d2 > 2) d2 = 5 - d2;

    if(d1 == d2){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}