#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums,int target)
{
    vector <int> ans;
    int n=nums.size();
    int i=0,j=n-1;
    while(i < j)
    {
        int pairSum = nums[i] +nums[j] ;
        if(pairSum > target)
        {
            j--;
        }
        else if(pairSum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    vector<int> nums(n);

    cout << "Enter the elements of the array : " << endl;
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    int target;
    cout << "Enter the target : " << endl;
    cin >> target;
    
    vector<int> ans=pairSum(nums,target);
    if(ans.size()==0)
    {
        cout << "No such pair exists." << endl;
    }
    else
    {
        cout << "The indices of the pair are : " << ans[0] << " and " << ans[1] << endl;
    }
    return 0;

}