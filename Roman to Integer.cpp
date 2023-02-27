#include <bits/stdc++.h>
using namespace std;

class RomantoInteger
{
public:
    int romanToInt(string s)
    {
        int result =0, sLength=s.length();
        for(int i=0; i<sLength; i++)
        {
            int getValue=returnRomInt(s[i]);
            if(i!=(sLength-1))
            {
                if(s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X'))
                {
                    getValue=returnRomInt(s[i+1])-1;
                    i++;
                }
                else if(s[i]=='X' && (s[i+1]=='L' || s[i+1]=='C'))
                {
                    getValue=returnRomInt(s[i+1])-10;
                    i++;
                }
                else if(s[i]=='C' && (s[i+1]=='D' || s[i+1]=='M'))
                {
                    getValue=returnRomInt(s[i+1])-100;
                    i++;
                }
            }
            result+=getValue;
        }
        return result;
    }

    int returnRomInt(char romanChar)
    {
        int result =0;

        switch(romanChar)
        {
        case 'I':
            result=1;
            break;
        case 'V':
            result=5;
            break;
        case 'X':
            result=10;
            break;
        case 'L':
            result=50;
            break;
        case 'C':
            result=100;
            break;
        case 'D':
            result=500;
            break;
        case 'M':
            result=1000;
            break;
        }
        return result;
    }
};


int main()
{
    string text;
    cin>>text;
    RomantoInteger romantoInteger;
    cout <<romantoInteger.romanToInt(text)<<endl;
    return 0;
}
