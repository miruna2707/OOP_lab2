#pragma once
#pragma once
class Complex {
private:
	double real = 0;
	double imag = 0;

public:
	//constructor
	Complex(double real, double imag);

	//real
	double get_real()const;
	void set_real(double real);

	//imag
	double get_imag()const;
	void set_imag(double imag);
};