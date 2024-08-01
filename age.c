#include<stdio.h>
#include<conio.h>
int main(){
   // int age[]={16,17,18,19,20,21};
    for(int i=0;i<10;i++){
        if(i==5){
            continue;
        }
printf("%d\n",i);
    }
    return 0;
}