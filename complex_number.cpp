#include <iostream>
using namespace std;

class complex
{
public:
    int real, imag;
    char ch;

public:
    void setdata(int a, int b);
    void display(void);
    void add(complex o1, complex o2)
    {
        real = o1.real + o2.real;
        imag = o1.imag + o2.imag;
        if (imag < 0)
            ch = '-';
        else
            ch = '+';
        cout << "Addition of these complex no is: " << real << ch << abs(imag) << "i" << endl;
    }
    void sub(complex o1, complex o2)
    {
        real = o1.real - o2.real;
        imag = o1.imag - o2.imag;
        if (imag < 0)
            ch = '-';
        else
            ch = '+';
        cout << "Substraction of these complex no is: " << real << ch << abs(imag) << "i" << endl;
    }
    void product(complex o1, complex o2)
    {
        real = o1.real * o2.real - o1.imag * o2.imag;
        imag = o1.real * o2.imag + o1.imag * o2.real;
        if (imag < 0)
            ch = '-';
        else
            ch = '+';
        cout << "Product of these complex no is: " << real << ch << abs(imag) << "i" << endl;
    }
    void conjugate(complex c)
    {
        real = c.real;
        imag = c.imag;
        if (imag < 0)
            ch = '+';
        else
            ch = '-';
        cout << "Conjugate of given complex no is: " << real << ch << imag << "i" << endl;
    }
};

void complex::setdata(int a1, int b1)
{
    real = a1;
    imag = b1;
}
void complex::display(void)
{
    cout << "complex number is " << real << "+" << imag << "i" << endl;
    ;
}

int main()
{
    complex c1, c2, c3;

    c1.setdata(3, 4);
    c2.setdata(5, 7);
    c1.display();
    c2.display();
    c1.conjugate(c1);
    c2.conjugate(c2);
    c3.add(c1, c2);
    c3.sub(c1, c2);
    c3.product(c1, c2);

    return 0;
}