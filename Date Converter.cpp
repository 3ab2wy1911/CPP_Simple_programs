#include <bits/stdc++.h>
using namespace std;
string months [12] = {"January","February","March","April","May","June","July",
"August","September","October","November","December"};
class Date_convert
{
    int m,d;
public:
    Date_convert(int month , int day)
    {
            m = month;
            d=day;
    }
    bool is_in(int month)
    {
        //31
        bool check = false;
        int arr[7] = {1,3,5,7,8,10,12};
        for (int i : arr)
        {
            if (month == i)
            {
                check = true;
                break;
            }
        }
        return check;
    }
    void convert()
    {
        if (m<1 or m >12)
        {
            throw MonthError();
        }
        else if (d<1)
        {
            throw DayError();
        }
        else if (d>29 and m==2)
        {
            throw DayError();
        }
        else if (d>30 and !is_in(m))
        {
            throw DayError();
        }
        else if (d>31)
        {
            throw DayError();
        }
        else
        {
            cout<<months[m-1]<<" "<<d<<endl;
        }
    }
    class MonthError
    {
    public:
        MonthError(){}
        void Month_Error()
        {
            cout<<"Invalid Month!!!";
        }
    };

    class DayError
    {
    public:
        DayError(){}
        void Day_Error()
        {
            cout<<"Invalid Day!!!";
        }
    };
};

int main() {
    int month;
    int day;
    cout<<"Enter the Month:";
    cin>>month;
    cout<<"Enter the day:";
    cin>>day;
    Date_convert m1 (month,day);
    try
    {
        m1.convert();
    }
    catch (Date_convert::MonthError M)
    {
        M.Month_Error();
    }
    catch (Date_convert::DayError D)
    {
        D.Day_Error();
    }

}
