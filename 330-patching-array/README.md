<h2><a href="https://leetcode.com/problems/patching-array/">330. Patching Array</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a sorted integer array <code style="user-select: auto;">nums</code> and an integer <code style="user-select: auto;">n</code>, add/patch elements to the array such that any number in the range <code style="user-select: auto;">[1, n]</code> inclusive can be formed by the sum of some elements in the array.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of patches required</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,3], n = 6
<strong style="user-select: auto;">Output:</strong> 1
Explanation:
Combinations of nums are [1], [3], [1,3], which form possible sums of: 1, 3, 4.
Now if we add/patch 2 to nums, the combinations are: [1], [2], [3], [1,3], [2,3], [1,2,3].
Possible sums are 1, 2, 3, 4, 5, 6, which now covers the range [1, 6].
So we only need 1 patch.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,5,10], n = 20
<strong style="user-select: auto;">Output:</strong> 2
Explanation: The two patches can be [2, 4].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,2], n = 5
<strong style="user-select: auto;">Output:</strong> 0
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums</code> is sorted in <strong style="user-select: auto;">ascending order</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 2<sup style="user-select: auto;">31</sup> - 1</code></li>
</ul>
</div>