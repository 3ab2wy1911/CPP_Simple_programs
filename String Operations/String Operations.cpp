#include <iostream>
using namespace std;
char vowels[6] = {'a','i','o','u','e','y'};
int str_len(char* s)
{
    int len =0;
    while(*s != '\0')
    {
        len++;
        s++;
    }
    return len;
}
//============================================
void copy_str (char* str1, char* str2)
{
    while (*str1)
    {
        *str2 = *str1 ;
        str2++;
        str1++;
    }
    *str2 = '\0';
}
//============================================
void concatenate (char* str1, char* str2,char* str3)
{
    while (*str1)
    {
        *str3 = *str1 ;
        str3++;
        str1++;
    }
    while (*str2)
    {
        *str3 = *str2 ;
        str3++;
        str2++;
    }
    *str3 = '\0';
}
//============================================
void reverse (char* str1, char* str2)
{
    int length = str_len(str1);
    char* end = str1 + length-1;
    while (length)
    {
        *str2= *end;
        str2++;
        end--;
        length--;
    }
}
//============================================
int Count_Vowel (char* str1)
{
    int v=0;
    while (*str1)
    {
        for (char vowel : vowels)
        {
            if (*str1 == vowel)
            {
                v++;
            }
        }
        str1++;
    }
    return v;
}
//============================================
int Count_Cons (char* str1)
{
    return str_len(str1) - Count_Vowel(str1);
}
//============================================
void sort (char* str1 , char* str2)
{
    int length = str_len(str1);
    int n[26]={0};
    while (*str1!='\0')
    {
        n[ *str1++ -'a' ]++;
    }
    for (int i=0;i<26;i++)
    {
        for (int j=0;j<n[i];j++) {
            *str2 = (char) ('a' + i);
            str2++;
        }
    }
}
int main()
{
    cout<<"Enter the string\n";
    char str [100];
    cin.getline(str,100);
    while (true) {
        cout << "1) Find length of string using pointers.\n"
                "2) Copy this string to new string using pointers.\n"
                "3) Get another string from user and concatenate two strings using pointers.\n"
                "4) Find reverse of a string using pointers.\n"
                "5) Count the total number of vowels and consonants in a string using pointers.\n"
                "6) Sort character of a string in a new string using pointer.\n"
                "7) Enter a new string.\n"
                "8) Exit program\n";
        int ans;
        cin >> ans;
        if (ans == 1) {
            cout << "Your string is : " << str << endl;
            cout << "The length of the string = " << str_len(str) << endl;
        } else if (ans == 2) {
            char str2[100];
            cout << "String 1 :" << str << endl;
            copy_str(str, str2);
            cout << "Done ! string 2 after copying from string 1:\n";
            cout << str2 << endl;
        } else if (ans == 3) {
            cout << "Enter second string :";
            char str2[100];
            cin.ignore();
            cin.getline(str2, 100);
            char str3[100];
            concatenate(str, str2, str3);
            cout << "Your strings after concatenation : " << str3 << endl;
        }
        else if (ans == 4) {
            char str2[100];
            reverse(str, str2);
            cout << "Your string before reversing : \t" << str << endl;
            cout << "Your string after reversing : \t" << str2 << endl;
        } else if (ans == 5) {
            cout << "Your string :\t" << str << endl;
            cout << "Number of vowels is :\t" << Count_Vowel(str) << endl;
            cout << "Number of consonants is :\t" << Count_Cons(str) << endl;
        } else if (ans == 6) {
            cout << "Your unsorted string:\t" << str << endl;
            char str2[100];
            sort(str, str2);
            cout << "Your sorted string:\t" << str2 << endl;

        }
        else if (ans == 7)
        {
            cout<<"Enter your new string:";
            char str2[100];
            cin.ignore();
            cin.getline(str2,100);
            copy_str(str2,str);
            cout<<"Your new string is\t"<<str<<endl;
        }
        else if (ans == 8)
        {
            exit(1);
        }
    }
}
