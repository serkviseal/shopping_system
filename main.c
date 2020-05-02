#include <stdio.h>
#include <stdlib.h>

int response, s_name, s_srname, s_nmber, course;
void main()
{
    showMenu();
}

void showMenu()
{
    int menu_to;
    {
        printf("-----WELCOME STUDENT BOOK MANAGER-------");
        printf("\n\n\n");
        printf("1. Add student record \n");
        printf("2. List of students \n");
        printf("3. Modify records \n");
        printf("4. Delete records \n");
        printf("5. Exit program \n");
        printf("\n");
        printf("What do you choose? =>");
        scanf("%d", &menu_to);
    }
    renderMenuTo(menu_to);
}

void renderMenuTo(menu_to)
{
    system("cls");
    if(menu_to == 1)
    {
        renderAddStudents();
    }
    else if(menu_to == 2)
    {
        renderAllStudents();
    }
    else if(menu_to == 3)
    {
        renderModifyStudents();
    }
    else if(menu_to == 4)
    {
        renderDeleteStudents();
    }
    else
    {
        system("exit");
    }
}

void renderAddStudents()
{
    printf("-----ADD NEW STUDENT RECORD BOOK-------\n");
    printf("Student Name  Student Surname  Student Number  Course \n");
    printf("Do you wish to go back to menu? 1 or 0 =>");
    scanf("%d", &response);
    if(response == 1)
    {
        system("cls");
        showMenu();
    }
}

void renderAllStudents()
{
    printf("-----VIEW ALL STUDENTS RECORD BOOK-------");
     printf("Student Name  Student Surname  Student Number  Course \n");
    printf("Do you wish to go back to menu? 1 or 0 =>");
    scanf("%d", &response);
    if(response == 1)
    {
        system("cls");
        showMenu();
    }
}

void renderModifyStudents()
{
    printf("-----MODIFY STUDENTS RECORD BOOK-------");
     printf("Student Name  Student Surname  Student Number  Course \n");
    printf("Do you wish to go back to menu? 1 or 0 =>");
    scanf("%d", &response);
    if(response == 1)
    {
        system("cls");
        showMenu();
    }
}

void renderDeleteStudents()
{
    printf("-----DELETE STUDENT RECORD BOOK-------");
     printf("Student Name  Student Surname  Student Number  Course \n");
    printf("Do you wish to go back to menu? 1 or 0 =>");
    scanf("%d", &response);
    if(response == 1)
    {
        system("cls");
        showMenu();
    }
}
