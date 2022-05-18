<h2><a href="https://leetcode.com/problems/k-radius-subarray-averages/">2090. K Radius Subarray Averages</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> array <code style="user-select: auto;">nums</code> of <code style="user-select: auto;">n</code> integers, and an integer <code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">k-radius average</strong> for a subarray of <code style="user-select: auto;">nums</code> <strong style="user-select: auto;">centered</strong> at some index <code style="user-select: auto;">i</code> with the <strong style="user-select: auto;">radius</strong> <code style="user-select: auto;">k</code> is the average of <strong style="user-select: auto;">all</strong> elements in <code style="user-select: auto;">nums</code> between the indices <code style="user-select: auto;">i - k</code> and <code style="user-select: auto;">i + k</code> (<strong style="user-select: auto;">inclusive</strong>). If there are less than <code style="user-select: auto;">k</code> elements before <strong style="user-select: auto;">or</strong> after the index <code style="user-select: auto;">i</code>, then the <strong style="user-select: auto;">k-radius average</strong> is <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">Build and return <em style="user-select: auto;">an array </em><code style="user-select: auto;">avgs</code><em style="user-select: auto;"> of length </em><code style="user-select: auto;">n</code><em style="user-select: auto;"> where </em><code style="user-select: auto;">avgs[i]</code><em style="user-select: auto;"> is the <strong style="user-select: auto;">k-radius average</strong> for the subarray centered at index </em><code style="user-select: auto;">i</code>.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">average</strong> of <code style="user-select: auto;">x</code> elements is the sum of the <code style="user-select: auto;">x</code> elements divided by <code style="user-select: auto;">x</code>, using <strong style="user-select: auto;">integer division</strong>. The integer division truncates toward zero, which means losing its fractional part.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, the average of four elements <code style="user-select: auto;">2</code>, <code style="user-select: auto;">3</code>, <code style="user-select: auto;">1</code>, and <code style="user-select: auto;">5</code> is <code style="user-select: auto;">(2 + 3 + 1 + 5) / 4 = 11 / 4 = 2.75</code>, which truncates to <code style="user-select: auto;">2</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/11/07/eg1.png" style="width: 343px; height: 119px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [7,4,3,9,1,8,5,2,6], k = 3
<strong style="user-select: auto;">Output:</strong> [-1,-1,-1,5,4,4,-1,-1,-1]
<strong style="user-select: auto;">Explanation:</strong>
- avg[0], avg[1], and avg[2] are -1 because there are less than k elements <strong style="user-select: auto;">before</strong> each index.
- The sum of the subarray centered at index 3 with radius 3 is: 7 + 4 + 3 + 9 + 1 + 8 + 5 = 37.
  Using <strong style="user-select: auto;">integer division</strong>, avg[3] = 37 / 7 = 5.
- For the subarray centered at index 4, avg[4] = (4 + 3 + 9 + 1 + 8 + 5 + 2) / 7 = 4.
- For the subarray centered at index 5, avg[5] = (3 + 9 + 1 + 8 + 5 + 2 + 6) / 7 = 4.
- avg[6], avg[7], and avg[8] are -1 because there are less than k elements <strong style="user-select: auto;">after</strong> each index.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [100000], k = 0
<strong style="user-select: auto;">Output:</strong> [100000]
<strong style="user-select: auto;">Explanation:</strong>
- The sum of the subarray centered at index 0 with radius 0 is: 100000.
  avg[0] = 100000 / 1 = 100000.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [8], k = 100000
<strong style="user-select: auto;">Output:</strong> [-1]
<strong style="user-select: auto;">Explanation:</strong> 
- avg[0] is -1 because there are less than k elements before and after index 0.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == nums.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i], k &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>