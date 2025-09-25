#include <iostream>
#include <cmath>
using namespace std;
int main (){
 double A, D, C, K, x, y, S;
 cout << "Ведите чему равны x, y,C,K: ";
 cin >>x>>y>>C>>K;
 A=x+y;
 D=abs(C-A);
 S=10.1+A/C+D/(K*K);
 cout << "Ответ равен : "<<S;
  
 return 0;

}