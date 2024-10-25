// https://leetcode.com/problems/basic-calculator/



// class Solution
// {
// public:

#include<iostream>
#include<stack>
using namespace std;

    int calculate(string s)
    {
        stack<int> st;
        int result = 0;
        int sign = 1;
        int num = 0; // temp

        for (char ch : s)
        {
        //  if(isdigit(ch)){
            if (ch >= '0' && ch <= '9')
                num = num * 10 + (ch - '0');
            else if (ch == '+')
            {
                // ab tak ka kab kuch sort kro result me
                result += sign * num;
                num = 0;

                sign = 1;
            }
            else if (ch == '-')
            {
                // ab tak ka kab kuch sort kro result me
                result += sign * num;
                num = 0;

                sign = -1;
            }
            else if (ch == '(')
            {
                // push the curr result and sign onto stack.
                st.push(result);
                st.push(sign); // ab tak ki exp ka ans store kar liya hai
                result = 0;
                sign = 1;
            }
            else if (ch == ')')
            {
                // ab tak ka kab kuch sort kro result me
                result += sign * num;
                num = 0;

                // pop the sign and then, result jo push hua tha
                int sign = st.top();
                st.pop();
                result *= sign;
                result += st.top();
                st.pop();
                sign = 1;
            }
        }
        result += sign * num; // add the last number to result.
        return result;
    }
int main(){
    string s = "(1+(4+5+2)-3)+(6+8)";
   int ans = calculate(s);
   cout<<"ans is : "<<ans;

    return 0;
};