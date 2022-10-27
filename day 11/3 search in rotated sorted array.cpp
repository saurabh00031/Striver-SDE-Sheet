class Solution {
public:
    
int bs(vector<int>&arr,int n,int find,int start,int end)
{
 
   
   
   int mid;
   
   while(start<=end)
   {
       mid=start+(end-start)/2;
       
       if(arr[mid]==find)
       {
           return mid;
       }
       else if(arr[mid]<find)
       {
           start=mid+1;
       }
       else
       {
           end=mid-1;
       }
   }
   
   return -1;
    
   
}
    
    
    int search(vector<int>&arr, int target)
    {
        
      int n=arr.size();
      int s=0;
	  int e=n-1;
	  int fix;
        
	  while(s<=e)
	  {
	      int mid=s+(e-s)/2;
	      
	      int prev=(mid-1+n)%n;
	      int next=(mid+1)%n;
	      
	      
	      if((arr[mid]<=arr[prev])&&(arr[mid]<=arr[next]))
	      {
	          fix=mid;
              break;
	      }
	      else if(arr[mid]<=arr[e])
	      {
	          e=mid-1;
	      }
	      else if(arr[mid]>=arr[s])
	      {
	          s=mid+1;
	      }
	  }
	  
        
        
        int x=bs(arr,n,target,0,fix-1);
        int y=bs(arr,n,target,fix,n-1);
       
        
        
        if((x==y)&&(x==-1))
        {
            return -1;
        }
        
        if(x!=-1)
        {
            return x;
        }
        
        
        return y;
        
        
        
    }
};