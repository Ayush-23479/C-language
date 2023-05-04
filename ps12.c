#include <stdio.h>

int main() {
  int maths_marks, science_marks;

  printf("Enter your marks in maths: ");
  scanf("%d", &maths_marks);

  printf("Enter your marks in science: ");
  scanf("%d", &science_marks);

  if (maths_marks >= 40 && science_marks < 40) {
    printf("Congratulations! You passed the maths exam and are eligible for a gift of 15 Rs.\n");
  } else if (maths_marks < 40 && science_marks >= 40) {
    printf("Congratulations! You passed the science exam and are eligible for a gift of 15 Rs.\n");
  } else if (maths_marks >= 40 && science_marks >= 40) {
    printf("Congratulations! You passed both exams and are eligible for a gift of 45 Rs.\n");
  } else {
    printf("Sorry, you did not pass either exam and are not eligible for a gift.\n");
  }

  return 0;
}
