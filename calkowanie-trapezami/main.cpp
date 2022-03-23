#include <iostream>
using namespace std;

float f(float x)
{
    return x*x+1;
}

int main()
{
    float a=0;
    float b=0;
    int liczbaprost=0;
    
    
    cout << "Podaj liczbe poczatkowa: ";
    cin >> a;
    cout << "Podaj liczbe koncowa: ";
    cin >> b;
    cout << "Podaj liczbe prostokatow: ";
    cin >> liczbaprost;
    
    
    float d=(b-a)/liczbaprost;
    //f(x)=x^2 + 1
    float wynik=0;
    
    for (float i=a; i<b; i+=d) {
        wynik += (((f(i)+f(i+d))*d)/2);
    }
    
    cout << "wynik to: " << wynik << endl;
    
    return 0;
}
