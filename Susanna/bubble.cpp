#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
int n, b;
cout << "Nermuceq zangvaci chap@" << endl;
cin >> n;
int a[n];
cout << "Zangvac@ hetevyaln e" << endl;
srand(time(NULL));
for(int i = 0; i < n; ++i){
a[i] = 1 + rand() % 1000;
cout << a[i] << "  ";
}
cout << endl;
for(int i = n-1; i >= 0; --i){
for(int j = 0; j <= i; ++j){
if(a[j] > a[j+1]){
b = a[j];
a[j] = a[j+1];
a[j+1] = b;
}
}
}
cout << "Zangvaci elementner@ achman kargov" << endl;
for(int i = 0; i < n; ++i){
cout << a[i] << "  ";
}
cout << endl << "Zangvaci elementner@ nvazman kargov" << endl;
for(int i = n-1; i >= 0; --i){
cout << a[i] << "  ";
}
cout << endl;
return 0;
}
