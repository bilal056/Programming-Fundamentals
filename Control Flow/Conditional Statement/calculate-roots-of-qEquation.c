#include <stdio.h>
#include <math.h>

// This program calculates the roots of a quadratic equation
// of the form ax^2 + bx + c = 0, where a, b, and c are
// coefficients entered by the user.

int main()
{
   float a, b, c, discriminant, root1, root2;

   // Input coefficients from the user
   printf("Enter value of a : ");
   scanf("%f", &a);

   printf("Enter value of b : ");
   scanf("%f", &b);

   printf("Enter value of c : ");
   scanf("%f", &c);

   // Check if coefficients are valid
   if (a == 0 || b == 0 || c == 0)
   {
      printf("Coefficients a, b, and c cannot be zero.\n");
   }
   else if (a < 0 || b < 0 || c < 0)
   {
      printf("Coefficients a, b, and c must be greater than zero.\n");
   }

   // Calculate the discriminant
   discriminant = b * b - 4 * a * c;
   printf("Discriminant is %f\n", discriminant);

   // Calculate roots based on the discriminant
   if (discriminant > 0)
   {
      root1 = (-b + sqrt(discriminant)) / (2 * a);
      root2 = (-b - sqrt(discriminant)) / (2 * a);

      printf("Root-1 is %.2f\n", root1);
      printf("Root-2 is %.2f\n", root2);
   }
   else if (discriminant < 0)
   {
      float realPart = -b / (2 * a);
      float imaginaryPart = sqrt(-discriminant) / (2 * a);

      printf("Root-1 is %.2f + %.2fi\n", realPart, imaginaryPart);
      printf("Root-2 is %.2f - %.2fi\n", realPart, imaginaryPart);
   }
   else
   {
      // If discriminant is zero, roots are real and equal
      root1 = root2 = -b / (2 * a);
      printf("Roots are real and equal. Root-1 is %.2f\n", root1);
   }

   return 0;
}
