#ifndef NUMBERLIST_H
#define NUMBERLIST_H

class NumberList
{
private:
  struct ListNode
  {
    double value;
    struct ListNode *next;
  };
  ListNode *head;

public:
  NumberList()
  {
    head = nullptr;
  }
  void appendNode(double);
  void insertNode(int, double);
  ListNode *findNode(double);
  void displayList() const;
  int deleteNode(double);
  void deleteList();
};
#endif