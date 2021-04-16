#include <iostream>
#include"NODE.h"
#include"LL.h"
using namespace std;
#include <string>
#include <stdlib.h>
#include <time.h>
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
 void LL::atk_all()
{
  int i,b;
  srand(time(NULL));
  b=rand()%100;
  cout<<"Boss Hp is "<<b<<endl;
  monster_node *t;
  t=hol;
  for(i=0;i<size;i++)
  {
    t->hp=(rand()%(t->hp+1));
    t->move_next();
  }
  b=b-(b+rand()%100-b);
  cout<<"current Boss Hp is "<<b<<endl;
  

}

