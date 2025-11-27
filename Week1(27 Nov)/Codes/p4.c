//4. Write a program to find factorial using recursion
#include <stdio.h>
int factorial(int n){
if(n==1){
return 1;
}
return n*factorial(n-1);
}
int main(){
int n;
printf("Enter the number");
scanf("%d",&n);
int b=factorial(n);
printf("the result=%d\n",b);
return 0;
}


//Space Complexity O(n) since the number of variable created is depended on the input so the complexity is O(n).
