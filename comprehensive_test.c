#include<stdio.h>

int main(){
    int i;
    for(i=1;i<26;i++){
        if(i%3==0){
            printf("%d\n",i);
        }
    }
    while(25<i && i<51){
        if(i%3==0){
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}