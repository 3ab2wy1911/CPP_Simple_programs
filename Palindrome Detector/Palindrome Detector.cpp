#include <bits/stdc++.h>

using namespace std;
bool Is_palindrome()    //function to check the palindrome string.
{
    cout<<"Enter a string:\t";
    string input;   //Declare string variable.
    getline(cin,input); //getting string from user.
    input.erase(remove(input.begin(),input.end(),' '), input.end());   //deleting the spaces among the string.
    int len = input.size(); //Storing the length of the string.

    for (int i=0;i<len;i++)
    {
        input[i]= tolower(input[i]);    //Converting all the string to lower case.
    }

    string new_string;

   for (int i=len-1;i>=0;i--)
    {
        new_string.push_back(input[i]); //Filling the new string.
    }

    if (new_string == input)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main() {
    if(Is_palindrome())
    {
        cout<<"Yes, the string is palindrome\n";
    }
    else
    {
        cout<<"No, the string is not palindrome\n";
    }
}
