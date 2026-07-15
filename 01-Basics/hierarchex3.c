// g = big / 2 + big * 4 / big - big + abc / 3 ;
// (abc = 2.5, big = 2, assume g to be a float)

#include <stdio.h>

int main() {
    float abc = 2.5, big = 2, g;

    g = big / 2 + big * 4 / big - big +abc / 3 ;
    printf("g = %f" , g);
    
    return 0;



}
