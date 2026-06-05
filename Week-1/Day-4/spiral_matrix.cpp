#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> matrix[i][j];
        }
    }
    int top = 0;
    int bottom = n-1;
    int left = 0;
    int right = m-1;
    vector <int> arr;
    while(top <= bottom && left <= right){
        for(int i=left;i<=right;i++){
            arr.push_back(matrix[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            arr.push_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                arr.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                arr.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    for(int i=0;i<n*m;i++){
        cout << arr[i] << " ";
    }
}