//
//  main.cpp
//  Unit 7 Lab: Queue
//
//  Created by Coleton Watt on 10/27/21.
//

#include <iostream>
/*
#include "Queue.hpp"
using namespace std;

int main() {
    cout << "How many iterations";
    int x;
    cin >> x;
    for(int i = 0; i < x; i++){
        Queue queue;
        int choice = 2;
        cout <<"Choice: \n";
        cin >> choice;
       
        
        switch (choice){
            case 1:{
                string what ="";
                cin >> what;
                queue.add(what);
                break;
            }
            case 2:{
                queue.remove();
                break;
            }
            default:
                break;
        }
        cout << queue;
    }
    return 0;
}
*/
#include "Queue.hpp"
using namespace std;
template <class type>
void check(string, type, type);
void fillQueue(Queue&);
void testIsEmpty();
void checkQueueOrder();
int main() {
  testIsEmpty();
  checkQueueOrder();
}
void fillQueue(Queue &queue){
  queue.add("one");
  queue.add("two");
  queue.add("three");
  queue.add("four");
    //queue.add("four");

  cout << queue << endl;
}
void testIsEmpty(){
  Queue queue;
  check("1. Checking Empty Queue", queue.isEmpty(), true);
  queue.add("one");
  queue.remove();
  check("2. Checking Recently Empty Queue", queue.isEmpty(), true);
}
void checkQueueOrder(){
  Queue queue;
  fillQueue(queue);
  string txt = "one";
  check("3. Check Front: ", queue.peek(), txt);
  queue.remove();
  txt = "two";
  check("4. Check Second: ", queue.peek(), txt);
}
template <class type>
void check(string name, const type shouldBe, const type currentlyIs){
  if(shouldBe == currentlyIs){
    cout << name << ": Passed " << endl;
  }
  else{
    cout << name << ": Failed, value should be " << shouldBe << " but is returning" << currentlyIs << endl;
  }
}
