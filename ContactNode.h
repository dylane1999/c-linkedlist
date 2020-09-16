#ifndef CONTACTNODE_H
#define CONTACTNODE_H

typedef struct ContactNode_struct
{
  char contactName[50];
  char contactPhoneNum[50]; 
  struct ContactNode_struct* nextNodePtr;

} ContactNode;
void CreateContactNode(ContactNode* thisNode, char name[], char phone[], ContactNode* nextNode); /*create a new node*/
void InsertContactAfter(ContactNode *thisNode, ContactNode *newNode);
ContactNode *GetNextContact(ContactNode *thisNode);
void PrintContactNode(ContactNode *thisNode);
#endif // CONTACTNODE_H