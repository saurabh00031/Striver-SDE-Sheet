vector<int> Solution::dNums(vector<int> &A, int B) {
if(B==1){
vector<int>t(A.size(),1);
return t;
}
vector<int>ans;
unordered_map<int,int>mp;
int j=0,i=0,c=0;
while(j<A.size()){
mp[A[j]]++;
if(mp[A[j]]==1) c++; // store the value of unique element in current window
if(j-i+1!=B) j++;
else{
// find answer of current window
ans.push_back(c);
mp[A[i]]--; // remove element of last window
if(mp[A[i]]==0) c--;

i++,j++; // move window
}
}
return ans;
}