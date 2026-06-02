#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // 자릿수 파악
    long long temp = n;
    int len = 0;
    while(temp>0){
        len ++;
        temp /= 10;
    }
    int* answer = (int*)malloc(sizeof(int)*len);
    
    int i = 0;
    
    while(n>0){
        answer[i]= n%10;
        i++;
        n/=10;
    }
    
    return answer;
}