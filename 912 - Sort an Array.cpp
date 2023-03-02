#include <bits/stdc++.h>
#include <vector>
using namespace std;

class SortArray
{
public :
    vector<int> sortArray(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        return nums;
    }
};


int main()
{
    vector<int>vectorArray;
    int number;
    while(cin>>number)
    {
        vectorArray.push_back(number);
    }
    SortArray sortArrayObj;
    vectorArray=sortArrayObj.sortArray(vectorArray);
     for (int i = 0; i < vectorArray.size(); i++)
        cout << vectorArray[i] << " ";
    return 0;
}
