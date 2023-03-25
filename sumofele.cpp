#include <iostream>
using namespace std;
int sums(int arr[],int size,int sum)
{
    if(size==0)
    {
        return 0;
    }
    sum += arr[0]+sums(arr+1,size-1,sum);
    return sum;
}
int main() {
    // Write C++ code here
    int arr[5]={3};
    int sum=0;
    int ans = sums(arr,5,0);
    cout << ans << endl;
    return 0;
}
