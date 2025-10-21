//202510306217
//2573167176@qq.com
//李昊
#include <stdio.h>

int main() {
    int a, b;
    char op;
    

    scanf("%d %d %c", &a, &b, &op);
    

    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
        
            if (b != 0) {
                printf("%d\n", a / b);
            } else {
                printf("Divisor cannot be zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }
    
    return 0;
}
