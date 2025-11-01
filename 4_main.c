//202510306217
//2573167176@qq.com
//李昊
#include <stdio.h>

int main() {
    int num = 100; 
    int first, second, third;
    int count = 0;  

    
    while (num <= 999) {
        
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

        num++; 
    }
    printf("\n");
    return 0;
}
