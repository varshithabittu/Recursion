// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int binarySearch(int arr[],int s,int e,int target)
{
    int mid = s+(e-s)/2;
    if(s>e) // base case
    {
        return -1;
    }
    if(arr[mid]==target)
    {
        return mid;
    }
   if(arr[mid]>target)
        return binarySearch(arr,s,mid-1,target);
    else
        return binarySearch(arr,mid+1,e,target);
}
int main() {
    int arr[5]={1,2,3,4,5};
    int target;
    cin>>target;
    int ans = binarySearch(arr,0,4,target);
    if(ans!=-1)
        cout << "Found at" << ans << endl;
    else
        cout<<"Not Found"<<endl;
    return 0;
}
