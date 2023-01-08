#include <iostream>
using namespace std;
void OneBinaryNumber(int n)
{
    if(n<0)
    {
        return;
    }
    if (n %2 == n)
    {
        cout<<n;
        return;
    }
    OneBinaryNumber(n/2);
    cout<<n%2;
}
int main() {
    cout<<"Enter decimal number:";
    int n;
    cin>>n;
    cout<<"Your number in binary equals:\n";
    OneBinaryNumber(n);
}
