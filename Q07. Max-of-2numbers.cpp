#include <iostream> 
using namespace std;
int main () {
    int a;
    int b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    if (a>b) {
        cout<<a<<" is the maximum.";
    }
    else {
        cout<<b<<" is the maximum.";
    }
    return 0;
}
