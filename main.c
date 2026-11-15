void showMenu(void)
{
    printf("\n\n========== MAIN MENU ==========\n");
    printf("1.  Add Student\n");
    printf("2.  Display All Students\n");
    printf("3.  Search Student\n");
    printf("4.  Update Student\n");
    printf("5.  Delete Student\n");
    printf("6.  Enter / Update Attendance\n");
    printf("7.  Attendance Shortage Report\n");
    printf("8.  Show Student Result\n");
    printf("9.  Merit List\n");
    printf("10. Student Statistics\n");
    printf("11. Student Transcript\n");
    printf("12. Save Records\n");
    printf("13. Create Backup\n");
    printf("14. Export Records to CSV\n");
    printf("0.  Exit\n");
    printf("===============================\n");
}


int main(void)
{
    int choice;

    loadRecords();

    if (adminLogin() == 0)
        return 0;

    do
    {
        showMenu();
        choice = readInt("Enter your choice: ");

        switch (choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                enterAttendance();
                break;

            case 7:
                attendanceReport();
                break;

            case 8:
                showResult();
                break;

            case 9:
                showMeritList();
                break;

            case 10:
                showStatistics();
                break;

            case 11:
                studentTranscript();
                break;

            case 12:
                saveRecords();
                break;

            case 13:
                backupRecords();
                break;

            case 14:
                exportCSV();
                break;

            case 0:
                saveRecords();
                printf("\nThank you for using the Student Record Management System.\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

        if (choice != 0)
            pauseScreen();

    } while (choice != 0);

    return 0;
}

