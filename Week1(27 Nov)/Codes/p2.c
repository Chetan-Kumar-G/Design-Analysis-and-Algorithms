//2.Write a program to find the sum of Square first N natural number
#include <stdio.h>
void sumOfSqNaturalNumbers(int n){
int sum=0;
for(int i=1;i<=n;i++){
sum=sum+(i*i);
}
printf("the sum is= %d\n",sum);
}
int main(){
int n;
printf("Enter the number");
scanf("%d",&n);
sumOfSqNaturalNumbers(n);
return 0;
}



//Space Complexity O(1) since the number of variable created is not changing on based on input so it is O(1).
