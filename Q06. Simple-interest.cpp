#include <iostream>
using namespace std;
int main () {
    int p;
    int r;
    int t;
    cout<<"Enter Principal: ";
    cin>>p;
    cout<<"Enter Rate: ";
    cin>>r;
    cout<<"Enter Time: ";
    cin>>t;
    int interest;
    interest = (p*r*t) / 100;
    cout<<"The interest is: "<<interest;
    return 0;
}
