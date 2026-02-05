#include <stdio.h>
#include <string.h>

int main(){
    int n, i;
    float *p, sum=0, avg;
    printf("\n How many Courses of a student: \t");
    scanf("%d",&n);
    printf("\n Enter marks of each course: \t");
    p=(float*)malloc(n*sizeof(float));
    for(i=0;i<n;i++){
        scanf("%f",p+i);
        sum+=*(p+i);
    }
    avg=sum/n;
    printf("\n The sum of the marks: \t%.2f",sum);
    printf("\n The average marks is: \t %.2f",avg);
    free(p);
    return 0;
}