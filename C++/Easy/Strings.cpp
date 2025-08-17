#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
    cin >> a >> b;
   
    int len_a = a.size();
    int len_b = b.size();
    
    cout << len_a << " " << len_b << endl;
    cout << a+b << endl;
    
    char a1 = a[0];
    char b1 = b[0];
    a[0] = b1;
    b[0] = a1;
    
    cout << a << " " << b ;

  
    return 0;
}
