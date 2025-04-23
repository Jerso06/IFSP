#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=0, a=5000000, b=7000000;

    while(a<b){
        a *= 1.03;
        b *= 1.02;
        cont++;
    }
    printf("Anos necessarios para ultrapassar: %d",cont);
    return 0;
}
