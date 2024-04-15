#include <iostream>
using namespace std;

// void printArray() {

// }

// int main() {

//     int number[15];

//     //accessing an array
//     cout << "Value at 14  index " << number[14] << endl;

    //cout << "Value at 20 index " << number[20] << endl;

//     //initialising an array
//     int second[3] = {5, 7, 11};


//     //accessing an array
//     cout << "Value at 2" << second[3] << endl;
//     cout << "Value at 1" << second[3] << endl;
//     cout << "Value at 0" << second[3] << endl;


//     cout << "Value at 2 index " << second[3] << endl;
//     cout << "Value at 1 index " << second[3] << endl;
//     cout << "Value at 0 index " << second[3] << endl;

//     //another one
//     cout << "Value at 2" << second[2] << endl;
//     cout << "Value at 1" << second[1] << endl;
//     cout << "Value at 0" << second[0] << endl;


//     cout << "Value at 2 index " << second[2] << endl;
//     cout << "Value at 1 index " << second[1] << endl;
//     cout << "Value at 0 index " << second[0] << endl << endl;


//     int third[15] = {2,7};

//     //print the array
//     cout << "Value at 2 index " << third[2] << endl;
//     cout << "Value at 1 index " << third[1] << endl;
//     cout << "Value at 0 index " << third[0] << endl << endl;

//     //once more
//     cout << "Value at 3 index " << third[3] << endl;
//     cout << "Value at 4 index " << third[15] << endl;
//     cout << "Value at 15 index " << third[15] << endl << endl << endl;

//     int n = 15;
//     cout<<" Printing the array " << endl;
//     //print the array
//     for(int i = 0; i<n; i++) {
//         cout << third[i] << " ";
//     }

//     //initialising all locations with 0 
//     int fourth[10] = {0};
//     n = 10; 
//     cout<<" Printing the array " << endl;
//     //print the array
//     for(int i = 0; i<n; i++) {
//         cout << fourth[i] << " ";
//     }

//      //initialising all locations with 0 (not possible with below line)
//     int fifth[10] = {1};
//     n = 10; 
//     cout<<" Printing the array " << endl;
//     //print the array
//     for(int i = 0; i<n; i++) {
//         cout << fifth[i] << "  ";
//     }


//      //initialising all locations with 0 (not possible with below line)
//     int sixth[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
//     n = 10; 
//     cout<<" Printing the array " << endl;
//     //print the array
//     for(int i = 0; i<n; i++) {
//         cout << sixth[i] << "  ";
//     }

//  //initialising all locations with 0 (not possible with below line)
//     int seventh[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
//     n = 10; 
//     cout<<" Printing the array " << endl;
//     //print the array
//     for(int i = 0; i<n; i++) {
//         seventh[i] = 1;
//     }

//____________________________________________________________________________________________________


// void printArray(int arr[], int size) {

//     cout << "Printing The Array" << endl;
//     //print the array
//     for(int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "Printing Done" << endl;
// }

// int main() {

//     int number[15];


//     int third[15] = {2, 7 };
//     int n = 15;
//     printArray(third, 15);

//     int fourth[10] = {0};
//     n = 10;
//     printArray(fourth, 15);

 
// ___________________________________________________________________


void printArray(int arr[], int size) {
    cout << "Printing The Array" << endl;
    //print the array
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "Printing Done" << endl;
}


int main() {

//     int number[15];

//     //accessing an array
//     cout << "Value at 14  index " << number[14] << endl;

    //cout << "Value at 20 index " << number[20] << endl;

//     //initialising an array
    int second[3] = {5, 7, 11};


//     //accessing an array
//     cout << "Value at 2" << second[3] << endl;
//     cout << "Value at 1" << second[3] << endl;
//     cout << "Value at 0" << second[3] << endl;


//     cout << "Value at 2 index " << second[3] << endl;
//     cout << "Value at 1 index " << second[3] << endl;
//     cout << "Value at 0 index " << second[3] << endl;

//     //another one
//     cout << "Value at 2" << second[2] << endl;
//     cout << "Value at 1" << second[1] << endl;
//     cout << "Value at 0" << second[0] << endl;


//     cout << "Value at 2 index " << second[2] << endl;
//     cout << "Value at 1 index " << second[1] << endl;
//     cout << "Value at 0 index " << second[0] << endl << endl;


    int third[15] = {2,7};

//     //print the array
//     cout << "Value at 2 index " << third[2] << endl;
//     cout << "Value at 1 index " << third[1] << endl;
//     cout << "Value at 0 index " << third[0] << endl << endl;

//     //once more
//     cout << "Value at 3 index " << third[3] << endl;
//     cout << "Value at 4 index " << third[15] << endl;
//     cout << "Value at 15 index " << third[15] << endl << endl << endl;

    int n = 15;
    // printArray(third, 15);
    int thirdSize = sizeof(third)/sizeof(int);
    cout << "Size of Third is " << thirdSize << endl; 

   // initialising all locations with 0 
    int fourth[10] = {0};
    n = 10;
    // printArray(fourth, 10);

    int fifth[10] = {1};
    n = 10; 
    // printArray(fifth, 10);

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout << "Size of Fifth is " << fifthSize << endl; 



    char ch[5] = {'a', 'b', 'c' , 'r','p' };
    cout << ch[3] << endl;
    cout << ch[1] << endl;
    cout << ch[2] << endl;
    cout << ch[4] << endl;
    cout << ch[5] << endl;
    cout << ch[0] << endl;
    

    cout << "Printing The Array" << endl;
    //print the array
    for(int i = 0; i < 5; i++) {
        cout << ch[i] << " ";
    }
    cout << "Printing Done" << endl;
    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];
    

    cout << endl << "Everything is Fine " << endl << endl;
}