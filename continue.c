#include <stdio.h>

int main(){
    int x;
    for(x=1; x<=5;x++){
        if(x==3){
            continue;
        }
    printf("%d\n",x);
    }
    printf("\nFinished loop\n"); 
    return 0;
}