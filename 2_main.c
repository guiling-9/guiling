//202510306217
//2573167176@qq.com
//李昊
#include <stdio.h>

int main() {
    int num;
    int first, second, third; 
    int count = 0;             

   
    for (num = 100; num <= 999; num++) {
        
        first = num / 100;          
        second = (num / 10) % 10;   
        third = num % 10;           
        
        if (first * first * first + second * second * second + third * third * third == num) {
            
            if (count > 0) {
                printf(" ");
            }
            printf("%d", num);
            count++;
        }
    }
    printf("\n");
    return 0;
}
