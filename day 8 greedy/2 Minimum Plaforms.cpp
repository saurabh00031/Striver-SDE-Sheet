   
    int findPlatform(int arr[], int dep[], int n)
    {
        sort(arr,arr+n);
    sort(dep,dep+n);
    
    int i=0;
    int j=0;
    
    int c=0;
    int ans=0;
    while(i<n) {
        if(arr[i]<=dep[j]) {
            c++;
            ans=max(ans,c);
            i++;
        }
        else if(dep[j]<arr[i]) {
            c--;
            j++;
        }
    }
    return ans;
    	
    }
