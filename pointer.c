#include <stdio.h>
int main() {

int a;
int *p;
a=5;
printf("%d\n", a);
p = &a;
printf("%d\n", p);
printf("%d\n", &a);
printf("%d\n", &p);
printf("%d\n", *p);
*p = 20;
printf("%d\n", *p);
printf("%d\n", a);
printf("%d\n", p);
printf("%d\n", &a);
printf("%d\n", &p);
printf("%d\n", p+1);
printf("%d\n", sizeof(a));

return 0;    
}