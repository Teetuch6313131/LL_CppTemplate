#include <iostream>
#include"NODE.h"
#include"LL.h"
using namespace std;
#include <string>
LL::LL(){
       hol=NULL;
       size=0;
}

LL::~LL(){
   // there is at least one item
    if(hol != NULL)
    {   
        monster_node *current, *soon;
        current = hol->move_next();
        while(current != 0)  
        {
            
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

    delete hol;
          //clear all nodes

}

void LL::show_all(){
     monster_node* t=hol;
     int i;
     for(i=0;i<size;i++){
             t->show_node();
             t=t->move_next();
     }
}
void LL::add_node(monster_node *&A){

          hol->insert(A);
          hol=A;

       size++;

 }
