#include <iostream>
#include "ArrayStack.hpp"

using namespace std;

int main() {
//testing peek and pop and constructor and push

    ArrayStack<int> stack(5);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    cout << "Stack after pushing 1-5: " << stack << endl;

    cout << "Peek: " << stack.peek() << endl; // Should print 5

    stack.pop();
    cout << "Stack after popping: " << stack << endl; // Should print 1, 2, 3, 4

    cout << "Peek after popping: " << stack.peek() << endl; // Should print 4


    //testing rotate left and right
    stack.rotate(Stack<int>::LEFT);
    cout << "Stack after rotating left: " << stack << endl; // Should print
    stack.rotate(Stack<int>::RIGHT);
    cout << "Stack after rotating right: " << stack << endl; // Should print

    //testing assignment operator and copy constructor
    ArrayStack<int> stack2 = stack; // Copy constructor
    cout << "Stack2 after copy construction: " << stack2 << endl; // Should
    stack2.push(6);
    cout << "Stack2 after pushing 6: " << stack2 << endl; //
    cout << "Stack after stack2 modified: " << stack << endl; // Should not change

    //testing clear
    stack.clear();
    cout << "Stack after clearing: " << stack << endl; // Should print empty message

    
    
    
    return 0;


}
