#include "Container.h"
#include <iostream>
using namespace std;

class sample2{
  private:
  	int id;
  	string name;
  public:
	sample2(){
	  id = 0;
	  name = "";
	}
	void set(int i, string n){
	  id = i;
	  name = n;
	}
	string getname()const{
	  return name;
	}
	int getid()const{
	  return id;
	}
};
int main()
{
	struct sample{
	    string name;
	    int id;
	};
	sample s;
	s.name = "Anand";
	s.id = 1123;
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
    cout<<endl;
    Container<sample> obj3;
    obj3.set_Element(s);
    obj3.set_Element(s);
    obj3.set_Element(s);
    for(int i = 0; i < obj3.get_Size(); i++){
		cout<<obj3.get_Element(i).name<<"   ";
    }
    cout<<endl;
    sample2 s2;
    s2.set(1, "Anand");

    Container<sample2> obj4;
    obj4.set_Element(s2);
    obj4.set_Element(s2);
    obj4.set_Element(s2);
    for(int i = 0; i < obj4.get_Size(); i++){
		cout<<obj4.get_Element(i).getname()<<"   ";
		cout<<obj4.get_Element(i).getid()<<"   ";
    }
    return 0;
}
