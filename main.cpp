#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
  NumberList list;

  list.appendNode(2.5);
  list.appendNode(7.9);
  list.appendNode(12.6);

  list.displayList();
  return 0;
}