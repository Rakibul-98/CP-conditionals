// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_2_C

#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    
    int m1, m2, m3;
    
    
    if(A <= B && A <= C){
        m1 = A;
        if(B<=C){
            m2 = B;
            m3 = C;
        }else{
            m2 = C;
            m3 = B;
        }
    }else if(B <= A && B <= C){
        m1 = B;
        if(A<=C){
            m2 = A;
            m3 = C;
        }else{
            m2 = C;
            m3 = A;
        }
    }else if(C <= A && C <= B){
        m1 = C;
        if(B<=A){
            m2 = B;
            m3 = A;
        }else{
            m2 = A;
            m3 = B;
        }
    }
    printf("%d %d %d\n", m1, m2, m3);
    return 0;
}