#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    
    int original = x;
    int sum = 0;
    
    while(x>0){
        sum += x % 10;
        x /= 10;
    }
 
    if (original % sum == 0) {
        return true;  
    } else {
        return false; 
    }
    
    
    
}