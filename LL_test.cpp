#include <iostream>
#include<cstdlib>
#include"NODE.h"
#include"LL.h"
using namespace std;
int main(int argc, char *argv[])
{  LL A;
   int i;
   monster_node *t;

   for(i=1;i<argc;i++) {
    t=new monster_node(atoi(argv[i]),atoi(argv[i+1]),argv[i+2]);
    A.add_node(t);
    }
   A.show_all();
    //system("PAUSE");
    return 0;
}
