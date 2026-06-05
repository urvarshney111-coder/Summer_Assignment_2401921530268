#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int ans[n];
    int l=0;
    int r=n-1;
    for(int i=n-1;i>=0;i--){
        if((abs(arr[l])>abs(arr[r]))){
            ans[i] = arr[l]*arr[l];
            l++;
        }
        else{
            ans[i] = arr[r]*arr[r];
            r--;
        }
    }
    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }
}
