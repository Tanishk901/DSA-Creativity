#include <iostream>
using namespace std;
/*
int main() {
    int arr[5];
    for(int i = 0; i<=4; i = i + 1){
        cout << i << endl;
        cin >> arr[i];
    }

    for(int i = 0; i <=4; i=i+1){
        cout << arr[i] << " ";
    }
} */
void doSomething(int arr[], int n){
    arr[0] += 100;
    cout << "value inside function: " << arr[0] << endl;

}
int main() {
    int n = 5;
    int arr[n];
    for(int i = 0; i<=n; i = i + 1){
        cin >> arr[i];
    }

    doSomething(arr, n);
    cout << "value inside int main: " << arr[0] << endl;
}