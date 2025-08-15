#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size, Q, n;
    vector<int> :: iterator index;
    cin >> size;
    vector<int> v(size);
    
    for (int i=0; i<size; i++){
        cin >> v[i];
    }
    
    cin >> Q;
    
    for (int i=0; i<Q; i++){
        cin >> n;
        index = lower_bound(v.begin(),v.end(),n);
        if(v.at(index-v.begin())==n)
            cout << "Yes " << (index-v.begin()+1) << endl;
        else
            cout << "No " << (index-v.begin()+1) << endl;
    }
    return 0;
}

