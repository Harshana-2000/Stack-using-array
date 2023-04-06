#include <iostream>

using namespace std;
#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

struct arrayStack {
    int size_;
    int stack_arr[MAX_SIZE];
    int top = -1;
};

bool isEmpty(struct arrayStack &stack_) {
    if (stack_.top == -1) {
        return true;
    }
    return false;
}

bool isFull(struct arrayStack &stack_) {
    if (stack_.top == stack_.size_ - 1) {
        return true;
    }
    return false;
}

void push(struct arrayStack &stack_, int element) {
    if (isFull(stack_)) {
        cout << "stack Overflow!\n";
        return;
    }
    stack_.top += 1;
    stack_.stack_arr[stack_.top] = element;
}

void pop(struct arrayStack &stack_) {
    if (isEmpty(stack_)) {
        cout << "stack Underflow!\n";
        return;
    }
    stack_.stack_arr[stack_.top] = 0;
    stack_.top -= 1;
}

void stackTop(struct arrayStack &stack_) {
    if (isEmpty(stack_)) {
        return;
    }
    cout << stack_.stack_arr[stack_.top];
}

void display(struct arrayStack &stack_) {
    if (isEmpty(stack_)) {
        return;
    }
    int current = stack_.top;
    cout << "[ ";
    while (current >= 1) {
        int elem = stack_.stack_arr[current];
        cout << elem << " ,";
        current -= 1;
    }
    cout << stack_.stack_arr[current]<<" ]\n";
}

int main() {
    // Example usage
    arrayStack my_stack;
    my_stack.size_ = 10;

    push(my_stack, 8);
    push(my_stack, 10);
    push(my_stack, 5);
    push(my_stack, 11);
    push(my_stack, 15);
    push(my_stack, 23);
    push(my_stack, 6);
    push(my_stack, 18);
    push(my_stack, 20);
    push(my_stack, 17);
    display(my_stack);
    pop(my_stack);
    pop(my_stack);
    pop(my_stack);
    pop(my_stack);
    pop(my_stack);
    display(my_stack);
    push(my_stack, 4);
    push(my_stack, 30);
    push(my_stack, 3);
    push(my_stack, 1);
    display(my_stack);
}

