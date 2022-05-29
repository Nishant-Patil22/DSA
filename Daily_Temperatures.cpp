class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        stack<int> temp_index;
        int n = temperatures.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;i++)
        {
            while(!temp_index.empty() && temperatures[i]>temperatures[temp_index.top()])
            {
                int top = temp_index.top();
                ans[top]= i - top;
                temp_index.pop();
            }
            temp_index.push(i);
        } 
        return ans;
    }
};
