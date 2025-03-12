#include <stack>
using namespace std;

class MyQueue {
private:
    stack<int> input, output;

    void transfer() {
        while (!input.empty()) {
            output.push(input.top());
            input.pop();
        }
    }

public:
    MyQueue() {}

    void push(int x) {
        input.push(x);
    }

    int pop() {
        if (output.empty()) transfer();
        int front = output.top();
        output.pop();
        return front;
    }

    int peek() {
        if (output.empty()) transfer();
        return output.top();
    }

    bool empty() {
        return input.empty() && output.empty();
    }
};
