#include "defs.h"


typedef struct _heap Heap;

Heap *NewHeap(long int, int (*comparison) (Item, Item));
void FixUp(Heap *, long int, int *);
void FixDown(Heap *, int, int *);
int HeapInit(Heap *, Item);
int HeapEmpty(Heap*);
Item RemoveRoot(Heap * h, int *);
void FreeHeap(Heap * , long int);
void PrintHeap(Heap *heap, void (*Item_Print) (Item));
