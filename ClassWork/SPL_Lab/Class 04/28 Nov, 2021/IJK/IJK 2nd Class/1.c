#include <stdio.h>
int main(){
    int i,m;
    scanf("%d",&m);
    for(i=m;i>0;i--){
        printf("%d + ",i);
    }
    printf("0\n");
}