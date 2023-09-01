#include <stdio.h>
#include <string.h>
struct data
{
    char name[10];
    int roll_no;
    float marks;
};
int main()
{
    struct data arr[10];
    int data;

    printf("Enter the no of students:");
    scanf("%d",&data);

    for(int i=0;i<data;i++)
    {
        printf("Enter the Roll Number of %dnd student:",i+1);
        scanf("%d",&arr[i].roll_no);

        printf("Enter the Marks of %dnd student:",i+1);
        scanf("%f",&arr[i].marks);

        printf("Enter the Name of %dnd student:",i+1);
        scanf("%s",&arr[i].name);
    }

    printf("Students Details are:\n\n");

    for(int i=0;i<data;i++)
    {
        printf("%dnd Student Detail:\n",i+1);
        
        printf("Name:%s\n",arr[i].name);

        printf("Roll Number:%d\n",arr[i].roll_no);

        printf("Marks:%.1f\n\n",arr[i].marks);
    }
}