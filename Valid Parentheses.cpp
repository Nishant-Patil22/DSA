class Solution {
public:
    bool isValid(string s)
            {   
                
                stack<char> para;
                for(int i=0; i<s.length();i++)
                {
                    if(s[i]== '(' || s[i]== '{' || s[i]== '[')
                    {
                        para.push(s[i]);
                    }
                   else 
                    {
                        if(para.empty())
                        {
                            return false;
                        }
                        else
                        {
                            if(para.top()=='(' && s[i]==')' || para.top()=='{' && s[i]=='}' || para.top()=='[' && s[i]==']')
                            {
                                para.pop();
                            }
                            else
                            {
                                para.push(s[i]);
                            }
                        }
                    }  
                }
                return(para.empty());
            }
};
