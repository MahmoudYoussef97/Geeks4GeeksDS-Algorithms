#include <iostream>
using namespace std;

int main()
{
    int numberOfTestCases;
    cin >> numberOfTestCases;
    while(numberOfTestCases--)
    {
        int arrSize, num;
        cin >> arrSize;
        int freq[arrSize+1];
        for(int i=1;i<=arrSize;++i) freq[i] = 0;

        for(int i=0;i<arrSize-1;++i)
        {
            cin >> num;
            freq[num] = 1;
        }
        for(int i=1;i<=arrSize;++i)
            if(freq[i] != 1)
                cout << i << endl;
    }
    return 0;
}
