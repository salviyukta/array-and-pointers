//CHALLENGE = ARRAYS AND POINTERS
//3*3 array read and print using pointers and calculation of sum of elements of a diagonal

 
#include<stdio.h>
main()
{
	//1. initialize 3*3 array
	int data[3][3];
	int i,j;
	int sum=0;
	int *p;
	//2. read the elements of array
	printf("Enter the elements of array(9)\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			p=&data[i][j];
			scanf("%d",p);
		}
	}
	printf("\n");
	//3. print elemments of array using pointers
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			p=&data[i][j];
		    printf("%d\t",*p);
		    //4. calculate sum of diagonal elements
		    if(i==j)
			   sum = sum + *p;
		}
		printf("\n");
	}
	//another way for printing numbers
	/*p = &data;
	for(i=0;i<9;i++)
	{
		printf("%d\t",*p);
		p++;
	}*/
	//5. print diagonal elements sum
	printf("\nSum of diagonal elements of array is %d\n",sum);
	return 0;
}
