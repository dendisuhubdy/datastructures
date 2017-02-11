#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <vector>

using namespace std;

template <class T>
class Stack
{
    private:
        T top;
        int capacity; // the capacity of the stack should always be an int
        T *storage; // defining types of items saved in this stack
    public:
        Stack(int capacity) {
            if(capacity <= 0)
                throw string("Stack's capacity must be positive");
            storage = new int(capacity);
            this->capacity = capacity;
            top = -1;
        }

        void push(T value) {
            if(top == capacity)
                throw string("Stack's underlying storage is overflow");
            top++;
            storage[top] = value;
        }

        T peek() {
            if (top == -1)
                throw string("Stack is empty");
            return storage[top];
        }

        void pop() {
            if (top == -1)
                throw string("Stack is empty");
            top--;
        }

        bool isEmpty() {
            return (top == -1);
        }

        ~Stack() {
            delete[] storage;
        }
};
