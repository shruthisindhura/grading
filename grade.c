#include<stdio.h>
void main()
{	int marks;
	printf("enter the marks of student: \n");
	scanf("%d",&marks);
	if(marks>=85&&marks<=100)
	{printf("\n GRADE-A");
	}
	else if(marks>=70&&marks<=84)
		{printf("\n GRADE-B");
	}	else if(marks>=55&&marks<=69)
		{printf("\n GRADE-C");
	}	else if(marks>=40&&marks<=54)
		{printf("\n GRADE-D");
	}else{printf("\n GRADE-F");
	}
	
}
