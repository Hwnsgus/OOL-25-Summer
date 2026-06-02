#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long solution(long long n) {
    long long x = sqrt(n);
    
    if(x*x==n){
        return (x+1) * (x+1);
    }
    
    else{
        return -1;
    }
    
}