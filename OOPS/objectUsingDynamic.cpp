#include<iostream>
using namespace std;

    class Hero{
        //properties
        private:
            int health;
        public:
            char level;

            void print(){
                cout<<level<<endl;
            }

            int getHealth(){
                return health;
            }

            char getLevel(){
                return level;
            }

            void setHealth(int h){
                health = h;
            }
            
            void setLevel(char ch){
                level = ch;
            }
    };

int main(){
    //creation of object
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout<<"level is "<<a.level<<endl;
    cout<<"health is "<<a.getHealth()<<endl;

    //dynamically
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(65);
    cout<<"level is "<<(*b).level<<endl;
    cout<<"health is "<<(*b).getHealth()<<endl;

     cout<<"level is "<<b->level<<endl;
    cout<<"health is "<<b->getHealth()<<endl;


    return 0;
}