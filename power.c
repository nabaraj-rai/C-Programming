#include <stdio.h>
#include<math.h>

int main(){
    
    // Program to display sum of the following series up to n terms:
    // Sum = x-x^2+x^3-x^4

    int n, x, sum=0, i;

    printf("Enter the required number of terms:\n");
    scanf("%d",&n);
    printf("Enter the value of x:\n");
    scanf("%d",&x);

    for(i=1;i<=n;i++){
        if(i%2==0){
            sum=sum-pow(x,i);
        }
        else{
            sum=sum+pow(x,i);
        }
    }
    printf("Sum=%d",sum);
    return 0;
}
