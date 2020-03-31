#ifndef LIST_H_
#define LIST_H_

#include <string>

struct book {
    std::string name;
    int pages;
};
typedef struct book Item;

class List {
    private:
        enum { MAX = 10 };
        Item items[MAX];
        int num;
    public:
        List();
        bool isEmpty() const;
        bool isFull() const;
        int count() const;
        bool add(const Item & item);
        void visit(void (*pf)(Item &));
};

#endif