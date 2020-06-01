#include <iostream>
using namespace std;

int main()
{
    int numberOfTestCases;
    cin >> numberOfTestCases;
    while(numberOfTestCases--)
    {
        int arrSize, num, maxSum = 0;
        cin >> arrSize;
        int arr[arrSize];
        for(int i=0;i<arrSize;++i) arr[i] = 0;

        for(int i=0;i<arrSize;++i)
        {
            cin >> num;
            if(i == 0)
            {
                arr[i] = num;
                continue;
            }
            if(num > arr[i-1] + num) arr[i] = num;
            else arr[i] = num + arr[i-1];
        }

        maxSum = arr[0];
        for(int i=0;i<arrSize;++i)
            if(maxSum < arr[i])
                maxSum = arr[i];

    cout << maxSum << endl;
    }

    return 0;
}
