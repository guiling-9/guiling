//202510306217
//2573167176@qq.com
//李昊
#include <stdio.h>

int main() {
    int arr[5];
  
    for (int i = 1; i <= 4; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    arr[0] = 0;
    
   
    for (int i = 0; i < 5; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    
    return 0;
}
