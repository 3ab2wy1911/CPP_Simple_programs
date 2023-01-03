#include <bits/stdc++.h>
using namespace std;

bool hasSubsequence(const string& text , const string& subseq)
{
    int c = 0;
    int ind = INT_MIN ;
    for (int i =0 ; i< subseq.size();i++)
    {
        for (int j=0;j<text.size();j++)
        {
            if (subseq[i] == text[j] and j > ind)
            {
                c++;
                ind = j;
                break;
            }
        }
    }
    if (c==subseq.size())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main() {
    cout<<"Enter Text:\n";
    string text;
    getline(cin,text);
    string sub;
    cout<<"Enter Subsequence:\n";
    getline(cin,sub);
    if (hasSubsequence(text,sub))
    {
        cout<<sub<<" is a subsequence of "<<text<<endl;
    }
    else
    {
        cout<<sub<<" is not a subsequence of "<<text<<endl;
    }
}
