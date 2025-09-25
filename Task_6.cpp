#include <iostream>
#include <cmath>
using namespace std;
int main (){
 double A, B, C, D, K, T, x, y, z;
 cout << "Введите C, D, k, x, y, z: ";
 cin >>C>>D>>K>>x>>y>>z;
 A=x-y;
 B=sqrt(z);
 T=cos(x)+(A*A)/(K-C*D)-B;
 cout << "Ответ равен: "<<T;
return 0;

}