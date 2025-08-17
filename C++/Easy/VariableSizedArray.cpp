#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int rows,queries;
    cin >> rows >> queries;
    vector<vector<int>> arr(rows);
     
     for (int i=0; i<rows; i++){
        int cols;
        cin >> cols;
        arr[i].resize(cols);
        
        for (int j=0; j<cols; j++){
            cin >> arr[i][j];
        }
     }
     
     for (int i=0; i<queries; i++){
        int x, y;
        cin >> x >> y;
        cout << arr[x][y] << endl;
     }

    
    return 0;
}
