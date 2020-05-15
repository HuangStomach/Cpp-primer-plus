#include "4.stack.h"
/**
enum {MAX = 10};
Item * pitems;
int size;
int top;
 */
Stack::Stack(int n) {
    size = n;
    pitems = new Item[size + 1];
    top = 0;
}

Stack::Stack(const Stack & st) {
    size = st.size;
    pitems = new Item[size + 1];
    for (int i = 1; i <= st.top; i++) {
        pitems[i] = st.pitems[i];
    }
    top = st.top;
}

Stack::~Stack() {
    delete [] pitems;
}

bool Stack::isempty() const {
    return top == 0;
}

bool Stack::isfull() const {
    return top == size;
}

bool Stack::push(const Item & item) {
    if (isfull()) return false;
    pitems[++top] = item;
    return true;
}

bool Stack::pop(Item & item) {
    if (isempty()) return false;
    item = pitems[top--];
    return true;
}

Stack & Stack::operator=(const Stack & st) {
    delete [] pitems;
    size = st.size;
    pitems = new Item[size + 1];
    for (int i = 1; i <= st.top; i++) {
        pitems[i] = st.pitems[i];
    }
    top = st.top;
    return *this;
}
