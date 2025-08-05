// https://www.codechef.com/problems/NEWSPAPER

#include <stdio.h>

int main()
{
    int X;
    scanf("%d", &X);
    
    if(X > 7 && X <= 10){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}