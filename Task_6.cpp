#include <iostream>
#include <cmath>
using namespace std;
int main (){
 double A, B, x, d, C, K, Y;
 cout << "Введите чему равны x, d, C, K: ";
 cin >>x>>d>>C>>K;
 A=log10(x);
 B=x+exp(d);
 Y=(A+B)-(C*C)/K;
 cout << "Ответ равен: "<<Y;

 return 0;

}