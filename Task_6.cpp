#include <iostream>
#include <cmath>
using namespace std;
int main (){
 double A, B, C, D, K, Y, x, p, h;
 cout << "Введите чему  равны x, p, h, K, D: ";
 cin >>x>>p>>h>>K>>D;
 A=x-p;
 B=log(h);
 Y=0.78*B +(A*A*A)/(K*C*D);
 cout << "Ответ равен: "<<Y;
 
 return 0;

}