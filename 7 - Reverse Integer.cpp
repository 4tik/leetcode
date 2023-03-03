#include <bits/stdc++.h>
using namespace std;

class ReverseNumber
{
public:
    int reversenumber(int number)
    {
        long long reverseValue = number%10;
        number/=10;
        while(number)
        {
            reverseValue=(reverseValue*10)+number%10;
            number/=10;
            if(abs(reverseValue)>INT_MAX)
            {
                number = 0;
                return 0;
            }
        }
        return reverseValue;
    }
};


int main()
{
    int number;
    while(cin>>number)
    {
        ReverseNumber object;
        cout<<object.reversenumber(number)<<endl;
    }
    return 0;
}
