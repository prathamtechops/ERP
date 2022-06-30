// ERP - Edit-section (Student name, DOB, year, batch, mail-id/clg_mail-id, enroll-no. ), My Profile, Fee pending details, Attendance details.

// ERP - Edit-section ( Faculty name, DOB, DOJ, Subject-teacher, mail-id/clg_mail-id, ID-no. ), My Profile.

// ERP - library List of books category(Science, Maths ,etc.), Book code, DO-ISSUE/RETURN, PENALTY.

// ERP - accounts Student name, DO-fee_Submission, Penalty, Mode of transaction(paytm, bank, cheque - with student name and batch and more (to just store the data only) ).

#include <stdio.h>
#include <stdlib.h>

// #include <conio.h>

void intro()
{
    printf("WELCOME");
}

struct Library
{
    char student_name[256];
    char course_name[256];
    int roll_no;
    char book_name[256];
    int book_id;
};

void listofbooks()
{
    printf("\n********************************************************************************************\n");
    printf("Book 1\n");
    printf("Book 1\n");
    printf("Book 1\n");
    printf("\n********************************************************************************************\n");
}

int main()
{

    int no = 0;
    struct Library lib[no];

    FILE *fp = fopen("test.txt", "a+");
    int a;

    printf("What do you want to do\n");

    printf("Press 1 to issue a book\n");
    printf("Press 2 to see the details\n");
    printf("Press 3 to see the list of books\n");

    scanf("%d", &a);

    switch (a)
    {
    case 1:

        if (fp == NULL)
        {
            printf("File does not exist\n");
            exit(1);
        }

        printf("How many student have to issue a book\n");
        scanf("%d", &no);
        for (int i = 0; i < no; i++)
        {
            fprintf(fp, "Student %d\n", i + 1);
            printf("Enter student name: ");
            scanf("%s", &lib[i].student_name);
            fprintf(fp, "The name of the student is: %s \n", lib[i].student_name);
            printf("CourseName: ");
            scanf("%s", &lib[i].course_name);
            fprintf(fp, "Course name: %s\n", lib[i].course_name);

            // Working till here after this progam stops

            // printf("Book Name: ");
            // scanf("%s", &lib[i].book_name);
            // fprintf(fp, "Book Name: %s\n", lib[i].book_name);
            // printf("Book ID: ");
            // scanf("%d", &lib[i].book_id);
            // fprintf(fp, "Book id: %d\n", lib[i].book_id);
            // printf("Roll_no: ");
            // scanf("%d", &lib[i].roll_no);
            // fprintf(fp, "Roll_No: %d\n", lib[i].roll_no);
            printf("\n----------------------------------\n");
            printf("Entry recorded please return the book in 7 days.\n");
        }
        fclose(fp);
        break;
    case 2:

        printf("--------------------------------------------------------------------------------------------------------\n");

        // for (int i = 0; i < no; i++)
        // {
        //     printf("\nStudent name: %s ", lib[i].student_name);
        //     printf("\nCourseName: %s ", lib[i].course_name);
        //     printf("\nRoll_no: %d", lib[i].roll_no);
        //     printf("\nBook Name: %s", lib[i].book_name);
        //     printf("\nBook ID: %d", lib[i].book_id);
        // }
        char c = fgetc(fp);
        while (c != EOF)
        {
            printf("%c", c);
            c = fgetc(fp);
        }

        break;
    case 3:
        listofbooks();
    }
}
