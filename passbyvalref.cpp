#include <iostream>
using namespace std;

//pass by value
// void doSomething(int num) {
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }
// int main() { 
//     int num = 10;
//     doSomething(num);
//     cout << num << endl;

    //pass by reference
//     void doSomething(string &s) {
//         s[0] = 'K';
//         cout << s << endl;
   
// }
// int main() { 
//     string s = "Tanishk";
//     doSomething(s);
//     cout << s << endl;

void doSomething(int &num) {
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
    }

int main() { 
    int num = 10;
    doSomething(num);
    cout << num << endl;




    return 0;
}