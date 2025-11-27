//6. Write a program to find Fibonacci series
#include <stdio.h>
int main(){
int a=0, b=1, sum,n;
printf("Enter a number");
scanf("%d",&n);
printf("%d %d ",a,b);
for(int i=1;i<n-1;i++){
sum=a+b;
a=b;
b=sum;
printf("%d ",sum);
}
return 0;
}


//Space Complexity O(1) since the number of variable created is not changing on based on input so it is O(1).
