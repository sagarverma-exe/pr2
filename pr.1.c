#include<stdio.h>
#include<conio.h>
 
 
 void main()
{
 	int marks;
	char grade;
 	printf("enter your marks :");
 	scanf("%d",&marks);
 	
 	
 	(marks>=80 && marks<=100)?grade='A':
 	    	(marks>=70 && marks<80)?grade='B':
 		    	(marks>=60 && marks<70)?grade='C':
 			    	(marks>=40 && marks<60)?grade='D':
 				    	 (marks>=0 && marks<40)?grade='F':
 					        	printf("enter vaild number");
 	
 	switch(grade)
 	{
 	  case 'A':printf("your grade is A,\n Excellent work");
	  break;	
 		
 	  case 'B':printf("your grade is B,\n Well done");
	  break;	
	  
	  case 'C':printf("your grade is C,\n Good job");
	  break;		
 		
 	  case 'D':printf("your grade is D\n You Passed , but you could do better");
	  break;	
	  
	  case 'F':printf("your grade is F\n  Sorry, you failed");
	  break;	
 		
	 }
	 
	 if(grade=='A'|| grade=='B'||grade=='C'||grade=='D')
	 {
	 	printf("\nCongratulations! You are eligible for the next level");
	 	
	 }
 	else
 	{
 		printf("\n Please try again next time ");
	 }
}