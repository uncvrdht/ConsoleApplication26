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
             cout << "Denominator cannot be zero." <<  endl;
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
         cout << "a > b" <<  endl;
    }
    else {
         cout << "a <= b" <<  endl;
    }

    if (a == b) {
         cout << "a == b" <<  endl;
    }
    else {
         cout << "a != b" <<  endl;
    }

    if (a != b) {
         cout << "a != b" <<  endl;
    }
    else {
         cout << "a == b" <<  endl;
    }

    return 0;
}