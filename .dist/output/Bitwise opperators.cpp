#include<stdio.h>
int main() {
    int a = 10;      
    int b = 6;  
    int result = a ^ b;    \\ meaning(^) symbol = XOR (0,1,1,0)
    
    printf("a ^ b = %d\n", result); 
    int x = a&b;               \\ meaning(&) symbol = AND (0,0,0,1)
    printf("a & b = %d\n", x);
     int y = a|b;               \\ meaning(|) symbol = OR  (0,1,1,1)
    printf("a | b = %d\n", y);
    int  z=a>>2;                \\ meaning(>>) symbol = RIGHT SHIFT (to shift value right in 1)
    printf("a >> b %d\n", z);
    int  w=a<<2;                  \\ meaning(<<) symbol = LEFT SHIFT(to shift value left in 1)
    printf("a >> b %d\n", w);
    
}