#pragma once
#include <iostream>

namespace mathlib {
template<typename T>
	class Fraction {
	public:
		int numerator;
		int denominator;

		Fraction() = default;

		 Fraction(int numer, int denomer) {
			 numerator = numer;
			 denominator = denomer;
			 ensureDenomIsNotZero();
		}

		 void ensureDenomIsNotZero() {
			 if (denominator == 0) {
				 denominator = 1;
			 }
		 }

		 Fraction operator+(const Fraction& other) const {
			 T num = numerator * other.denominator + other.numerator * denominator;
			 T den = denominator * other.denominator;
			 return Fraction(num, den).Simplify();
		 }
		 Fraction operator-(const Fraction& other) const {
			 T num = numerator * other.denominator - other.numerator * denominator;
			 T den = denominator * other.denominator;
			 return Fraction(num, den).Simplify();
		 }
		 Fraction operator*(const Fraction& other) const {
			 T num = numerator * other.numerator;
			 T den = denominator * other.denominator;
			 return Fraction(num, den).Simplify();
		 }
		 Fraction operator/(const Fraction& other) const {
			 T num = numerator * other.numerator;
			 T den = denominator * other.denominator;
			 return Fraction(num, den).Simplify();
		 }

		 bool operator==(const Fraction& other) const {
			 Fraction a = this->Simplify();
			 Fraction b = other.Simplify();
			 return a.numerator == b.numerator && a.denominator == b.denominator;
		 }
		 bool operator!=(const Fraction& other) const {
			 return !(*this == other);
		 }
		 bool operator<(const Fraction& other) const {
		 return numerator * other.denominator < other.numerator * denominator;
		 }
		 bool operator>(const Fraction& other) const {
			 return numerator * other.denominator > other.numerator * denominator;
		 }
		 bool operator<=(const Fraction& other) const {
			 return !(*this < other);
		 }
		 bool operator>=(const Fraction& other) const {
			 return !(*this > other);
		 }

		 friend std::ostream& operator << (std::ostream& ostream, const Fraction<T>& p) {
			 ostream << p.numerator << "\\" << p.denominator;
			 return ostream;
		 }
		 friend std::istream& operator >> (std::istream& istream, Fraction<T>& p) {
			 istream >> p.numerator;
			 istream >> p.denominator;
			 p.ensureDenomIsNotZero();
			 return istream;
		 }

		 Fraction<T> Simplify() const {
			 T gcd = findGCD(std::abs(numerator), std::abs(denominator));
			 T SimplifiedNumerator = numerator / gcd;
			 T SimplifiedDenominator = denominator / gcd;

			 if (denominator < 0) {
				 SimplifiedNumerator = -SimplifiedNumerator;
				 SimplifiedDenominator = -SimplifiedDenominator;
			 }

			 return Fraction(SimplifiedNumerator, SimplifiedDenominator);
		 }

		 T findGCD(T a,T b) const {
			 while (b != 0) {
				 T temp = b;
				 b = a % b;
				 a = temp;
			 }
				 return a;
		 }

		 float toFloat() {
			 return static_cast<float>(numerator) / denominator;
		 }


	};
}

