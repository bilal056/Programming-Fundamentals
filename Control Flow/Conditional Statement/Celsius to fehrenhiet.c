#include <stdio.h>
/* check wheater  number 1 is greater than number 2 */ 

int main()
{
float c,f;
char y,n,a;

  /* user will input either y or n if he presses y it will lead him to celisius to fehrenhiet nad versa*/

  printf("if you want celisius to fehrenhiet than press 'y' if versa than n ");
  scanf("%c",&a);


if (a=='y')
{
  printf("Enter celesius temp : ");  // ask input from user
  scanf("%f",&c);   
  f = (c * 9/5) + 32; // i enteed hte formula to confirt celesius to fehrenhiet                           
  printf(" fehrenhiet : %.2f\n",f);         // after i calculated that function i will prent it

}
else if (a=='n')
{
  printf("Enter fehrenhiet temp ");
  scanf("%f",&f);
  c = (f - 32) * 5/9;    // here i did the same but i entered the formula of fehrenhiet
  printf(" celesius : %.2f",c);

}


 return 0;
}