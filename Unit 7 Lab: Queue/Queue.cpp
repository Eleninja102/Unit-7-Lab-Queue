//
//  Queue.cpp
//  Unit 7 Lab: Queue
//
//  Created by Coleton Watt on 10/27/21.
//

#include "Queue.hpp"

Queue::Queue(){
    top = nullptr;
    bottom = nullptr;
    
}

Queue::~Queue(){
    while(!isEmpty()){
        remove();
    }
}
bool Queue::isEmpty(){
    return(top == nullptr);
}

void Queue::add(string data){
    auto add = new Node;
    add -> data = data;
    add -> next = nullptr;
    
    
    if(top == nullptr){
        top = add;
        bottom = add;
        add -> next = nullptr;
    }else{
        bottom -> next = add;
        bottom = add;
    
    }
}

void Queue::remove(){
    if(!isEmpty()){
        auto temp = top;
        top = top->next;
        delete temp;
    
    }
}

string Queue::peek(){
    
    return top -> data;
}


ostream &operator << (ostream &out, const Queue &s){
    auto curr = s.top;
    while(curr != nullptr){
        out << curr->data << " ";
        curr = curr->next;
    }
    
    return out;
}

