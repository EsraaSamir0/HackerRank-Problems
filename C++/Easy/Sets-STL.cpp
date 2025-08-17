#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s;
    int count;
    cin >> count;
    int query, number;
    
    for (int i=0; i<count; i++){
        cin >> query >> number;
        
        switch (query) {
            case 1 :
              s.insert(number);
              break;
            case 2 :
              s.erase(number);
              break;
            case 3:
              if (s.find(number) == s.end()){
                cout << "No" << endl;
              }
              else {
                cout << "Yes" << endl;
              }
            }
        }
    
    return 0;
}




