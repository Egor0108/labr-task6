#include <iostream>
#include <cmath>
using namespace std;
int main (){
 double A, b, D, S, x;
 cout << "Введите чему равны D, x: ";
 cin >>D>>x;
b=x+D;
A=D*x/b;
S=(A*A+b*cos(x))/(D*D*D+(A+D-b));
cout << "Ответ равен: "<<S;
return 0;

}