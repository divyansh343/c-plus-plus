// class keyboard gets acces of class mouse's private varibles
// it happend because mouse declared keyboard is a friend class 

#include <iostream>
using namespace std;
class keyboard; // has to itialize early, cause it's presence is required in class mouse

    class mouse{
        int event;
        public : 
        friend class keyboard; // mouse declared classkeyboard is friend
        void addevent(int);
    };

    void mouse :: addevent ( int e){
        event = e;
        cout << "event added : " << event << endl;
    }
    class keyboard{
        string name;
        public:
        void setName(string);
        void getevent(mouse);
    };
    void keyboard :: getevent(mouse m){
        cout << "this " << name << "comes with this " << m.event << endl;
    }
    void keyboard :: setName(string n){
        name = n;
        cout << "name is set to " << name << endl;
    }

int main () {
    mouse dell;
    keyboard prodot;
    dell.addevent(69);
    prodot.setName("lowdot");
    prodot.getevent(dell);
    return 0;
}