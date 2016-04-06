#ifndef proj1_h
#define proj1_h
#include<cstdio>
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
class polynomial
{
	public:
		polynomial();//constructor of class
		~polynomial();//class destructor
		void derivative();//counts derivative of given object
		friend ostream& operator<<(ostream &exit ,const polynomial &out);
		friend istream& operator>>(istream &input,polynomial &in);
		polynomial& operator+(const polynomial& added);
		polynomial& operator+=(const polynomial &added);
		polynomial& operator-(const polynomial &min);
		polynomial& operator-=(const polynomial &min);
        	void root();//counts roots of polynomial
	private:
		int deg_null;//contains polynomials part with degree of zero(1,2,3etc)
		int deg_one;//contains polynomials part with degree of one(x,2x,etc)
		int deg_two;//contains polynomials part with degree of two(deg_two*x^2)
};


#endif
