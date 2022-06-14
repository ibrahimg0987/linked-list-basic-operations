#include "NumberList.h"
#include <iostream>
using namespace std;

void NumberList::appendNode(double val)
{
  ListNode *newNode;
  ListNode *nodePtr;

  newNode = new ListNode;
  newNode->value = val;
  newNode->next = nullptr;
  if (!head)
    head = newNode;
  else
  {
    nodePtr = head;
    while (nodePtr->next)
      nodePtr = nodePtr->next;
    nodePtr->next = newNode;
  }
}

void NumberList::displayList() const
{
  ListNode *nodePtr;
  nodePtr = head;
  while (nodePtr)
  {
    cout << nodePtr->value << (nodePtr->next ? " " : "");
    nodePtr = nodePtr->next;
  }
}
 

void NumberList::insertNode(int pos, double val)
{
  ListNode *counter =head;
  ListNode *ptr = head;
  ListNode *prev = head;
  ListNode *node;
  node = new ListNode;
  node -> value = val;

  int count = 0;
  while(counter){
    counter = counter -> next;
    count++;
  }
  
  if (pos == 0){ 
    head = node;
    node -> next = ptr;
  }
  else if(pos <= count){
    int counter = 0;
    while(ptr != NULL && counter < pos){
        prev = ptr;
        ptr = ptr -> next;
        counter++;
      }//while
    node -> next = ptr;
    prev -> next = node;
  }//else
  
}
NumberList::ListNode *NumberList::findNode(double val){ 
  ListNode *ptr;
  ptr = head;
  
  if(head == NULL) return 0;
  else if(head -> value == val){
    return head;
    cout << head ->value;
  }
  else if(head != NULL){
    while(ptr != NULL && ptr->value != val){  
        ptr = ptr -> next;
      }
    cout<<ptr->value;
    }
}
int NumberList::deleteNode(double val){ 
  ListNode *ptr;
  ListNode *prev = head;
  ptr = head;
  
  if(head == NULL) return 0;
  else if(head -> value == val){
    head = head -> next;
    delete ptr;
    return 1;
  }
  else if(head != NULL){
    while(prev->next != NULL && (prev->next)->value != val){
        prev = prev->next;
      }
    while(ptr != NULL && ptr->value != val){  
        ptr = ptr -> next;
      }
    prev ->next = ptr ->next;
    delete ptr;
    return 1;
    }

}//deleteNode
void NumberList::deleteList(){ 
  ListNode *ptr;
  ListNode *nexto;
  ptr = head;
  while(ptr != NULL){
    nexto = ptr -> next;
    delete ptr ;
    ptr = nexto ;
  }//while
  head = NULL;
}//deleteList