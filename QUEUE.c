#include <stdio.h>
#include<stdlib.h>
#define SIZE 5
int x;
int queue[SIZE];
int front = -1;
int rear = -1;
void dequeue()
{
  if (rear==-1 && front == -1 || (front > rear))
    printf("UNDERFLOW! \nyour can't delete any value");
  else
  {
    printf("deleted element is %d\n", queue[front]);
    front++;
  }
}
void fvalue()
{
  if (rear==-1 && front == -1 || (front > rear))
    printf("UNDERFLOW!\tnothing to show");
  else
    printf("first value of queue is %d\n", queue[front]);
}
void display()
{
  if (rear==-1 && front == -1 || (front > rear))
    printf("UNDERFLOW!/t nothing to show");
  else
  {
    for (int i = front; i < rear + 1; i++)
    {
      printf("\nelement in queue is %d\n", queue[i]);
    }
  }
}
void enqueue()
{
  if (rear == SIZE - 1)
    printf("OVERFLOW! you can't insert element");
  else if (front == -1 && rear == -1)
  {
    printf("enter the elment to insert:");
    scanf("%d", &x);
    front = rear = 0;
    queue[rear] = x;
  }
  else
  {
    printf("enter the elment to insert:");
    scanf("%d", &x);
    rear++;
    queue[rear] = x;
  }
}
int main()
{
  int ch;
  while(1)
  {
  printf("\tTO INSERT THE VALUE PRESS 1\n\tTO DELETE THE ELEMENT PRESS 2\n\tTO DISPLAY THE ELEMENTS PRESS 3\n\tTO CHECK FIRST ELEMENT PRESS 4 \nTO EXIT THE PROGRAM PRESS 5\n");
  printf("enter condition:");
  scanf("%d",&ch);
  switch (ch)
  {
  case 1:
    enqueue();
    break;
  case 2:
  dequeue();
  break;
  case 3:
  display();
  break;
  case 4:
  fvalue();
  break;
  case 5:
  exit(0);
  default :
  printf("invalid condition");
  }
  }
}