#include <stdio.h>
int main(){
    int l;
    printf("enter the limit of the series : ");
    scanf("%d",&l);
    for(int i=1; i<=l; i++){
        printf("%d ",i*i);
    }
}