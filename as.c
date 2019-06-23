#include<stdio.h>
int main(int argc,char* argv[])
{
	int n,i,temp=0;
	n=atoi(argv[1]);
	while(n>0)
	{
		int r;
		n=n/10;
		s=n%10;
		temp=10*temp+s;
	}
	printf("the reverse is %d\n",temp);
}