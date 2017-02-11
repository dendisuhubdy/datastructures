#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <vector>

using namespace std;

template <class T>
class Queue
{
    private:
        T head;
        T *storage;
    public:
        Queue() {
            storage = new int;
            head = -1;
        }

        void queue(T value) {
            head++;
            storage[head+1] = value;
        }

        T dequeue() {
            T temp = storage[head];
            head--;
            return temp;
        }

        bool isEmpty() {
            return (top == -1);
        }

        ~Queue() {
            delete[] storage;
        }
};           
