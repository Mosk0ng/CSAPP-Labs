#include <stdio.h>

int logicalShift(int x, int n){
   x=(x>>16)|x;
   x=(x>>8)|x;
   x=(x>>4)|x;
   x=(x>>2)|x;
   x=(x>>1)|x;
   return ~x&0x1;
}


int main(){
    int res = logicalShift(0,0);
    printf("%d\n", res);
    return 0;
}
