#include <stdio.h>
 
int main()
{
   int a[100], number, i, j, temp;
   //printf is used to print the statement//
   printf("\n Please enter the total number of elements  :  ");
 //scanf to take the input from the user//
   scanf("%d", &number);
   
   printf("\n Please enter the array elements  : \n");
   for(i = 0; i < number; i++)
       scanf("\n %d", &a[i]);
 
   for(i = 0; i < number - 1; i++)
   {
       for(j = 0; j < number - i - 1; j++)
       {
           if(a[j] > a[j + 1])
           {
               temp = a[j];
               a[j] = a[j + 1];
               a[j + 1] = temp;
           }
       }
   }
   printf("\n List Sorted in Ascending Order : ");
   for(i = 0; i < number; i++)
   {
       printf(" %d \t", a[i]);
   }
 //\n to print the statement in last line//
   printf("\n");
   printf("\n Positions of even elements in sorted array : \n ");
   for(i = 0; i < number; i++)
   {
       if(a[i] % 2 == 0)
       {
           printf(" %d \t", i+1);
       }
   }
   printf("\n");
 
   return 0;
}
