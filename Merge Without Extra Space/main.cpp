#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 50000+10
using namespace std;

void solve(int arrSize1, int arrSize2, int arr1[], int arr2[])
{
    vector<int> sortedArray;
    int totalSize = arrSize1 + arrSize2;
    int first = 0, second = 0;
    while(totalSize)
    {
        if(first >= arrSize1 && second < arrSize2)
            sortedArray.push_back(arr2[second++]);
        else if(second >= arrSize2 && first < arrSize1)
            sortedArray.push_back(arr1[first++]);
        else
        {
            if(arr1[first] <= arr2[second])
                sortedArray.push_back(arr1[first++]);
            else if(arr1[first] > arr2[second])
                sortedArray.push_back(arr2[second++]);
        }
        totalSize--;
    }
    for(int i=0;i<sortedArray.size();++i) cout << sortedArray[i] << " ";
    cout << endl;
}
int main()
{
    int nubmerOfTestCases;
    cin >> nubmerOfTestCases;
    while(nubmerOfTestCases--)
    {
        int arrSize1, arrSize2;
        cin >> arrSize1 >> arrSize2;
        int arr1[arrSize1], arr2[arrSize2];

        for(int i=0;i<arrSize1;++i) cin >> arr1[i];
        for(int i=0;i<arrSize2;++i) cin >> arr2[i];

        solve(arrSize1, arrSize2, arr1, arr2);
    }
    return 0;
}
