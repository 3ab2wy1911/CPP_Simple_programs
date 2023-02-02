#include<bits/stdc++.h>
using namespace std;

string Affine_Cipher_encr(string input)
{
    // A->0 .... Z->25
    // (5x +8) % 26 The encryption Equation.
    string output="";
    for (int i=0; i<input.size(); i++)
    {
        input[i]=toupper(input[i]);  // Turn the string to UpperCase
        if (input [i] >=65 and input[i]<= 90)
        {
            int x= input[i]-'A';
            output+=((5*x+8)%26)+'A';
        }
        else output+=input[i];
    }
    return output;

}
string Affine_Cipher_decr(string input)
{
    // A->0 .... Z->25
    // 21(y -8) % 26 The decryption Equation.
    string output="";
    int z,inv;
    for (int i = 0; i < 26; i++)
    {
        z = (5 * i) % 26;

        //Check if (a*i)%26 == 1,
                //then i will be the multiplicative inverse of a
        if (z == 1)
        {
            inv = i;
        }
    }
    for (int i=0; i<input.size(); i++)
    {
        input[i]=toupper(input[i]);  // Turn the string to UpperCase
        if (input [i] >=65 and input[i]<= 90)
        {
            int y= input[i]+'A';
            output+=((inv*(y-8)))%26+'A';
        }
        else output+=input[i];
    }
    return output;

}
int main()
{
    cout<<"Enter the String:";
    string input;
    getline(cin,input);
    cout<<"1.Encryption 2.Decryption \n";
    int ans;
    cin>>ans;
    if (ans==1)
    {
        cout<<Affine_Cipher_encr(input);
    }
    else if (ans == 2)
    {
        cout<<Affine_Cipher_decr(input);
    }
}
