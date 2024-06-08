#include<stdio.h>
#include<math.h> //POWER FUNCTION RESIDES IN THIS LIB
int main()
{
int n,p,ans;
printf("Enter Number & power: ");
scanf("%d %d",&n,&p);
ans=pow(n,p);
printf("%d",ans);
return 0;	
}
