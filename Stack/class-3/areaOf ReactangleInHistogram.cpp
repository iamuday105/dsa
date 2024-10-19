class Solution
{
public:
    void nextSmallerElement(vector<int> &heights, vector<int> &nextAns)
    {
        stack<int> st;
        st.push(-1);
        int n = heights.size();  
        for (int i = n - 1; i >= 0; i--)
        {
            int element = heights[i];
            while (st.top() != -1 && heights[st.top()] >= element)
            {
                st.pop();
            }
            nextAns.push_back(st.top());
            st.push(i);
        }
    }

    void prevSmallerElement(vector<int> &heights, vector<int> &prevAns)
    {
        stack<int> st;
        st.push(-1);
        int n = heights.size();
        for (int i = 0; i < n; i++)
        {
            int element = heights[i];

            while (st.top() != -1 && heights[st.top()] >= element)
            {
                st.pop();
            }

            prevAns.push_back(st.top());
            st.push(i);
        }
    }

    int largestRectangleArea(vector<int> &heights)
    {
        vector<int> nextAns;
        vector<int> prevAns;

        nextSmallerElement(heights, nextAns);
        reverse(nextAns.begin(), nextAns.end());
        for (int i = 0; i < nextAns.size(); i++)
        {
            if (nextAns[i] == -1)
            {
                nextAns[i] = nextAns.size(); // ye bhool jata hun
            }
        }
        prevSmallerElement(heights, prevAns);
        // for(auto i: nextAns){
        //     cout<<i<<" ";
        // }

        //   for(auto i: prevAns){
        //     cout<<i<<" ";
        // }

        int maxArea = INT_MIN;

        for (int i = 0; i < nextAns.size(); i++)
        {
            int width = nextAns[i] - prevAns[i] - 1;
            int height = heights[i];
            cout << width << height << " ";
            int currArea = width * height;
            maxArea = max(maxArea, currArea);
        }
        return maxArea;
    }
};