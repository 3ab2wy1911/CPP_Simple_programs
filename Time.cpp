#include <iostream>
using namespace std;
int main()
{
    int h,m,s;
   cout<<"Please, Enter the number of hours: \n";
   cin>>h;
  while(cin.fail()){
     cout << "Please, Enter valid number of hours:\n";
     cin.clear();
     cin.ignore();
    cin>>h;
}
    cout << "Please, Enter the number of minutes: \n";
    cin>>m;
  while(cin.fail()){
     cin.clear();
     cin.ignore();
    cout << "Please, Enter valid number of minutes:\n";
    cin>>m;
}
	cout << "Please, Enter the number of seconds: \n";
	cin>>s;
 while(cin.fail()){
     cin.clear();
     cin.ignore();
    cout << "Please, Enter valid number of seconds:\n";
    cin>>s;
}
	cout << "The time you have entered is : \n"<<h<<':'<<m<<':'<<s<<endl;
	int t_lm;
	t_lm= (h*3600)+(m*60)+(s);
	cout<<t_lm<<" seconds elapsed since last midnight";
}



