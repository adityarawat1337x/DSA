class Solution {
public:

vector<int> asteroidCollision(vector<int>& asteroids) {
	stack<int> st;
	vector<int> aster;
	for(auto &x : asteroids)
	{
		if(x > 0)
			st.push(x);
		else
		{
			while(!st.empty() and st.top() > 0 and abs(x) > st.top())
				st.pop();

			if(!st.empty() and st.top() == abs(x))
				st.pop();

			else if(st.empty() or st.top() < 0)
				st.push(x);
		}
	}

	while(!st.empty())
	{
		aster.push_back(st.top());
		st.pop();
	}

	reverse(aster.begin(), aster.end());

	return aster;
}};