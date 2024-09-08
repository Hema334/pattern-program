/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdio.h>
void main()
{
 int i,j,n;
 printf("enter the n:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     for(j=1;j<=i;j++)
     {
         printf("%d",j);
     }
     printf("\n");
}
}