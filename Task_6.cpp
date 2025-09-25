#include <iostream>
#include <cmath>
using namespace std;
int main (){
 double A, B, C, D, Y, x, k, z;
 cout<< "Введите чему равны x, z, k, C, D : ";
cin >>x>>z>>k>>C>>D;
A=log(x)-k;
B=sqrt(z);
Y=D*D+(C*C)/(0.75*A)+B;
cout << "Ответ равен: "<<Y;
return 0;

}