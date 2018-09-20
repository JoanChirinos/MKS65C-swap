#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  //seed rand
  srand(time(NULL));

  //create arr1
  int arr1[10];

  //create pointer
  int * p1; //pointer for arr1
  p1 = arr1;

  //populate arr1
  int ctr;
  for (ctr = 0; ctr < 9; ctr++) {
    *p1 = rand();
    p1++;
  }
  arr1[9] = 0;

  p1 = arr1;

  printf("\narr1 (%p): [", arr1);
  for (ctr = 0; ctr < 10; ctr++) {
    printf("%d,", *p1);
    p1++;
  }
  printf("\b]\n\n");

  //create arr2
  int arr2[10];

  //pop arr2 with els from arr1
  int * p2; //pointer for arr2

  p1 = arr1;
  p2 = arr2;

  for (ctr = 0; ctr < 10; ctr++) {
    * p2 = * p1;
    p1++;
    p2++;
  }

  //print

  p2 = arr2;
  printf("arr2 (%p): [", p2);
  for (ctr = 0; ctr < 10; ctr++) {
    printf("%d,", * p2);
    p2++;
  }
  printf("\b]\n\n");

  return 0;
}
