{
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        int sum;
        vector<int>sp;
        
        for(int i=0;i<(1<<N);i++)
        {
            sum=0;
            for(int j=0;j<N;j++)
            {
                if(i &(1<<j))
                {
                    sum=sum+arr[j];
                }
            }
            
            sp.push_back(sum);
            
            
        }
        
        return sp;
    
    }
};