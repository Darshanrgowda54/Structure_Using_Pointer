#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char Name[50];
    char Address[100];
    unsigned int Student_ID;
};

int main()
{

    struct Student *students;
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

   students = (struct Student *)malloc(n * sizeof(struct Student));


    for(int i=0;i<n;i++)
    {
        printf("Enter student details %d\n",i+1);

        printf("Name: ");
        scanf("%s",&(students + i)->Name);

        printf("Address: ");
        scanf("%s",&(students + i)->Address);

        printf("Student ID: ");
        scanf("%d",&(students + i)->Student_ID);

        printf("\n");
    }

    printf("Student Details\n");
    for(int i = 0; i < n; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", (students + i)->Name);
        printf("Name: %s\n", (students + i)->Address);
        printf("Name: %d\n", (students + i)->Student_ID);
        printf("\n");
    }

    free(students);
    return 0;
}
