#include <iostream>
using namespace std;

int main() {
int n=0,a=0, b=1, c;
cout<<"inserire un numero intero n"<<endl;
cin>>n;

do {
    c = a + b;
    cout << c << endl;
    b = a;
    a = c;
} while((a+b)<=n);

   return 0;
}
