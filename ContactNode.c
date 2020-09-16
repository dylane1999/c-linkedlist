#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ContactNode.h"


void CreateContactNode(ContactNode* thisNode, char name[], char phone[], ContactNode* nextNode)
{
  strcpy(thisNode->contactName, name);   //copy the name to list
  strcpy(thisNode->contactPhoneNum, phone); //copy phone number to list
  thisNode->nextNodePtr = nextNode;          //initially next pointer point to NULL

}

void InsertContactAfter(ContactNode* thisNode, ContactNode* newNode)
{
  if (thisNode == NULL)
  {
    printf("this node is null");
  }
  else
  {
    thisNode->nextNodePtr = newNode;

  }
}

ContactNode *GetNextContact(ContactNode *thisNode)
{
  return thisNode->nextNodePtr;
}

void PrintContactNode(ContactNode *thisNode)
{
  printf("Name: %s\n", thisNode->contactName);
  printf("Phone number: %s\n", thisNode->contactPhoneNum);
}
