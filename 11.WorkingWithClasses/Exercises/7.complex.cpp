#include "7.complex.h"

Complex::Complex(double r, double c) {
    real = r;
    imaginary = c;
}

Complex::Complex() {
    real = imaginary = 0.0;
}

Complex::~Complex() {
}

Complex Complex::operator+(const Complex & c) const {
    Complex temp;
    temp.real = real + c.real;
    temp.imaginary = imaginary + c.imaginary;
    return temp;
};

Complex Complex::operator-(const Complex & c) const {
    Complex temp;
    temp.real = real - c.real;
    temp.imaginary = imaginary - c.imaginary;
    return temp;
};

Complex Complex::operator*(const Complex & c) const {
    Complex temp;
    temp.real = (real * c.real) - (imaginary * c.imaginary);
    temp.imaginary =(real * c.real) + (imaginary * c.imaginary);
    return temp;
};

Complex Complex::operator~() const {
    Complex temp;
    temp.real = real;
    temp.imaginary = -imaginary;
    return temp;
};

std::ostream & operator<<(std::ostream & os, const Complex & t) {
    os << " (" << t.real << ", " << t.imaginary << "i)";
    return os;
}

std::istream & operator>>(std::istream & is, Complex & t) {
    double r, i;
    std::cout << "real: ";
    is >> r;
    std::cout << "imaginary: ";
    is >> i;
    t = Complex(r, i);
    return is;
}
