/* PSEUDOCODE
 *   READ n (number of students)
 *   FOR each student from 1 to n
 *     READ registration number, name, marks
 *     SWITCH marks / 10
 *       10, 9, 8, 7 : grade = A
 *       6           : grade = B
 *       5           : grade = C
 *       4           : grade = D
 *       default     : grade = F
 *     DISPLAY reg no, name, marks, grade
 *     SWITCH marks / 10
 *       10, 9, 8, 7, 6, 5, 4 : DISPLAY "PASS"
 *       default              : DISPLAY "FAIL"*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n, i, marks;
    char reg[30], name[30], grade;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nStudent %d\n", i);
        printf("Registration number: ");
        scanf("%29s", reg);
        printf("Name: ");
        scanf("%29s", name);
        printf("Marks: ");
        scanf("%d", &marks);

        switch (marks / 10) {
            case 10:
            case 9:
            case 8:
            case 7: grade = 'A'; break;
            case 6: grade = 'B'; break;
            case 5: grade = 'C'; break;
            case 4: grade = 'D'; break;
            default: grade = 'F';
        }

        printf("---------------------------------\n");
        printf("       STUDENT INFORMATION\n");
        printf("---------------------------------\n");
        printf("Registration No: %s\n", reg);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        switch (marks / 10) {
            case 10: case 9: case 8: case 7:
            case 6: case 5: case 4:
                printf("Status: PASS\n");
                break;
            default:
                printf("Status: FAIL\n");
        }
        printf("---------------------------------\n");
    }
    return 0;
}
