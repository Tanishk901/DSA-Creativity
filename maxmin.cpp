#include <iostream>
using namespace std;


int getMax(int num[], int n) {

    int max = INT32_MIN;

    for(int i = 0; i < n ; i++) {
        if(num[i] > max) {
            max = num[i];
        }
    }

    //returning max value
    return max;
}

int main() {

    int size;
    cin >> size;

    int num[100];

    //taking input in array
    for ( int i = 0; i < size; i++){
        cin >> num[i];
    }
    cout << "Maximum value is  " << getMax(num, size) << endl;
    cout << "Minimum value is  " << getMax(num, size) << endl;


}
