<h2><a href="https://leetcode.com/problems/maximum-sum-of-two-non-overlapping-subarrays/">1031. Maximum Sum of Two Non-Overlapping Subarrays</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">nums</code> and two integers <code style="user-select: auto;">firstLen</code> and <code style="user-select: auto;">secondLen</code>, return <em style="user-select: auto;">the maximum sum of elements in two non-overlapping <strong style="user-select: auto;">subarrays</strong> with lengths </em><code style="user-select: auto;">firstLen</code><em style="user-select: auto;"> and </em><code style="user-select: auto;">secondLen</code>.</p>

<p style="user-select: auto;">The array with length <code style="user-select: auto;">firstLen</code> could occur before or after the array with length <code style="user-select: auto;">secondLen</code>, but they have to be non-overlapping.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">subarray</strong> is a <strong style="user-select: auto;">contiguous</strong> part of an array.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [0,6,5,2,2,5,1,9,4], firstLen = 1, secondLen = 2
<strong style="user-select: auto;">Output:</strong> 20
<strong style="user-select: auto;">Explanation:</strong> One choice of subarrays is [9] with length 1, and [6,5] with length 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,8,1,3,2,1,8,9,0], firstLen = 3, secondLen = 2
<strong style="user-select: auto;">Output:</strong> 29
<strong style="user-select: auto;">Explanation:</strong> One choice of subarrays is [3,8,1] with length 3, and [8,9] with length 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,1,5,6,0,9,5,0,3,8], firstLen = 4, secondLen = 3
<strong style="user-select: auto;">Output:</strong> 31
<strong style="user-select: auto;">Explanation:</strong> One choice of subarrays is [5,6,0,9] with length 4, and [0,3,8] with length 3.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= firstLen, secondLen &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= firstLen + secondLen &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">firstLen + secondLen &lt;= nums.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 1000</code></li>
</ul>
</div>