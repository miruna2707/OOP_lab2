#include "complex.h"

Complex::Complex(double x, double y) {
	this->real = x;
	this->imag = y;
}
double Complex::get_real() const {
	return this->real;
}

double Complex::get_imag() const {
	return this->imag;
}

void Complex::set_real(double x) {
	this->real = x;
}
void Complex::set_imag(double x) {
	this->imag = x;
}