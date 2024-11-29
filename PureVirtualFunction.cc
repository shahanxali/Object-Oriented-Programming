//The pure virtual function are the one which MUST be overriden by something
//Abstract class are one which should have atleast 1 pure virtual function. And then it will be like blueprint of other classes
//Pure virtual functions are known as abstract method too.
//One more important point - pure virtual function is initialized as 0 (= 0) so it cant contain anything in it, just the function name and return type
//Example all; animal will make sound, so animal class should have a sound function, but we dont know in animal class that which animal will
//be taken, so we create a animal class as blueprint making sound function as pure virtual, now it must be overriden because it doesnt have anything in it

#include <bits/stdc++.h>
using namespace std;

//Abstract Class
class animal{
    public:
        virtual void fun() = 0; //Pure Virtual function / Abstract Method
};
class dog : public animal{
    public:
        void fun() override {
            cout << "bhow";
        }
};

int main() {

    //Overriding calling basics
    animal* mydog = new dog();

    mydog -> fun();

    return 0;
}
