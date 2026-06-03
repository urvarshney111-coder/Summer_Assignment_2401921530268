#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int i = 0;
    int j = n-1;
    int maxi = 0;
    while(i<j){
        int area = min(arr[i],arr[j]) * (j-i);
        maxi = max(maxi, area);
        arr[i]<arr[j]? i++:j--;
    }
    cout << maxi;
}
