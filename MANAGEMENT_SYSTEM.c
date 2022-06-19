// ERP - Edit-section (Student name, DOB, year, batch, mail-id/clg_mail-id, enroll-no. ), My Profile, Fee pending details, Attendance details.

// ERP - Edit-section ( Faculty name, DOB, DOJ, Subject-teacher, mail-id/clg_mail-id, ID-no. ), My Profile.

// ERP - library List of books category(Science, Maths ,etc.), Book code, DO-ISSUE/RETURN, PENALTY.

// ERP - accounts Student name, DO-fee_Submission, Penalty, Mode of transaction(paytm, bank, cheque - with student name and batch and more (to just store the data only) ).

#include <stdio.h>
// #include <conio.h>

void intro()
{
    printf("WELCOME");
}

struct Student
{
    char studentName[30];
    char batchName[5];
    char mailId[30];
    char official_MailId[30];
    char enrollNo;
    int startYear;
    int endYear;

    struct Attendance
    {
        struct Sub
        {
            int totalClasses;
            int attendendClasses;
            int totalPercentage;
        };
        int totalclasses;
        int attendendclasses;
        int totalpercentage;
    };

    struct DOB
    {
        int Day;
        int Month;
        int Year;
    };

    struct Fee
    {
        char student_name[256];
        char course_name[256];
        int roll_no;
        char authorName[256];
        char bank_name[256];
        int book_id;
        int submitFee;
        int pendingFee;
    };
};

struct Library
{
    char student_name[256];
    char course_name[256];
    int roll_no;
    char book_name[256];
    int book_id;
};

int main()
{

    int no = 0;
    struct Library lib[no];

    int a;

    printf("What do you want to do\n");

    printf("Press 1 to issue a book\n");
    printf("Press 2 to see the details\n");

    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("How many student have to issue a book\n");
        scanf("%d", &no);
        for (int i = 0; i < no; i++)
        {
            printf("Enter student name: ");
            scanf("%s", &lib[i].student_name);
            printf("CourseName: ");
            scanf("%s", &lib[i].course_name);
            printf("Book Name: ");
            scanf("%s", &lib[i].book_name);
            printf("Book ID: ");
            scanf("%d", &lib[i].book_id);
            printf("Roll_no: ");
            scanf("%d", &lib[i].roll_no);
        }
    case 2:
        if (no == 0)
            printf("No record present");
        else
        {
            printf("--------------------------------------------------------------------------------------------------------\n");

            for (int i = 0; i < no; i++)
            {
                printf("\nStudent name: %s ", lib[i].student_name);
                printf("\nCourseName: %s ", lib[i].course_name);
                printf("\nRoll_no: %d", lib[i].roll_no);
                printf("\nBook Name: %s", lib[i].book_name);
                printf("\nBook ID: %d", lib[i].book_id);
            }
        }
    }
}
