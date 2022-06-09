// ERP - Edit-section (Student name, DOB, year, batch, mail-id/clg_mail-id, enroll-no. ), My Profile, Fee pending details, Attendance details.

// ERP - Edit-section ( Faculty name, DOB, DOJ, Subject-teacher, mail-id/clg_mail-id, ID-no. ), My Profile.

// ERP - library List of books category(Science, Maths ,etc.), Book code, DO-ISSUE/RETURN, PENALTY.

// ERP - accounts Student name, DO-fee_Submission, Penalty, Mode of transaction(paytm, bank, cheque - with student name and batch and more (to just store the data only) ).

#include <stdio.h>
#include <conio.h>

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
<<<<<<< Updated upstream
        char student_name[256];
        char course_name[256];
        int roll_no;
        char authorName[256];
        char bank_name[256];
        int book_id;
=======
        int submitFee;
        int pendingFee;
    };
};

struct Library
{
    char student_name[256];
    char course_name[256];
    int roll_no;
    char authorName[256];
    char bank_name[256];
    int book_id;

    struct Issue_Date
    {
        int day;
        int month;
        int year;
>>>>>>> Stashed changes
        int due_date;
    };
};

int main()
{

    // int i;
}
