//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplaySchedule
//  Description:    To Display the schedule based on the division
//  Input:          Character
//  Output:         Void
//  Author:         Omkar Santosh Durge
//  Date:           28/11/2025
//
///////////////////////////////////////////////////////////////////////////////
void DisplaySchedule(char ch)
{

    if (ch == 'A' || ch == 'a')
    {
        printf("Your Exam At 7 Am\n");
    }

    else if (ch == 'B' || ch == 'b')
    {
        printf("Your Exam At 8.30 Am\n");
    }

    else if (ch == 'C' || ch == 'c')
    {
        printf("Your Exam At 9.20 Am\n");
    }

    else if (ch == 'D' || ch == 'd')
    {
        printf("Your Exam At 10.30 Am\n");
    }
    else
    {
        printf("Enter the Correct Division:");
    }
}
///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{

    char ch = '\0';

    printf("Enter Your Division:\n");
    scanf("%c", &ch);

    DisplaySchedule(ch);

    return 0;
}
/*

Case 1:

Enter Your Division:
a
Your Exam At 7 Am

Case 2:

Enter Your Division:
D
Your Exam At 10.30 Am


Case 3:

Enter Your Division:
f
Enter the Correct Division:

*/
