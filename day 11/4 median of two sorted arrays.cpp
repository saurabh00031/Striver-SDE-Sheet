class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>a;
        
        for(int i=0;i<nums1.size();i++)
        {
            a.push_back(nums1[i]);
        }
        
        for(int i=0;i<nums2.size();i++)
        {
            a.push_back(nums2[i]);
        }
        
        sort(a.begin(), a.end());
 
   int n=a.size();
        
    if (n % 2 != 0)
        return (double)a[n / 2];
 
       return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0; 
    }
};