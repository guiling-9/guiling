//202510306217
//2573167176@qq.com
//李昊
#include <stdio.h>

int main() {
    int arr[5];
    int count = 0; 
    
   
    while (count < 5) {
        int num;
        scanf("%d", &num);  
        
       
        if (num % 2 == 0) {
            arr[count] = num;  
            count++;           
        }
        
    }
    
    
    for (int i = 0; i < 5; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    
    return 0;
}
