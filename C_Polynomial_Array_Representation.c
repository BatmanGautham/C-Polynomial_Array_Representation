#include<stdio.h>

struct poly 
 {
   int coeff;
   int expo;
 };

void main()
{
  int n,i;
  
 printf("\nEnter highest power of Polynomial: ");
    scanf("%d",&n);
 
 struct poly A[100];
 
 for(i=n;i>=0;i--)
   {
 		printf("\nEnter Coefficent of X^%d : ",i);
 			scanf("%d",&A[i].coeff);
 		
 		A[i].expo=i;
   }
 	
 printf("\n\n\t\tPolynomial \n\n");
 		
 	for(i=n;i>=0;i--)
      {
     	printf("%dx^%d ",A[i].coeff,A[i].expo);
            {
                if(i==0)
                break;
                
                if(A[i-1].coeff>0)
                printf("+");
            }
  	 }
}

		    
 		
 
