#include <bits/stdc++.h>
using namespace std;
string Casear_Cipher_E(string input,int shift)
{
    if (abs(shift)>26)
        shift%=26;
    if(shift<0)
        shift+=26;
    int len = input.size();
    string output=input;
    for (int i=0;i<len;i++)
    {
        output[i]=toupper(output[i]);  // Turn the string to UpperCase
        if (output [i] >=65 and output[i]<= 90)
        {
         if(output[i]+shift<='Z')
                output[i]+=shift;
            else
            {
                output[i]='A'+(shift-('Z'-input[i])-1);
            }
        }
    }
    return output;
}
string Casear_Cipher_D(string input,int shift)
{
    if (abs(shift)>26)
        shift%=26;
    if(shift<0)
        shift+=26;
    int len = input.size();
    string output=input;
    for (int i=0;i<len;i++)
    {
        output[i]=toupper(output[i]);  // Turn the string to UpperCase
        if (output [i] >=65 and output[i]<= 90)
        {
            if(output[i]-shift>='A')
                output[i]-=shift;
            else
            {
                output[i]='Z'-(shift-(abs('A'-input[i]))-1);
            }
        }
    }
    return output;
}
int main() {
    cout<<"1.Encryption 2. Decryption:";
    int answer;
    cin>>answer;
    int shift;
    cout<<"Enter your shift key:";
    cin>>shift;
    cin.ignore();
    cout<<"Enter Your string:";
    string input;
    getline(cin,input);
    cout<<"Your String after shifting: ";
    if(answer==1)
    {
        cout<<Casear_Cipher_E(input,shift);
    }
    else if(answer==2)
    {
        cout<<Casear_Cipher_D(input,shift);
    }
}
