#include "Container.h"
#include <iostream>
#include <cstddef>
using namespace std;

int main()
{
    Container<int> obj;
    obj.set_Element(1);
    obj.set_Element(2);
    obj.set_Element(3);
    obj.set_Element(4);
    obj.display();
    obj.delete_Element(1);
    obj.display();
    obj.delete_Element(2);
    obj.display();
    obj.delete_Element(3);
    obj.display();
    obj.delete_Element(4);
    obj.display();

    Container<string> obj2;
    obj2.set_Element("Ar");
    obj2.set_Element("Ar1");
    obj2.set_Element("Ar2");
    obj2.set_Element("Ar3");
    obj2.set_Element("Ar4");
    obj2.display();

   // cout<<obj2.get_Element(0)<<endl;
    cout<<obj2.get_Size()<<endl;
    for(int i = 0; i < obj2.get_Size(); i++){
		cout<<obj2.get_Element(i)<<"   ";
    }
    return 0;
}
