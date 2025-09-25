#include <iostream>
#include <cmath>
using namespace std;
int main (){
 double A, D, K, Y, B, n, m, x, y;
 cout << "Введите чему равны x, n, m, K: ";
 cin >>x>>n>>m>>K;
 y=n+m;
 A=abs(y);
 D=tan(x);
 Y=1,29+K/D+D*D;
 cout <<"Ответ равен: "<<Y;
 
 return 0;

}