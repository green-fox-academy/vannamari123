#include <iostream>
#include <string>
using namespace std;

// Create a class called ParentClass. It should have two public functions. Both return a string. One virtual, the other not.
// Each should return a unique string.
// Create a ChildClass which inherits from the ParentClass publicly.
// This should override both functions. The virtual and the nonvirtual one both.
// These should return unique string again.
//
// Create a main() function. In this function, create a ParentClass* pointer and instanciate a ChildClass member for that pointer.
// Hint: This should look something like this: ParentClass* a = new ChildClass();
// Print out the result of both functions on this a ponter.
// Print out the result of both functions if You first cast pointer a to be interpreted as of type ChildClass*

class ParentClass{

public:
    virtual string func1()
    {
        string str = "Hello";
        return str;
    }

    string func2()
    {
        string str = "World!";
        return str;
    }

};


class ChildClass: public ParentClass{
public:
    string func1(){
        string str = "Szia";
        return str;
    }

    string func2()
    {
        string str = "Vilag!";
        return str;
    }
};


int main()
{
    ChildClass c1;

    cout << c1.func1() << endl;
    cout << c1.func2() << endl;
    cout << endl << endl;

    ParentClass* a = new ChildClass();
    cout << a->func1() << endl;
    cout << a->func2() << endl;
    cout << endl << endl;
    delete a;

    ChildClass* b = new ChildClass();
    cout << b->func1() << endl;
    cout << b->func2() << endl;
    cout << endl << endl;
    delete b;


    return 0;
}
