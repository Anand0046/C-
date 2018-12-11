#include "Container.h"

template <class AR>
void Container<AR> :: set_Element(AR element){
    Node* newNode = new Node;//create new Node
    newNode->data = element;//copy given data to new node
    newNode->next_Pointer = NULL;
    if(!head_Pointer)
		head_Pointer = newNode;
	else{
		Node* temp_Pointer = head_Pointer;//make a pointer to point head
		while(temp_Pointer->next_Pointer){
			temp_Pointer = temp_Pointer->next_Pointer;//move to next node
		}
		temp_Pointer->next_Pointer = newNode;
	}
}

template <class AR>
void Container <AR> :: delete_Element(AR element){
    Node* temp_Pointer  = head_Pointer;//make pointer point to head
    Node* prev_Pointer;
    while(temp_Pointer && temp_Pointer->data != element){
		prev_Pointer = temp_Pointer;//make prev to point temp is pointing
		temp_Pointer = temp_Pointer->next_Pointer;//move to next node
    }
    if(temp_Pointer && temp_Pointer->data == element){
		if(temp_Pointer == head_Pointer){
			head_Pointer = head_Pointer->next_Pointer;//make head point to next node
			delete temp_Pointer;//delete node
		}
		else{
			prev_Pointer->next_Pointer = temp_Pointer->next_Pointer;//make prev pointer point to next node of temp pointer
			delete temp_Pointer;//delete the node
		}
    }
}

template <class AR>
void Container<AR> :: display(){
    Node* temp_Pointer = head_Pointer;
    while(temp_Pointer){
		cout<<temp_Pointer->data<<"   ";
    }
    cout<<endl;
}

