#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map<string, int> m;
    int Q_count;
    cin >> Q_count;
    int Query_Num, Mark;
    string StudentName;
    
    for (int i=0; i<Q_count; i++){
        
        cin >> Query_Num >> StudentName;
        switch (Query_Num) {
            
            case 1 :
              cin >> Mark;
              if (m.find(StudentName) == m.end())
                m.insert(make_pair(StudentName, Mark));
              else 
                m[StudentName] += Mark;
              break;
            case 2 :
              m.erase(StudentName);
              break;
            case 3:
              Mark = m[StudentName];
              cout << Mark << endl;
            }
        }
    return 0;
}

