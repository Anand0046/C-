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
    return 0;
}
