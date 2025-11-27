//5.Write a program to find transpose of a 3*3 Matrix
#include <stdio.h>
int main(){
int arr[3][3];
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
scanf("%d",&arr[i][j]);
}
}

int trans[3][3];
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
trans[j][i]=arr[i][j];
}
}

for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
printf("%d ",trans[i][j]);
}
printf("\n");
}
return 0;
}


//Space Complexity O(1) since the number of variable created is not changing on based on input so it is O(1).




