#include <iostream>
#define MAX 10000000+10
using namespace std;
int arr[MAX];

void solve(int arrSize)
{
    int left = 0 , right = arrSize - 1;
    while(left <= right)
        if(left == right) cout << arr[left++];
        else cout << arr[right--] << " " << arr[left++] << " ";
    cout << endl;

}
int main()
{
    int numberOfTestCases;
    cin >> numberOfTestCases;
    while(numberOfTestCases--)
    {
        int arrSize;
        cin >> arrSize;
        for(int i=0;i<arrSize;++i) cin >> arr[i];
        solve(arrSize);
    }
    return 0;
}
