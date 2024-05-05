#include<iostream>
using namespace std;

class Complex {
    float a1, b1i, a2, b2i;
public:
    void getinfo(float a1, float b1i, float a2, float b2i) {
        this->a1 = a1;
        this->b1i = b1i;
        this->b2i = b2i;
        this->a2 = a2;
    }
    void product() {
        int a = ((a1 * a2) + ((b2i * b1i) * (-1)));
        int b = ((a1 * b2i) + (b1i * a2));
        (b > 0) ? cout << a << "+" << b << "i" : cout << a << b << "i";
    }
    void sum(){
    	int a = (a1+a2);
    	int b = (b1i+b2i);
    	(b>0) ? cout << a << "+" << b << "i" : cout << a << b << "i";
    }
    void sub(){
    	int a =(a1-a2);
    	int b = (b1i-b2i);
    	(b>0) ? cout << a << "+" << b << "i" : cout << a << b << "i";
    }
    };
int main(void) {
    Complex a1;
    float a1_real, a1_imaginary, a2_real, a2_imaginary;
    cout << "Please enter the a1_real, a1_imaginary separated: ";
    cin >> a1_real >> a1_imaginary;
    cout << "Please enter the a2_real, a2_imaginary separated: ";
    cin >> a2_real >> a2_imaginary;
    a1.getinfo(a1_real, a1_imaginary, a2_real, a2_imaginary);
    cout<<"SUM: ";
    a1.sum();
    cout<<"\n";
    cout<<"SUB: ";
    a1.sub();
    cout<<"\n";
    cout<<"Product: ";
    a1.product();
}
//24-56547-1
