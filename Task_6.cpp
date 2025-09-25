#include <iostream>
#include <cmath>
using namespace std;
int main (){
 double A, D, K, Y, B, n, m, x;
 cout << "Введите чему равны x, n, m, K: ";
 cin >>x>>n>>m>>K;
 A=abs(n+m);
 D=tan(x);
 Y=1.29+K/D+D*D;
 cout <<"Ответ равен: "<<Y;
 
 return 0;

}