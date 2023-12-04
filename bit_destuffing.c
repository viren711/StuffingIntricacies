//c program to implement bit destuffing
#include<stdio.h>
int main()
{
	int i,n,count=0;										//i is counter variable, n is used to store the size
	printf("____BIT DESTUFFING____\n");
	printf("Enter the size of the received stream:  ");
	scanf("%d",&n);											//gets the size of data from the user and stores it in n
	char a[n];												//string to store the data
	printf("Enter data :    ");
	scanf("%s",&a);
	printf("Destuffed data: ");
	
	
	for(i=0;i<n;i++)
	{
		if(a[i]=='1')
		count++;											//increments the count each time it finds 1
		else
		count=0;
		
		printf("%c",a[i]);
		if(count==5)										//skips the 0 after 5 1's are encountered
		{
			i++;
			count=0;
		}
	}
	return 0;
}
