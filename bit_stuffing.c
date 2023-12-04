//c program to implement bit stuffing
#include<stdio.h>

int main()
{
	int i,n,count=0;									//i is counter variable, n is used to store the size 
	printf("____BIT STUFFING____\n");
	printf("Enter the size of the data:  ");			
	scanf("%d",&n);										//gets the size of data from the user and stores it in n
	char a[n];											//string to store the data
	printf("Enter data :  ");
	scanf("%s",&a);										//gets the data from the user and stores it in character array
	printf("Stuffed data: ");
	
	for(i=0;i<n;i++)
	{
		if(a[i]=='1')
		count++;										//increments the count each time it finds 1
		else
		count=0;										//restores count to 0 when it finds 0
		
		printf("%c",a[i]);
		if(count==5)
		{
			printf("0");								//stuffs a 0 after 5 1's
			count=0;
		}
	}
	return 0;
}
