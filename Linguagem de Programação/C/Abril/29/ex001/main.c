#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1;i<=100;i++){
        if(i!=100){
         printf("%d, ",i);
        }else{
            printf("%d.",i);
        }
    }
    return 0;
}
