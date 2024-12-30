class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        stack<int> st;
        for (int i = 0; i < asteroids.size(); i++)
        {
            bool destroyed = false;

            
            while (!st.empty() && asteroids[i] < 0 && st.top() > 0)
            {
                if (abs(asteroids[i]) > st.top())
                {
                    
                    st.pop();
                }
                else if (abs(asteroids[i]) == st.top())
                {
                    st.pop();
                    destroyed = true;
                    break;
                }
                else
                {
                    destroyed = true;
                    break;
                }
            }

            if (!destroyed)
            {
                st.push(asteroids[i]);
            }
        }
        vector<int> ans;
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

