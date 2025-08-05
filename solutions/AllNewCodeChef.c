// https://www.codechef.com/problems/NEWCC

#include <stdio.h>

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    if(X < Y){
        printf("Old\n");
    }else if(X == Y){
        printf("Same\n");
    }else{
        printf("New\n");
    }
    return 0;
}