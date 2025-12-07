#include <stdio.h>
int main(){
int i; int sum=0;
int a[10];
printf("Enter 10 numbers\n");

for (i=0; i<10; i++) 
  scanf("%d", &a[i]);
for (i=0; i<10; i++) { 
  printf("a[%d]=%d\n",i, a[i]); 
  sum = sum + a[i];

 }
printf("sum:%d\n",sum);


return 0;    
}