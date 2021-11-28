#include <stdio.h>
int main(){
    int n,sum=0;
    float m,o;
    scanf("%d%f%f",&n,&m,&o);
    if(n%2==0 && n<10 && n>25){
        sum=m+o;
        printf("%d\n",sum);
    } 
    else{
        if(m<o) printf("%f\n",o);
        else printf("%f\n",m);
    }
    return 0;
}