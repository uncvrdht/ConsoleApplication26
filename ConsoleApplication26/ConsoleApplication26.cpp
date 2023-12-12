#include <iostream>
using namespace std;
class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int denom) {
        setNumerator(num);
        setDenominator(denom);
    }

    // Сеттеры
    void setNumerator(int num) {
        numerator = num;
    }

    void setDenominator(int denom) {
        if (denom != 0) {
            denominator = denom;
        }
        else {
             cout << "Denominator cannot be zero." <<  "\n";
        }
    }

    // Геттеры
    int getNumerator() const {
        return numerator;
    }

    int getDenominator() const {
        return denominator;
    }
};

// Перегрузка оператора >
bool operator>(const Fraction& a, const Fraction& b) {
    return a.getNumerator() * b.getDenominator() > b.getNumerator() * a.getDenominator();
}

// Перегрузка оператора ==
bool operator==(const Fraction& a, const Fraction& b) {
    return a.getNumerator() * b.getDenominator() == b.getNumerator() * a.getDenominator();
}

// Перегрузка оператора !=
bool operator!=(const Fraction& a, const Fraction& b) {
    return !(a == b);
}

int main() {
    Fraction a(1, 2);
    Fraction b(1, 3);

    if (a > b) {
         cout << "a > b" <<  "\n";
    }
    else {
         cout << "a <= b" <<  "\n";
    }

    if (a == b) {
         cout << "a == b" <<  "\n";
    }
    else {
         cout << "a != b" <<  "\n";
    }

    if (a != b) {
         cout << "a != b" <<  "\n";
    }
    else {
         cout << "a == b" <<  "\n";
    }

    return 0;
}