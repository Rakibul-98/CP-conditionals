// https://www.codechef.com/problems/PUZHUNT

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    
    if(N >= 6 && N <= 9){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}