#include <stdio.h>
#include <stdlib.h>
#include "ContactNode.h"
#include <string.h>

int main()
{

  char contactName[50];
  char contactPhoneNum[50];
  int nameLen =0;
  int phoneLen = 0; 
  ContactNode *firstNode;
  ContactNode *secondNode;
  ContactNode *thirdNode;
  ContactNode *head;
  ContactNode *tail;
  firstNode = (ContactNode *)malloc(sizeof(ContactNode));
  secondNode = (ContactNode *)malloc(sizeof(ContactNode));
  thirdNode = (ContactNode *)malloc(sizeof(ContactNode));

  for (size_t i = 0; i < 3; i++)
  {
    printf("Person %zu\n", i + 1);
    printf("Enter name:\n");
    fgets(contactName, 50, stdin);
    printf("Enter phone number:\n");
    fgets(contactPhoneNum, 50, stdin);
    nameLen = strlen(contactName) -1;
    if (contactName[nameLen] == '\n')
    {
      contactName[nameLen] = '\0' ;
    }
    phoneLen = strlen(contactPhoneNum) -1;
    if (contactPhoneNum[phoneLen] == '\n' )
    {
      contactPhoneNum[phoneLen] = '\0' ;
    }
    
    printf("You entered: %s, %s\n", contactName, contactPhoneNum);
    printf("\n");

    if (i == 0)
    {
      CreateContactNode(firstNode, contactName, contactPhoneNum, secondNode);
      head = firstNode;
    }
    else if (i == 1)
    {
      CreateContactNode(secondNode, contactName, contactPhoneNum, thirdNode);
    }
    else if (i == 2)
    {
      CreateContactNode(thirdNode, contactName, contactPhoneNum, NULL);
      tail = thirdNode;
    }
  }

  printf("CONTACT LIST\n");
  PrintContactNode(firstNode);
  printf("\n");
  PrintContactNode(secondNode);
  printf("\n");
  PrintContactNode(thirdNode);
  printf("\n");

}
