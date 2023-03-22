/*PROBLEM STATEMENT: N is size of array and we need to return an array with sum of the all subsets of the given array
  Input:
        N = 2
        arr[] = {2, 3}
  Output:
        0 2 3 5
  Explanation:
        When no elements is taken then Sum = 0.
        When only 2 is taken then Sum = 2.
        When only 3 is taken then Sum = 3.
        When element 2 and 3 are taken then 
        Sum = 2+3 = 5.
 */
/*
Psudocose:
          f(indx,sum=0)
          |         |
(Choosing)|         |(Not choosing that index)
          |         f(indx+1,sum)
          f(indx+1,sum+arr[ind])
*/           
//CODE
class Solution
{
public:
    
    void sumSubset(int ind,int sum,vector<int>&arr,int N,vector<int>&ans)
{
        //base case
        if(ind==N){
            ans.push_back(sum);
            return;
        }
        
        //pick up
        sumSubset(ind+1,sum+arr[ind],arr,N,ans);
        //not pick up
        sumSubset(ind+1,sum,arr,N,ans);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ans;
        sumSubset(0,0,arr,N,ans);
        return ans;
        
    }
};
