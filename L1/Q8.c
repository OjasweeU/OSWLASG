#include<stdio.h>

int main() 
{
    printf("Name: OJASWEE UDGATA\n");
    printf("Regd No.: 2141021001\n");
    
    float subject1, subject2, subject3, subject4, subject5;
    float totalMarks, percentage;

    printf("Enter marks for subjects: ");
    scanf("%f%f%f%f%f", &subject1,&subject2,&subject3,&subject4,&subject5);

    totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (totalMarks / 500) * 100;

    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

  return 0;
}
