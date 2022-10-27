struct Job 
{ 
    int id;	 
    int dead; 
    int profit; 
};


class Solution 
{
    public:
  
    bool static comp(Job a,Job b){
        return (a.profit>b.profit);
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        vector<int> ans;
        sort(arr,arr+n,comp);
        int maxi = arr[0].dead;
        for(int i=0;i<n ; i++)maxi = max(maxi,arr[i].dead);
        int countJobs = 0;
        int jobProfit = 0;
        vector<int> slot(maxi+1);
        for(int i=0; i<=maxi; i++)slot[i]= -1;
        for(int i=0; i<n; i++){
            for(int j = arr[i].dead; j > 0; j--){
                if(slot[j] == -1){
                    slot[j] = i;
                    countJobs++;
                    jobProfit+=arr[i].profit;
                    break;
                }
            }
        }
        ans.push_back(countJobs);
        ans.push_back(jobProfit);
        return ans;
    } 
};