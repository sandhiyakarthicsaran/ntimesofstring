#include<stdio.h>
int main()
{
int n,i;
char s[12]="SANDHIYA";
printf("Enter the number of times to be printed:\n",n);
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%s",s);
}
return 0;
}
