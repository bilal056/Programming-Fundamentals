#include <stdio.h>

/*
This program calculates and displays the zodiac sign based on the user's input of their date of birth.
The user is prompted to enter their day and month of birth. The program then checks the input against
a series of conditions to determine the corresponding zodiac sign and body part associated with that sign.
The zodiac signs and their associated body parts are displayed as output.

Note: The program assumes a standard zodiac sign calendar with the following date ranges:
- Aquarius: January 20 - February 19
- Pisces: February 20 - March 20
- Aries: March 21 - April 20
- Taurus: April 21 - May 20
- Gemini: May 21 - June 20
- Cancer: June 21 - July 22
- Leo: July 23 - August 22
- Virgo: August 23 - September 22
- Libra: September 23 - October 22
- Scorpio: October 23 - November 22
- Sagittarius: November 23 - December 21
- Capricorn: December 22 - January 19
*/

int main()
{
   int month, day;
   printf("Enter your date of birth :"); // Prompt user for day of birth
   scanf("%d", &day);

   printf("Enter your month of birth :"); // Prompt user for month of birth
   scanf("%d", &month);

   // Determine the zodiac sign based on the input day and month
   if ((month == 1 && day >= 20) || (month == 2 && day <= 19))
   {
      printf("Aquarius, legs");
   }
   else if ((month == 2 && day >= 20) || (month == 3 && day <= 20))
   {
      printf("Pisces, feet");
   }
   else if ((month == 3 && day >= 21) || (month == 4 && day <= 20))
   {
      printf("Aries, head");
   }
   else if ((month == 4 && day >= 21) || (month == 5 && day <= 20))
   {
      printf("Taurus, neck");
   }
   else if ((month == 5 && day >= 21) || (month == 6 && day <= 20))
   {
      printf("Gemini, shoulders");
   }
   else if ((month == 6 && day >= 21) || (month == 7 && day <= 22))
   {
      printf("Cancer, chest");
   }
   else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
   {
      printf("Leo, heart");
   }
   else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
   {
      printf("Virgo, belly");
   }
   else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
   {
      printf("Libra, riens");
   }
   else if ((month == 10 && day >= 23) || (month == 11 && day <= 22))
   {
      printf("Scorpio, secrets");
   }
   else if ((month == 11 && day >= 23) || (month == 12 && day <= 21))
   {
      printf("Sagittarius, thighs");
   }
   else if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
   {
      printf("Capricorn, knees");
   }

   return 0;
}
