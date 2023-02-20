#include <bits/stdc++.h>
using namespace std;
string masculine [3]={"he","him","his"};
string general [3]={" or she"," or her"," or hers"};

string lower (string text)
{
    string out ="";
    for (auto & i : text)
    {
        out += tolower(i);
    }
    return out;
}
string convert(string text)
{
    string out;
    vector<string> temp;
    string word;
    bool check;
    int index;
    for (auto & i : text)
    {
        if ( (i>64 and i<91) or (i > 96 and i < 123))
        {
            word.push_back(i);
        }
        else
        {
            temp.push_back(word);
            word = "";
            word.push_back(i);
            temp.push_back(word);
            word = "";
            i++;
        }
    }
    for (auto &i : temp)
    {
        check = false;
        for (int j =0 ; j < 3; j++)
        {
            if (lower(i)==masculine[j])
            {
                check = true;
                index = j;
            }
        }
        if (check)
        {
            out += i;
            out += general[index];
        }
        else
        {
            out += i;
        }
    }
    return out;
}
int main() {
    string input;
    cout<<"Enter the text you want to convert :";
    getline(cin,input);
    cout<<"Your text after conversion : \n";
    cout<<convert(input);
}
