#include <iostream>
#include <cmath>
using namespace std;
int main (){
 double A , p, B, K, D, C, x, Y;
 cout << "Введите чему равны K, D, C, p, x: ";
 cin >>K>>D>>C>>x;
 A=x+sin(p);
 B=exp(K);
 Y=1+K*K/2*A*B-B+D*C;
 cout <<"Ответ равен: "<<Y;
return 0;

}