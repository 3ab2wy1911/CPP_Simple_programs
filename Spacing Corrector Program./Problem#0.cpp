#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    char S[100];
    int len=0;
    string str,o;
    cout<<"Enter your sentence :"<<endl;
    getline(cin, str);
    len = str.length();
    strcpy(S, str.c_str());
    for(int i = 0; i<len; i++){
        if(S[i]==' ' && S[i+1]==' ')
            continue;
        if(S[i]!=' ')
        {
            o+=S[i];
        }
        else
        {
        o+=S[i];
        }
    }
    o[0]=toupper(S[0]);
    cout<<"Your sentence after correction : "<<endl;
    cout<<o;
    return 0;
}
