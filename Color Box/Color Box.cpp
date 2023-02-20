#include <iostream>
#include <algorithm>
#include <cstring>
#include <iomanip>
#include <string>
#include <cmath>
#include<windows.h>
#include <stdio.h>

using namespace std;
//void setcolor(int color);

class ColoredBox
{
private:
    char unit;
    int length;
    int width;
    int color;
public:
     static int area;
      HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    ColoredBox(int l,int w)
    {
        length=l;
        width=w;
        unit='#';
        color=15;
        area=l*w;
        SetConsoleTextAttribute(hConsole,15 );

    }
    ColoredBox(int l,int w,int c,char u)
    {
        length=l;
        width=w;
        color=c;
        unit=u;
         SetConsoleTextAttribute(hConsole,color);
        if (length*width >= area)
        {
            area=length*width;
        }
}
    void setColor(int c)
    {
        color =c;
         SetConsoleTextAttribute(hConsole,color );
    }
    void setunit(char u)
    {
        unit =u;
    }
    int getcolor()
    {
        return color;
    }
    char getunit()
    {
        return unit;
    }
    void displaytr()
    {
        for (int i=0;i<width;i++)
            {
                for(int j=0;j<length;j++)
                    {
                        cout<<unit;
                    }
                    cout<<"\n";
            }
    }
    void display()
    {
        for (int i=0;i<length;i++)
            {
                for(int j=0;j<width;j++)
                    {
                        cout<<unit;
                    }
                    cout<<"\n";
            }
    }
     void displayw()
    {
        for (int i=0;i<length;i++)
            {
                for(int j=0;j<width;j++)
                    {
                        cout<<unit<<" ";
                    }
                    cout<<"\n";
            }
    }
    static int getMaxArea()
    {
            return area;

    }
    int getArea ()
    {
        return length*width;
    }
    displayChess(int col2)
    {for (int i=0;i<length;i++)
            {
                for(int j=0;j<width;j++)
                    {
                        if(j%2==0){
                            SetConsoleTextAttribute(hConsole,color );
                            cout<<unit;
                        }
                        else
                        {
                        SetConsoleTextAttribute(hConsole,col2 );
                        cout<<unit;
                            }
                    }
                    cout<<"\n";
            }

    }



    ~ColoredBox(){};

};

int ColoredBox::area=0;
int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int len,wid,col,col2;
    char boxChar;
    cout<<"Enter length and width of the box separated by a space: ";
    cin>>len>>wid;
    ColoredBox* cb1;
    cb1 = new ColoredBox(len,wid);
    cb1->display();
    cout<<"Set the box to another color: ";
    cin>>col;
    cout<<"Displaying Transposed: "<<endl;
    cb1->setColor(col);
    cb1->displaytr();
     SetConsoleTextAttribute(hConsole,15 );
    cout<<"Displaying Wider: "<<endl;
    cb1->setColor(col);
    cb1->displayw();
     SetConsoleTextAttribute(hConsole,15 );
    cout<<"Displaying Chess, enter the other color: "<<endl;
    cin>>col2;
    cb1->setColor(col);
    cb1->displayChess(col2);
    SetConsoleTextAttribute(hConsole,15 );
    cout<<endl<<"Area="<<cb1->getArea();
    cout<<endl<<"Max Area="<<cb1->getMaxArea()<<"\n";
    delete cb1;
    cout<<"Enter length,width,color,character of the box separated by spaces: ";
    cin>>len>>wid>>col>>boxChar;
    ColoredBox* cb2;
    cb2 = new ColoredBox(len,wid,col,boxChar);
    cb2->setColor(col);
    cb2->display();
    SetConsoleTextAttribute(hConsole,15 );
    cout<<"Displaying Transposed: "<<endl;
    cb2->setColor(col);
    cb2->displaytr();
    SetConsoleTextAttribute(hConsole,15 );
    cout<<"Displaying Wider: "<<endl;
    cb2->setColor(col);
    cb2->displayw();
    SetConsoleTextAttribute(hConsole,15 );
    cout<<"Displaying Chess, enter the other color: "<<endl;
    cin>>col2;
    cb2->setColor(col);
    cb2->displayChess(col2);
    SetConsoleTextAttribute(hConsole,15 );
    cout<<"Displaying original again:"<<endl;
    cb1->setColor(col);
    cb2->display();
    SetConsoleTextAttribute(hConsole,15 );
    cout<<endl<<"Area="<<cb1->getArea();
    cout<<endl<<"Max Area="<<cb1->getMaxArea()<<"\n";
    delete cb2;
 return 0;

}
