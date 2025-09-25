#include <iostream>
#include <cmath>
using namespace std;
int main (){
 double A, B, C, D, K, Y, x, z, p;
 cout <<"Введите чему равны x, z, p, K, C, D: ";
 cin >>x>>z>>p>>K>>C>>D;
 B=abs(p-x);
 A=sin(x)-z;
 Y=(A+B)*(A*B)-K/(C*D);
 cout << "Ответ равен : "<<Y;
return 0;

}