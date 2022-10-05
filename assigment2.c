#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int n, Choice;
int id[100];
float grades[100];
float gradeMax, gradeMin;

void main(){
    do
    {
        Menu();
        Option();
    } while (Choice!=5);
    return 0;
    
}
void Menu()
{
    printf("\t\t ____________________________________________\n");
    printf("\t\t|       student management program           |\n");
    printf("\t\t| Press 1: Enter the infomation of students: |\n");
    printf("\t\t| Press 2: View all student:                 |\n");
    printf("\t\t| Press 3: The student with highest grade:   |\n");
    printf("\t\t| Press 4: The student with lowest grade:    |\n");
    printf("\t\t| Press 5: Exit program:                     |\n");
    printf("\t\t|____________________________________________|\n");
    printf("\n Please enter your choice here: ");
    scanf("%d",&Choice);
}

void Option()
{
    switch (Choice)
    {
    case 1:
        printf("Enter the number of students: ");
        scanf("%d", &n);
        CreateStudent (n);
        break;
    case 2:
        DisplayStudent(n);
        break;
    case 3:
        HighestGrades(n);
        break;
    case 4:
        LowestGrades(n);
        break;
    case 5:
        printf("you have exited the program!");
       
        break;
    
    default:
    printf("Please choose again \n");
        break;
    }
}

void CreateStudent(int x)
{
    for(int i =0; i<x; i++)
    {
        printf("Enter student ID %d: ", i+1);
        scanf("%d", &id[i]);
        printf("Enter student grades %d: ", i+1);
        scanf("%f", &grades[i]);
    }
}

void DisplayStudent(int x)
{
    for (int i=0; i<x; i++)
    {
        printf("Display student ID %d: %d \n", i+1, id[i]);
        printf("Display student grades %d: %f \n", i+1, grades[i]);
    }
}

void Highestgrades (int x)
{
    gradeMax = grades[0];
    for(int i=0; i<x; i++)
    {
        if(gradeMax < grades[i])
        {
            gradeMax = grades[i];
        }
    }
    printf("The highest score is: %f\n", gradeMax);

}

void Lowestgrades (int x)
{
    gradeMin = grades[0];
    for(int i=0; i<x; i++)
    {
        if(gradeMin > grades[i])
        {
            gradeMax = grades[i];
        }
    }
    printf("The lowest score is: %f\n", gradeMin);

}
