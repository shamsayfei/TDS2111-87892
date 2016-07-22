#include "ListP.h"

void insert(char item, int Index){
    struct Node* newPtr = new Node();
    if(n == 1){
        newPtr->next = head;
        head = newPtr;
        return;
    }
    Node* newPtr2 = head;
    for(int i=0; i<n-2; i++){
        newPtr2 = newPtr2->next;
    }
newPtr->next = newPtr2->next;
newPtr2->next = newPtr;
}

void delete(char item, int Index){
    struct Node* newPtr = head;
    if(n ==1){
        head = newPtr->next;
        free(newPtr);
        return;
    }
    int i;
    for(i = 0; i < n-2; i++)
        newPtr = newPtr->next; //newPtr pointing to (n-1)th node
    
    struct Node* newPtr2 = newPtr->next; //nth node
    newPtr->next = newPtr2->next;
    free(newPtr2);
}
