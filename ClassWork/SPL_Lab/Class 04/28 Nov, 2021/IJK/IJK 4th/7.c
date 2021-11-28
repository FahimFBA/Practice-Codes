#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==n){
                printf("*");
            } 
            else if(i%2==0 && j%2==0 || i%2!=0 && j%2!=0 ){
                
                    printf("-");
                }
            else if(i%2==0 && j%2!=0 || i%2!=0 && j%2==0 ){
                    printf("+");
                }
          
              
        }
        printf("\n");
    }
}