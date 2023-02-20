//24/10/2022
#include<iostream>
#include<vector>
#include <utility>
#include<algorithm>
using namespace std;
bool sortbysec(const pair<string,int> &a,
              const pair<string,int> &b)
{
    return (a.second > b.second);
}

int main(){
    int answer=0;
    int score;
    vector < pair < string , int>> s;
    s.push_back(make_pair("Mohamed",100));
    s.push_back(make_pair("Ali",50));
    s.push_back(make_pair("Omar",70));
    s.push_back(make_pair("Mahmoud",58));
    s.push_back(make_pair("Yasser",80));
    s.push_back(make_pair("shabaan",15));
    s.push_back(make_pair("omar",99));
    s.push_back(make_pair("Mohamed",66));
    s.push_back(make_pair("Aymen",95));
    s.push_back(make_pair("Ahmed",10));
    sort(s.begin(), s.end(), sortbysec);
    string name;
    while (answer!=4){
        cout<<"What do you want to do ?\n";
        cout<<"1.Add new playe\n2.Print top 10\n3.Search for player's highest score\n4.exit\n";
        cin>>answer;
         if(answer==1){
            cout<<"Enter player name: ";
            cin>>name;
            cout<<"Enter player's score: ";
            cin>>score;
            if(score>s[9].second){
                s[9].first=name;
                s[9].second=score;
                sort(s.begin(),s.end(), sortbysec);
            }
        }
        else if(answer==2){
            for(int i=0; i<10;i++){
                cout<<s[i].first<<'\t'<<s[i].second<<endl;
            }
        }
        else if (answer==3){
                bool check;
                cout<<"Enter player name: ";
                cin>>name;
                for(int i=0; i<10;i++){
                        if(name==s[i].first){
                            cout<<s[i].first<<'\t'<<s[i].second<<endl;
                            check=true;
                            break;
                        }
                        else
                            check=false;
                }
                if (check==false)
                    cout<<"The player is not in top 10\n";

        }
    }
}

