// (b) on = ink * act / 2 + 3 / 2 * act + 2 + tig ;
//(ink = 4, act = 1, tig = 3.2, assume on to be anint)

#include <stdio.h>

int main()
{
    int ink = 4, act = 1, tig = 3.2, on;
    on = ink * act / 2 + 3 / 2 * act + 2 + tig;
    printf("on = %d" , on);
    return 0;



}