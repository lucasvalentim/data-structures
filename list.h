struct cell {
  int value; 
  struct cell *next;
  struct cell *previous;
};

typedef struct cell* List;

List createCell(int);
List goToHead(List);
List goToTail(List);
List appendInList(List, int);
List prependInList(List, int);
void printList(List);
