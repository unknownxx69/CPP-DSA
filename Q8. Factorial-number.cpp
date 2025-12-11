#include <iostream>
using namespace std;
int main () {
    int n;
    int count = 1;
    cout<<"Enter the number: ";
    cin>>n;
    for (int i= 1; i <= n; i++) {
        count = count*i;
    }
    cout<<"The faction of "<<n<<" is "<<count;
    return 0;
}