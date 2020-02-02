#include <iostream>

using namespace std;
const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main(int argc, char const *argv[]) {
    cout << "Enter class size:";
    int class_size;
    cin >> class_size;

    while (cin.get() != '\n') continue;

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++) {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done" << endl;
    
    return 0;
}

int getinfo(student pa[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        cout << "name:";
        if (cin.get() == '\n') break;
        cin.getline(pa[i].fullname, SLEN);
        while (cin.get() != '\n') continue;

        cout << "hobby:";
        cin.getline(pa[i].hobby, SLEN);
        while (cin.get() != '\n') continue;

        cout << "ooplevel:";
        cin >> pa[i].ooplevel;
        while (cin.get() != '\n') continue;
    }
    
    return i;
}

void display1(student st) {
    cout << "name:";
    cout << st.fullname << endl;

    cout << "hobby:";
    cout << st.hobby << endl;
    
    cout << "ooplevel:";
    cout << st.ooplevel << endl;
}

void display2(const student * ps) {
    cout << "name:";
    cout << ps->fullname << endl;

    cout << "hobby:";
    cout << ps->hobby << endl;
    
    cout << "ooplevel:";
    cout << ps->ooplevel << endl;
}

void display3(const student pa[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        cout << "name:";
        cout << pa[i].fullname << endl;

        cout << "hobby:";
        cout << pa[i].hobby << endl;
        
        cout << "ooplevel:";
        cout << pa[i].ooplevel << endl;
    }
}