#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>

class Complex {
private:
    double real;
    double imaginary;
public:
    Complex(double r, double c);
    Complex();
    ~Complex();
    Complex operator+(const Complex & c) const;
    Complex operator-(const Complex & c) const;
    Complex operator*(const Complex & c) const;
    Complex operator~() const;
    friend Complex operator*(double num, const Complex & c) {
        return Complex(c.real * num, c.imaginary * num);
    }
    friend std::ostream & operator<<(std::ostream & os, const Complex & s);
    friend std::istream & operator>>(std::istream & os, Complex & s);
};
#endif
