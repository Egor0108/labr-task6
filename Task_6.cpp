#include <iostream>
#include <cmath>
using namespace std;
int main (){
 double B, C, Q, K, D, p, n, x;
cout << "Чему равны K, D, p, n, x: ";
cin >>K>>D>>p>>n>>x;
B=cos(x);
C=p-n;
Q=(B*B)/(K*D)+B*C*C*C;
cout << "Ответ равен: "<<Q;
return 0;

}