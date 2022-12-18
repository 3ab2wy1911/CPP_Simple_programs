#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;




class TaskManger
{
private:
    string line ;
public:

    void extract()
    {
        system ("cmd /c Tasklist > tasklist.txt");
        ifstream file("tasklist.txt");
        if (file.is_open())
        {
            while (getline(file, line))
            {
                char c = '=';
                vector<string> tokens;
                string token;
                size_t pos = 0;
                while ((pos = line.find(c)) != string::npos)
                {
                    token = line.substr(0, pos);
                    tokens.push_back(token);
                    line.erase(0, pos + 1);
                }
                cout << line << endl;

            }
            }
            file.close();
        }
};


int main()
{
    TaskManger t;
    t.extract();
}
