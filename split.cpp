#include <bits/stdc++.h>
using namespace std;
vector <string> split(string target, string delimiter)
{
    vector <string> result;
    string temp ;
    for (auto & i : target)
    {
        if(i!=delimiter[0])
        {
            temp.push_back(i);
        }
        else
        {
            result.push_back(temp);
            i++;
            temp ="";
        }
    }
    return result;
}
int main()
{
    string text;
    string delimiter;
    cout<<"Enter the text you want to split:";
    getline(cin,text);
    cout<<"Enter the delimiter:";
    getline(cin,delimiter);
    vector<string> out =  split(text,delimiter);
   cout<<"Your text after splitting it:\n";
    for (auto & i : out)
    {
        cout<<i<<" ";
    }
}
