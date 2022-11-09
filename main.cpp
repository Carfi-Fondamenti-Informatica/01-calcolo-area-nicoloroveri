#include <iostream>
using namespace std;
int main(){
float a = 0, b = 0, c = 0; 
cin >> a >> b >> c;
float area triangolo = 0, area quadrato = 0, area rettangolo = 0, area trapezio = 0;
area triangolo = ((a * b) / 2);
area quadrato = (a * a);
area rettangolo = (a * b);
area trapezio = (((a + b) * c) / 2);
cout << area triangolo <<endl;
cout << area quadrato <<endl;
cout << area rettangolo <<endl;
cout << area trapezio <<endl;                 
return 0;                 
}
