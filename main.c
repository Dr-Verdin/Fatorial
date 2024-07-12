#include <stdio.h>

int main(void){
    int N, zeros = 0, divisor = 5;
    
    scanf("%d", &N);
    
    while(divisor <= N){
        zeros = zeros + (N/divisor);
        divisor = divisor * 5;
    }
    
    printf("%d\n", zeros);
    
    return 0;
}
