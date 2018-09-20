#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,cont=1;
    int i ,maior = 0;



    for(i=1;i<10;i++){
        scanf("%d",&num);

        if(num > maior){
            maior = num;
    }
    }


    printf("O numero maior e %d na posicao %d",num,cont);


    return 0;
}
