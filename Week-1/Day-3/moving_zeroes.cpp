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
    int j = 1;
    while(j<n){
        if(arr[i] == 0 && arr[j] != 0){
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        else if(arr[i] == 0 && arr[j] == 0) j++;
        else{
            i++;
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}