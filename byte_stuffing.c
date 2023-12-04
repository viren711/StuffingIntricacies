//c program to implement byte stuffing
#include<stdio.h>
int main()
{
	int i,n,count=0;								//i is counter variable, n is used to store the size
	printf("____BYTE STUFFING____\n");
	printf("Enter the size of the data:  ");
	scanf("%d",&n);									//gets the size of data from the user and stores it in n
	char a[n];										//string to store the data
	printf("Enter data :  ");
	scanf("%s",&a);									//gets the data from the user and stores it in character array
	printf("Stuffed data: ");
	
	printf("F");									//flag byte before header
	for(i=0;i<n;i++)
	{
		if(a[i]=='E')
		printf("EE");
		else if(a[i]=='F')
		printf("EF");
		else
		printf("%c",a[i]);
	}
	printf("F");									////flag byte after trailer
	return 0;
}

