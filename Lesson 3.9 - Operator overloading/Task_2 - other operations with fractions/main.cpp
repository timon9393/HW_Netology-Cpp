#include <iostream>
#include <Windows.h>

#define OUTPUT simp_frac(n_numerator, n_denominator); \
return Fraction(n_numerator, n_denominator);

bool Check_zero(int& target)
{
	return target == 0 ? true : false;
}

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		if(denominator >= 0)
		{
			numerator_ = numerator;
			denominator_ = denominator;
		}
		else
		{
			numerator_ = -numerator;
			denominator_ = -denominator;
		}
	}
	friend std::ostream& operator<<(std::ostream& out, const Fraction& fraction);
	
	Fraction operator+(const Fraction& right)
	{
		if (denominator_ == right.denominator_)
		{
			int n_numerator = numerator_ + right.numerator_;
			int n_denominator = denominator_;
			OUTPUT
		}
		else
		{
			int n_denominator = denominator_ * right.denominator_;
			int n_numerator = (numerator_ * right.denominator_) + (right.numerator_ * denominator_);
			OUTPUT
		}		
	}

	Fraction operator-(const Fraction& right)
	{
		if (denominator_ == right.denominator_)
		{
			int n_numerator = numerator_ - right.numerator_;
			int n_denominator = denominator_;
			OUTPUT
		}
		else
		{
			int n_denominator = denominator_ * right.denominator_;
			int n_numerator = (numerator_ * right.denominator_) - (right.numerator_ * denominator_);
			OUTPUT
		}
	}

	Fraction operator*(const Fraction& right)
	{		
		int n_numerator = numerator_ * right.numerator_;
		int n_denominator = denominator_ * right.denominator_;
		OUTPUT
	}

	Fraction operator/(const Fraction& right)
	{
		int n_numerator = numerator_ * right.denominator_;
		int n_denominator = denominator_ * right.numerator_;
		OUTPUT
	}

	Fraction operator-()
	{
		return Fraction(-numerator_, denominator_);
	}

	Fraction& operator++()
	{
		this->numerator_ += denominator_;
		this->denominator_ = denominator_;
		return *this;
	}

	Fraction& operator++(int)
	{
		Fraction temp(*this);
		this->numerator_ += denominator_;
		this->denominator_ = denominator_;
		return temp;
	}

	Fraction operator--()
	{
		this->numerator_ -= denominator_;
		this->denominator_ = denominator_;
		return *this;
	}

	Fraction operator--(int)
	{
		Fraction temp(*this);
		this->numerator_ -= denominator_;
		this->denominator_ = denominator_;
		return temp;
	}

	void print()
	{
		std::cout << numerator_ << " / " << denominator_;
	}

	void simp_frac(int& a, int& b)
	{
		if (a == 0 || b==0){}
		else
		{
			int c, min = abs(a) > abs(b) ? abs(b) : abs(a), max = abs(a) > abs(b) ? abs(a) : abs(b);
			do
			{
				c = max % min;
				if (c == 0) break;
				max = min;
				min = c;
			} while (c != 0);
			a /= min;
			b /= min;
		}
	}

	bool isZero()
	{
		return this->denominator_ == 0 ? true : false;
	}
};

std::ostream& operator<<(std::ostream& out, const Fraction& fraction)
{
	if (fraction.denominator_ == 0)
	{
		out << "";
		return out;
	}else if (fraction.numerator_ % fraction.denominator_ == 0)
	{
		out << fraction.numerator_ / fraction.denominator_;
		return out;
	}else
	{
		out << fraction.numerator_ << "/" << fraction.denominator_;
		return out;
	}
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int numerator1, numerator2, denominator1, denominator2;
	std::cout << "¬ведите числитель дроби 1: ";
	std::cin >> numerator1;
	std::cout << "¬ведите знаменатель дроби 1: ";
	std::cin >> denominator1;
	while (Check_zero(denominator1))
	{
		std::cout << "ќшибка! «наменатель равен 0!" << std::endl;
		std::cout << "¬ведите знаменатель дроби 1: ";
		std::cin >> denominator1;
	}
	std::cout << "¬ведите числитель дроби 2: ";
	std::cin >> numerator2;
	std::cout << "¬ведите знаменатель дроби 2: ";
	std::cin >> denominator2;
	while (Check_zero(denominator2))
	{
		std::cout << "ќшибка! «наменатель равен 0!" << std::endl;
		std::cout << "¬ведите знаменатель дроби 2: ";
		std::cin >> denominator2;
	}
	Fraction f1(numerator1, denominator1);
	Fraction f2(numerator2, denominator2);
	Fraction f3 = f1 + f2;
	std::cout << f1 << " + " << f2 << " = " << f3 << std::endl;

	f3 = f1 - f2;
	std::cout << f1 << " - " << f2 << " = " << f3 << std::endl;
	
	f3 = f1 * f2;
	std::cout << f1 << " * " << f2 << " = " << f3 << std::endl;

	f3 = f1 / f2;
	std::cout << f1 << " / " << f2 << " = " << (f3.isZero() ? "ќшибка" : "") << f3 << std::endl;

	std::cout << "++" << f1 << " * " << f2 << " = " << ++f1 * f2 << std::endl;
	std::cout << "«начение дроби 1 = " << f1 << std::endl;
	
	std::cout << f1 << "--" << " * " << f2 << " = " << f1-- * f2 << std::endl;
	std::cout << "«начение дроби 1 = " << f1 << std::endl;

	return 0;

}