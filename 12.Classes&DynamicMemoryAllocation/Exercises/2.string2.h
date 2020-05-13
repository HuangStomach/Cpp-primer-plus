#include <iostream>
#include <cctype>
#ifndef STRNG1_H_
#define STRNG1_H_

using std::ostream;
using std::istream;

class String {
private:
    char * str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
public:
    String(const char * s);
    String();
    String(const String &);
    ~String();
    int length() const { return len; };
    void stringlow();
    void stringup();
    int has(char);

    String & operator=(const String &);
    String & operator=(const char *);
    String & operator+(const String &);
    String & operator+(const char *);
    char & operator[](int i);
    const char & operator[](int i) const;

    friend bool operator<(const String &st, const String &st2);
    friend bool operator>(const String &st1, const String &st2);
    friend bool operator==(const String &st, const String &st2);
    friend String & operator+(const char * c, String &st1) { return st1 + c;}

    friend std::ostream & operator<<(std::ostream & os, const String & st);
    friend std::istream & operator>>(std::istream & is, String & st);

    static int HowMany();
};
#endif