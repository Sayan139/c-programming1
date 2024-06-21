#include <stdio.h>
int factorialofnum(int n){
    int factorial=1;
    for(int i =n;i>=1; i-- ){
        factorial *= i;
    }
    return factorial;
}
int main(){
    printf("krishna murti number ");
    int sum=0,n,orginal_num;
    printf("enter the number : ");
    scanf("%d",&n);
    orginal_num = n;
    while(orginal_num!=0){
        int lb = orginal_num%10;
        int factorial = factorialofnum(lb);
        sum += factorial;
        orginal_num /= 10;
    }
    if(sum == n){
        printf("its krishna murti ");
    }else{
        printf("its not krishna murti");
    }
}