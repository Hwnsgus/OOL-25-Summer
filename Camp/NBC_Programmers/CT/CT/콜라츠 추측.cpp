#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    
    long long n = num;
    int count = 0;
    
    while(n != 1){
        if(count >= 500){
            return -1;
        }
        
        if(n % 2 == 0){
                n = n / 2;
            }
    
        else{
            n = (n * 3) + 1;
        }
    
        count++;
    }
 
    
    return count;
}