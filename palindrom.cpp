#include<stdio.h>
int main()
{
	int rev=0,r,n,num;
	
	printf("Enter the Number You Want:  ");
	scanf("%d",&num);
	
	for(n=num;n>0;n=n/10)
	{
		r=n%10;
		rev=rev*10+r;
	}
	if(rev==num)
	printf("%d is A Palindrome Number",num);
	
	else
	printf("%d is Not Palindrome Number",num);
	
	
}
