#include "student.h"
#include "list.h"
#include <stdio.h>

List * list;



int main(void)
{
  student();
  printList(list);
  freeList(list);
  return 0;
}
