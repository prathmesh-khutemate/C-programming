 #include<stdio.h>
int addnum (x,y);
int mult (x,y);
int subt (x,y);
int div (x,y);
int main()
{
	int x,y,sum,multi,subtraction,division;
	printf("enter two number:");
	scanf("%d %d",&x,&y);
	

	sum=addnum(x,y);
	printf(" sum is = %d",sum);
	
    multi=mult(x,y);
	printf("\n multiple is = %d",multi);
	
	subtraction=subt(x,y);
	printf("\n subtraction of = %d",subtraction);
	
	division=div(x,y);
	printf("\n division of =%d",division);

}
int addnum (x,y)
{
	int result;
	result=x+y;
}

int mult (x,y)
{
	int result;
	result=x*y;
}
int subt (x,y)
{
	int result;
	result=x-y;
}
int div (x,y)
{
	int result;
	result=x/y;
}


