/* My name is Noah Cuevas and my panther ID is 6189849
I wrote this code without any assistance from outside sources
The objective of this program is to allow people to select a seat in whichever class they 
would like. After selecting a spot that is full it will divert the person buying that seat 
to another seat that is open until no more seats are available*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

  int choice;
  char choice2;
  int economy[8] = {0, 0, 0, 0, 0, 0, 0, 0};
  int firstClass[4] = {0, 0, 0, 0};

  //This for loop will run through the entire program filling up seats on the plane
  for ( ; ; )
  {
    printf("Please type 1 for first class\nPlease type 2 or economy\nPlease type 0 to quit\n");
    scanf("%d", &choice);

    //This switch statement lets you choose between first class and economy
    switch (choice)
    {
    case 1:
      //This for as well as the if statements within the for looploop will cycle through the
      //first class seats till they are fulland redirect the passenger to another seat
      for (int j = 0; j < 4; j++)
      {
        if (firstClass[j] == 0)
        {
          printf("You are now assigned to first class seat %d.\n", j);
          firstClass[j] = 1;
          break;
        }
        else if (firstClass[3] == 1)
        {
          printf("Would you like to select another section (y/n)\n");
          scanf("%s", &choice2);
          if (choice2 == 'n')
          {
            printf("The next flight will be tomorrow.\n");
            break;
          }
          else if (choice2 == 'y')
          {
            break;
          }
          else
          {
	    printf("Error Invalid Input\n");	
            return 1;
          }
        }
      }
      break;

    case 2:
      //This for as well as the if statements within the for looploop will cycle through the
      //first class seats till they are fulland redirect the passenger to another seat
      for (int j = 0; j < 8; j++)
      {
        if (economy[j] == 0)
        {
           printf("You are now assigned to economy seat %d.\n", j);
          economy[j] = 1;
          break;
        }
        else if (economy[7] == 1)
        {
          printf("Would you like to select another section (y/n)\n");
          scanf("%s", &choice2);
          if (choice2 == 'n')
          {
            printf("The next flight will be tomorrow.\n");
            break;
          }
          else if (choice2 == 'y')
          {

            break;
          }
          else
          {
            printf("Error Invalid Input\n");	
            return 1;
          }
        }
      }
      break;

      break;

    case 0:
      return 0;
      break;

    default:
      printf("Error Invalid Input.\n");
      break;
    }
  }
}