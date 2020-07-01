#include "3.dma.h"
#include <cstring>

ABC::ABC(const char * l, int r) {
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

ABC::ABC(const ABC & rs) {
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

ABC::~ABC() {
    delete []label;
}

ABC & ABC::operator=(const ABC & rs) {
    if (this == &rs) return *this;
    delete []label;
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

void ABC::View() const {
    std::cout << "Label: " << label << std::endl;
    std::cout << "Rating: " << rating << std::endl;
}

std::ostream & operator<<(std::ostream & os, const ABC & rs) {
    os << "Label: " << rs.label << std::endl;
    os << "Rating: " << rs.rating << std::endl;
    return os;
}

baseDMA::baseDMA(const char * l, int r) :ABC(l, r) {}

baseDMA::baseDMA(const baseDMA & rs) :ABC(rs) {}

void baseDMA::View() const {
    ABC::View();
}

std::ostream & operator<<(std::ostream & os, const baseDMA & rs) {
    os << (const ABC &)rs << std::endl;
    return os;
}

lacksDMA::lacksDMA(const char * c, const char * l, int r): ABC(l, r) {
    std::strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char * c, const baseDMA & rs): ABC(rs) {
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

void lacksDMA::View() const {
    ABC::View();
    std::cout << "Color: " << color << std::endl;
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & ls) {
    os << (const baseDMA &)ls << std::endl;
    os << "Color: " << ls.color << std::endl;
    return os;
}

hasDMA::hasDMA(const char * s, const char * l, int r): ABC(l, r) {
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const baseDMA & rs): ABC(rs) {
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs): ABC(hs) {
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

hasDMA::~hasDMA() {
    delete []style;
}

hasDMA & hasDMA::operator=(const hasDMA & hs) {
    if (this == &hs) return *this;
    ABC::operator=(hs);
    delete []style;
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
    return *this;
}

void hasDMA::View() const {
    ABC::View();
    std::cout << "Style: " << style << std::endl;
}

std::ostream & operator<<(std::ostream & os, const hasDMA & hs) {
    os << (const ABC &) hs;
    os << "Style: " << hs.style << std::endl;
    return os;
}