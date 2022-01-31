<h2><a href="https://leetcode.com/problems/global-and-local-inversions/">775. Global and Local Inversions</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">nums</code> of length <code style="user-select: auto;">n</code> which represents a permutation of all the integers in the range <code style="user-select: auto;">[0, n - 1]</code>.</p>

<p style="user-select: auto;">The number of <strong style="user-select: auto;">global inversions</strong> is the number of the different pairs <code style="user-select: auto;">(i, j)</code> where:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= i &lt; j &lt; n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums[i] &gt; nums[j]</code></li>
</ul>

<p style="user-select: auto;">The number of <strong style="user-select: auto;">local inversions</strong> is the number of indices <code style="user-select: auto;">i</code> where:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= i &lt; n - 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums[i] &gt; nums[i + 1]</code></li>
</ul>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if the number of <strong style="user-select: auto;">global inversions</strong> is equal to the number of <strong style="user-select: auto;">local inversions</strong></em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,0,2]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> There is 1 global inversion and 1 local inversion.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,0]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> There are 2 global inversions and 1 local inversion.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == nums.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt; n</code></li>
	<li style="user-select: auto;">All the integers of <code style="user-select: auto;">nums</code> are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums</code> is a permutation of all the numbers in the range <code style="user-select: auto;">[0, n - 1]</code>.</li>
</ul>
</div>