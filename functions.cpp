#include<iostream>
using namespace std;
//void
//return
//parameterized
//non parameterized

// void printName(string name) {
//     cout << "Hey " << name << endl;
// }
// int main() {
//     string name;
//     cin >> name;
//     printName(name);

//     string name2;
//     cin >> name2;
//     printName(name2);

// ------------------------------------------------

// Take 2 numbers to print its sum

    // int sum(int num1, int num2) {
    //     int num3 = num1 + num2;
    //     return num3;                 // int and return
    // }

    // int main() {
    //     int num1, num2;
    //     cin >> num1 >> num2;
    //     int res = sum(num1, num2);
    //     cout << res;

    // void sum(int num1, int num2) {
    //     int num3 = num1 + num2;
    //     cout << num3;                   //void and cout
    // }

    // int main() {
    //     int num1, num2;
    //     cin >> num1 >> num2;
    //     sum(num1, num2);
    //     return 0;
//}

    int maxx(int num1, int num2) {
        if(num1 >= num2) return num1;
        
    }

    int main() {
        int num1, num2;
        cin >> num1 >> num2;
        int minimum = maxx(num1, num2);
        cout << "The Max Number is: " << minimum << endl;
        return 0;
}
