#include <stdio.h>

int main() 
{
    int i = 2, j = 3, k, l;
    float a, b;

    k = i / j * j;
    l = j / j * j;
    a = i / j * j;
    b = j / i * i;
    printf("%d %d %f %f", k, l, a, b);
    
    return 0;


}
