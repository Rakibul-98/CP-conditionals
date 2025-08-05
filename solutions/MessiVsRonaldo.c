// https://www.codechef.com/problems/MVR

#include <stdio.h>

int main()
{
    int A, B, X, Y;
    scanf("%d %d %d %d", &A, &B, &X, &Y);
    
    int M = (A*2) + B;
    int R = (X*2) + Y;
    
    
    
    if(M > R){
        printf("Messi\n");
    }else if(M == R){
        printf("Equal\n");
    }else{
        printf("Ronaldo\n");
    }
    return 0;
}