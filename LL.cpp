#include <iostream>
#include"NODE.h"
#include"LL.h"
using namespace std;
LL::LL(){
       hol=NULL;
       size=0;
}

LL::~LL(){
   // there is at least one item
    if(hol != NULL)
    {   
        // release memory starting from the second item
        NODE *current, *soon;
        current = this->hol->move_next();
        while(current != 0)  // if there are at least two items
        {
            /* When there is no more items after current,
             * delete current and leave.
             * Otherwise, free up current and move on to
             * the next item.
             */
            if(current->move_next() != NULL)
            {
                soon = current->move_next();
                delete current;
                current = soon;
            }
            else
            {
                delete current;
                break;
            }

        }
    }

    delete this->hol;
          //clear all nodes
}

void LL::show_all(){
     NODE* t=hol;
     int i;
     for(i=0;i<size;i++){
             t->show_node();
             t=t->move_next();
     }
}
void LL::add_node(NODE *&A){

          hol->insert(A);
          hol=A;

       size++;

 }
