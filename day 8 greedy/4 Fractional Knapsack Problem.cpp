/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    
private:
static bool cmp(Item arr,Item arr1){
    double p1= (double)arr.value/arr.weight;
    double p2=(double)arr1.value/arr1.weight;
    return p1>p2;
}
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {double profit=0.0;
    sort(arr,arr+n,cmp);
    for(int i=0;i<n;i++){
        if(W>=arr[i].weight){
            profit+=arr[i].value;
            W-=arr[i].weight;
        }else{
            profit+=(double)arr[i].value*W/arr[i].weight;
           
            break;
        }
    }
      return profit; 
    }
        
};