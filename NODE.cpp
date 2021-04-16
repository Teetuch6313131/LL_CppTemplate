#include <iostream>
using namespace std;
#include"NODE.h"
#include<string>

monster_node::monster_node(int x,int y,string n){
      hp=x;
      potion=y;
      name=n;
      next=NULL;
      cout<<"adding monster "<< n<< " hp:"<< x<< " potion:"<< y<<endl;
}
  monster_node:: ~monster_node(){
      cout<<"monster "<<name<<" is being deleted"<<endl;
}
monster_node* monster_node::move_next(){
      return next;
}
void  monster_node:: show_node(){
         cout<<"monster "<<name<<" hp:"<<hp <<" potion:"<< potion<<endl;
 }
void monster_node::insert(monster_node*& x){
     x->next=this;

     }
