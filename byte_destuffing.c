//c program to implement byte destuffing
#include<stdio.h>

int main()
{
	int i,n,count=0;												//i is counter variable, n is used to store the size
	printf("____BYTE DESTUFFING____\n");
	printf("Enter the size of the received stream:  ");
	scanf("%d",&n);													//gets the size of data from the user and stores it in n
	char a[n];														//string to store the data
	printf("Enter data :    ");
	scanf("%s",&a);
	printf("Destuffed data: ");

	for(i=0;i<n;i++)
	{
		if(a[i]=='E')												//if it finds the escape character, it doesn't print E and jumps to next character
		continue;
		else
		printf("%c",a[i]);
	}
	return 0;
}
