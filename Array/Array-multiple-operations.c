/*
   This program demonstrates various operations on an array of integers.
   It calculates the minimum, maximum, sum, average, even and odd element counts,
   sum of elements at odd indices, and prints the array in reverse order.
*/

#include <stdio.h>

int main()
{
   int sum = 0.0, count, min, sub = 0, max, max1 = 0, sum1, i, j, even = 0, odd = 0, n, mark[10] = {2, 4, 6, 8, 1, 3, 5, 7, 10, 13}, size = mark[8];
   double avg;
   //  for ( i = 0; i < 10; i++)
   //   {
   //   printf("ENter a number : ");
   //   scanf("%d",&mark[i]);
   //   }

   // Calculate the maximum value using a for loop
   max1 = mark[0];
   for (i = 0; i < 10; i++)
   {
      if (max1 >= mark[i + 1])
      {
         continue;
      }
      else
      {
         max1 = mark[i + 1];
      }
   }
   printf("max is : %d\n", max1);

   // Calculate the maximum value using a for loop
   max = mark[0];
   for (i = 0; i < 10; i++)
   {
      if (max < mark[i])
      {
         max = mark[i];
      }
   }
   printf("maximum value is %d\n", max);

   // Calculate the sum of arrays using a for loop
   for (i = 0; i < 10; i++)
   {
      sum = sum + mark[i];
   }
   printf("sum of array is %d \n", sum);

   for (i = 0; i < 10; i++)
   {
      avg = (double)sum / 10;
   }

   printf("Average of array is %0.2lf \n", avg);

   printf("value of  index 2 is %d\n", mark[2]);  // Here, simply searched for the number 3 value by array and printed it
   printf("last element of array %d\n", mark[9]); // Same as above

   // Calculate the even and odd number if num can give mode 2 0 then it should count the value and the sequence will be the same
   for (i = 0; i < 10; i++)
   {
      if (mark[i] % 2 != 0)
      {
         even++;
         odd++;
      }
   }
   printf("even element count %d\n", even);
   printf("odd element count %d\n", odd);

   for (i = 0; i < 10; i++)
   {
      if (mark[i] % 2 != 0)
      {
         sum1 = sum1 + mark[i];
      }
   }
   printf("Odd Indices Sum %d\n", sum1);

   // Assign the size and save it in int and subtract the first value from zero to 20 elements
   printf("Array in reverse order: \n");
   for (i = size - 1; i >= 0; i--)
   {
      printf("%d\t", mark[i]);
   }

   return 0;
}
