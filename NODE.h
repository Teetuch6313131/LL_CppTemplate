using namespace std;
class monster_node{
      friend class LL;
      int hp,potion;
      string name;
      monster_node* next;
public:
        monster_node(int,int,string);
        void show_node();
        void insert(monster_node*&);
        monster_node* move_next();
        ~monster_node();
};
