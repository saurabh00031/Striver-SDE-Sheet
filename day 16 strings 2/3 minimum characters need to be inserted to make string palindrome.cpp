int Solution::solve(string A)
{
string text = A;
reverse(A.begin(),A.end());
text = text + "$"+A;
vector<int> lps(text.size(),0);
int i = 1 ;
int j = 0;
while(i<text.size())
{
while(j>0 and text[j]!=text[i])
{
j = lps[j-1];
}
if(text[j]==text[i])
{
j++;
}
lps[i] = j;
i++;
}
return A.size()-lps[text.size()-1];
}
