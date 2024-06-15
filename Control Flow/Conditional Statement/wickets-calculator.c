#include <stdio.h>

int main()
{
   // Initialize India's score
   int india = 300, pakistan, wickets;

   // Get input for Pakistan's runs
   printf("Enter Pakistan runs: ");
   scanf("%d", &pakistan);

   // Get input for the number of wickets Pakistan won with
   printf("Enter number of wickets they won: ");
   scanf("%d", &wickets);

   // Check and display the match result
   if (india == pakistan)
   {
      printf("Draw\n");
   }
   else if (pakistan < india)
   {
      printf("India won. Pakistan score: %d\n", pakistan);
   }
   else
   {
      printf("Pakistan won with %d wickets\n", wickets);
   }

   return 0;
}
