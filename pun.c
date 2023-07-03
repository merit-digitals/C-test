#include<stdio.h>

// Fundamentals
int main()
// the word int just b4 d main, means the main function return an integer value
// the void in parenthesis means the main function has no argument
{
   int height, lenght, width, volume,weight;

   height= 8;
   lenght= 12;
   width= 10;
   volume= height * lenght * width;
   weight= (volume + 165) / 166;

   printf("Dimensions: %d x %d x %d\n", height, lenght, width);
   printf("Volume: %d\n", volume);
   printf("Dimensional weight: %d\n", weight);

   return 0;
}