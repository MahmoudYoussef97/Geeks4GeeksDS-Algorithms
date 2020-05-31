#include <iostream>
using namespace std;
#define MAX 1000000+10

int main() {

	int numberOfTestCases;
	cin >> numberOfTestCases;

	while(numberOfTestCases--)
    {
        int arrSize, freq[MAX], arr[MAX] , num =0, numberOfTriplets = 0;
        cin >> arrSize;
        for(int i=0;i<arrSize;++i) freq[i] = 0;
        for(int i=0;i<arrSize;++i)
        {
            cin >> num;
            arr[i] = num;
            freq[num]++;
        }

        for(int i=0;i<arrSize-1;++i)
            for(int j=i+1;j<arrSize;++j)
                if(freq[arr[i]+arr[j]] == 1)
                    numberOfTriplets++;

        if(numberOfTriplets > 0)
            cout << numberOfTriplets << endl;
        else
            cout << numberOfTestCases-1 << endl;

    }

	return 0;
}
