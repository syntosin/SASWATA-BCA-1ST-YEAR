// WAP IN C TO DEMONSTRATE CONTINUE STATEMENT
#include<stdio.h>
int main(){
    int i;
    for(i=0;i<=10;i++){
        if(i==5){
            continue;
        }
        printf("%d ",i);
    }
}