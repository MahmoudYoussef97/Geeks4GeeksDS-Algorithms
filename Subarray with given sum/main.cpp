#include <iostream>
using namespace std;
#define MAX 1000000+10

int main() {

	int numberOfTestCases = 0;
    cin >> numberOfTestCases;

    while(numberOfTestCases--)
    {
        long int arrSize, givenSum;
        long int arr[MAX];
        cin >> arrSize >> givenSum;

        for(int i=0;i<arrSize; ++i)
            cin >> arr[i];

        int left = 0, right = 0, sum = 0;
        bool found = false;

        for(int i=0;i<arrSize; ++i)
        {
            sum+= arr[right++];

            while(sum > givenSum)
                sum-= arr[left++];

            if(sum == givenSum)
            {
                cout << left + 1 << " " << right << endl;
                found = true;
                break;
            }
        }
        if(!found)
            cout << -1 << endl;
    }
	return 0;
}
