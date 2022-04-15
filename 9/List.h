#ifndef LIST_H
#define LIST_H

typedef struct Node *List;

List ListFromArray(int values[], int size);
void ListPrint(List l);
void ListFree(List l);
List ListSelectionSort(List ls);

#endif
