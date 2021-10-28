//
//  Queue.hpp
//  Unit 7 Lab: Queue
//
//  Created by Coleton Watt on 10/27/21.
//

#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

struct Node{
    string data;
    Node *next;
};

class Queue{
public:
    //Constructs an empty queue
    Queue();

    //Destructor to free up memory
    ~Queue();

    //Returns true if the stack is empty
    bool isEmpty();

    //Adds an item to the end of the queue
    void add(string data);

    // Removes the item at the front of the queue
    void remove();

    // Returns the value in the front of the queue (without removing)
    string peek();

    //Overloads the extraction operator to display the queue
    friend ostream &operator << (ostream &out, const Queue &s);
private:
    Node *top;
    Node *bottom;
};

#endif /* Queue_hpp */
