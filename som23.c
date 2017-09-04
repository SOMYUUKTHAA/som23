#include <stdio.h>  
int getMinimum(int a,int b)
{
if(a>=b)
return b;
else
return a;
}
int main()
{  
int a,b,min,count,gcd=1;  
printf("Enter two numbers\n");  
scanf("%d %d",&a,&b);  
min=getMinimum(a,b);
for(count=1;count<=min;count++) 
{  
if(a%count==0 && b%count==0) 
{
gcd=count;  
}  
}  
printf("GCD of %d and %d=%d\n",a,b,gcd);
return 0;  
}
