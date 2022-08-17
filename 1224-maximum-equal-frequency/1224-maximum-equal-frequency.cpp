class Solution {
public:
int maxEqualFreq(vector<int>& nums) {
	unordered_map <int , int> freq;
	unordered_map <int , int> elements_with_freq;

	int ans = 0 , x , n = nums.size();

	for(int i = 0 ; i < n ; i++) {
		x = nums[i];
		freq[x]++;
		elements_with_freq[freq[x]]++;

		//check if all elements have same frequency
		if(freq[x] * elements_with_freq[freq[x]] == (i + 1)) {
			if(i + 1 < n)
				ans = i + 2;
		}
		//check if all elements have same frequency except for one extra element
		if(freq[x] * elements_with_freq[freq[x]] == i) {
			ans = i + 1;
		}
	}

	return ans;
}
};
