#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m, r, c;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> mat[i][j];
        }
    }
    cin >> r >> c;
    int o = n*m;
    vector <int> arr(o);
    vector <vector<int>> matrix(r,vector <int>(c));
    int idx = 0;
    if(o == r*c){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[idx] = mat[i][j];
                idx++;
            }  
        }
        for(int i = 0;i < o; i++){
            int rowidx = i/c;
            int colidx = i%c;
            matrix[rowidx][colidx] = arr[i];
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout << matrix[i][j] << " ";
            }
        }
    }
    else{
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout << matrix[i][j] << " ";
            }
        }
    }
}