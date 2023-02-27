#include <bits/stdc++.h>
using namespace std;

class PalindromeNumber
{
public:
    bool isPalindrome(int x)
    {
        bool isTrue = false;
        long reverseNumber=0, tempValue=x;
        while(tempValue>0)
        {
            reverseNumber = (reverseNumber*10)+(tempValue%10);
            tempValue/=10;
        }
        if(x==reverseNumber)
        {
            isTrue=true;
        }
        return isTrue;
    }
};

int main()
{
    int number;
    scanf("%d", &number);
    PalindromeNumber palindromeNumber;
    cout << palindromeNumber.isPalindrome(number) <<endl;
    return 0;
}
