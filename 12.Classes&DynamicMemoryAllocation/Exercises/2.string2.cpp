#include <cstring>
#include "2.string2.h"
using std::cin;
using std::cout;

int String::num_strings = 0;

int String::HowMany() {
    return num_strings;
}

String::String(const char * s) {
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}

String::String() {
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::String(const String & st) {
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
}

String::~String() {
    --num_strings;
    delete [] str;
}

void String::stringlow() {
    for (int i = 0; i < len; i++) {
        str[i] = tolower(str[i]);
    }
}

void String::stringup() {
    for (int i = 0; i < len; i++) {
        str[i] = toupper(str[i]);
    }
}

int String::has(char c) {
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] == c) j++;
    }
    return j;
}

String & String::operator=(const String & st) {
    if (this == &st) return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

String & String::operator=(const char * s) {
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

String & String::operator+(const String & st) {
    if (st.length() == 0) return *this;

    len += st.length();
    char * strs = new char[len + 1];
    strcat(strs, str);
    strcat(strs, st.str);
    delete [] str;
    str = new char[len + 1];
    std::strcpy(str, strs);
    delete [] strs;

    return *this;
}

String & String::operator+(const char * s) {
    len += strlen(s);
    char * strs = new char[len + 1];
    strcat(strs, str);
    strcat(strs, s);
    delete [] str;
    str = new char[len + 1];
    std::strcpy(str, strs);
    delete [] strs;

    return *this;
}

char & String::operator[](int i) {
    return str[i];
}

const char & String::operator[](int i) const {
    return str[i];
}

bool operator<(const String &st1, const String &st2) {
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2) {
    return (std::strcmp(st1.str, st2.str) > 0);
}

bool operator==(const String &st1, const String &st2) {
    return (std::strcmp(st1.str, st2.str) == 0);
}

ostream & operator<<(std::ostream & os, const String & st) {
    os << st.str;
    return os;
}

istream & operator>>(std::istream & is, String & st) {
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is) st = temp;
    while (is && is.get() != '\n') continue;
    return is;
}