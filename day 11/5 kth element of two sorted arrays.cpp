    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i = 0, j=0;
        while(i<n && j<m)
        {
            if(arr1[i]<arr2[j])
            {
                i++;
                k--;
                if(k==0)
                {
                    return arr1[i-1];
                }
            }
            else
            {
                j++;
                k--;
                if(k==0)
                {
                    return arr2[j-1];
                }
            }
        }
        
        while(i<n)
        {
            i++;
            k--;
            if(k==0)
            {
                return arr1[i-1];
            }
        }
        while(j<m)
        {
            j++;
            k--;
            if(k==0)
            {
                return arr2[j-1];
            }
        }
        return -1;
    }
};