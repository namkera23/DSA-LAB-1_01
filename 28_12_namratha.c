/*Author Name=Namratha karkera
Date = 11/8/2023
Branch = I.T.
Roll No=28
Program =12
Desription: Array Implementation of Queue
*/

#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
# define size 6

int queue[size];
int front,rear;

void init();
void enqueu(int);
void dequeue();
void display();

void init()
{
front=0;
rear=-1;
}
/* End of initialization method */



/* enqueu method */
void enqueue(int x)
{
	if(rear==-1)
	       printf("queue is overflow");
	else
	 {
	  rear =rear +1;
	  queue[rear]=x;
	 }
}
/*End of enqueue method */

/* Dequeue Method */
void dequeue()
{
	int i;
	if(rear<front)
		    printf("\nQueue is empty");
        else
            {
             printf("\n %d is deleted", queue[front++]);
            }
}
/* End of dequeue method*/

/*Display Method*/
void display()
{
	int i;
	if (rear<front)
		printf("\n Queue is underflow");
	else
	      for(i=front;i<+rear;i++)
	      {
	      printf("\n %d", queue[i]);
	      }
}
    /* End of display method*/

void main()
{
int ch;
int x;
init();

while(1)
{
printf("\n-----Queue operation----");
printf("\n1. Enqueue Element ");
printf("\n2. Dequeue Element");
printf("\n3. display the Queue Elements ");
printf("\n4. EXIT");
printf("ENTER YOUR CHOISE:");
scanf("%d",&ch);

switch(ch)
{
  case 1: printf("\n ENTER THE ELEMENTS TO BE ENQUEUED:");
           scanf("%d",&x);
           enqueue(x);
           break;

  case 2: dequeue();
          // getch();
          break;

  case 3:display();
          // getch();
          break;

  case 4: exit(1);
  default:printf("\n WRONG choise ");
          break;
}
}
}
