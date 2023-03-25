
#include <iostream>
using namespace std;
bool linearSearch(int arr[],int size,int target)
{
    if(size==0)
    {
        return false;
    }
   if(arr[0]==target)
        return true;
    else
        return linearSearch(arr+1,size-1,target);
}
int main() {
    int arr[5]={1,2,3,4,5};
    int target;
    cin>>target;
    bool ans = linearSearch(arr,5,target);
    if(ans)
        cout << "Found" << endl;
    else
        cout<<"Not Found"<<endl;
    return 0;
}
