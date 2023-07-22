// Function to find the minimum value of an array

#include <stdio.h>

// Declare functions
int minimum (int[]);

int main(void) {

  int scores[10], i, minScore;
  int minimum (int values[10]);

  // Get input scores
  printf ("Enter 10 scores\n");
  for (int i = 0; i <10; i++) {
    scanf ("%d", &scores[i]);
  }

  // Calculate and print minimum score
  minScore = minimum (scores);
  printf ("\nMinimum score is %d\n", minScore);
  
  return 0;
}

// Define functions
int minimum (int values[10]) {
  int minValue, i;

  minValue = values[0];

  for (i = 1; i < 10; i++) {
    if (values[i] < minValue) {
      minValue = values [i];
    }
  }
  return minValue;
}