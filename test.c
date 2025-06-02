#include "student.h"
#include <stdio.h>

float * matrix;
int n;

void printMatrix(void)
{
  for(int i = 0; i<n; i++)
  {
    printf("%.1f", matrix[i*n+0]);
    for(int j=1; j<n; j++)
    {
      printf(" %.1f", matrix[i*n+j]);
    }
    if(i<n-1)
    {
      printf("\n");
    }
  }
  return;
}

void freeMemory()
{
  free(matrix);
  return;
}

int main(void)
{
  student();
  printMatrix();
  freeMemory();
  return 0;
}
