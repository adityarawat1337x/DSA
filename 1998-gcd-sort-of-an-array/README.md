<h2><a href="https://leetcode.com/problems/gcd-sort-of-an-array/">1998. GCD Sort of an Array</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">nums</code>, and you can perform the following operation <strong style="user-select: auto;">any</strong> number of times on <code style="user-select: auto;">nums</code>:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Swap the positions of two elements <code style="user-select: auto;">nums[i]</code> and <code style="user-select: auto;">nums[j]</code> if <code style="user-select: auto;">gcd(nums[i], nums[j]) &gt; 1</code> where <code style="user-select: auto;">gcd(nums[i], nums[j])</code> is the <strong style="user-select: auto;">greatest common divisor</strong> of <code style="user-select: auto;">nums[i]</code> and <code style="user-select: auto;">nums[j]</code>.</li>
</ul>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if it is possible to sort </em><code style="user-select: auto;">nums</code><em style="user-select: auto;"> in <strong style="user-select: auto;">non-decreasing</strong> order using the above swap method, or </em><code style="user-select: auto;">false</code><em style="user-select: auto;"> otherwise.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [7,21,3]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> We can sort [7,21,3] by performing the following operations:
- Swap 7 and 21 because gcd(7,21) = 7. nums = [<u style="user-select: auto;"><strong style="user-select: auto;">21</strong></u>,<u style="user-select: auto;"><strong style="user-select: auto;">7</strong></u>,3]
- Swap 21 and 3 because gcd(21,3) = 3. nums = [<u style="user-select: auto;"><strong style="user-select: auto;">3</strong></u>,7,<u style="user-select: auto;"><strong style="user-select: auto;">21</strong></u>]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [5,2,6,2]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> It is impossible to sort the array because 5 cannot be swapped with any other element.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [10,5,9,3,15]
<strong style="user-select: auto;">Output:</strong> true
We can sort [10,5,9,3,15] by performing the following operations:
- Swap 10 and 15 because gcd(10,15) = 5. nums = [<u style="user-select: auto;"><strong style="user-select: auto;">15</strong></u>,5,9,3,<u style="user-select: auto;"><strong style="user-select: auto;">10</strong></u>]
- Swap 15 and 3 because gcd(15,3) = 3. nums = [<u style="user-select: auto;"><strong style="user-select: auto;">3</strong></u>,5,9,<u style="user-select: auto;"><strong style="user-select: auto;">15</strong></u>,10]
- Swap 10 and 15 because gcd(10,15) = 5. nums = [3,5,9,<u style="user-select: auto;"><strong style="user-select: auto;">10</strong></u>,<u style="user-select: auto;"><strong style="user-select: auto;">15</strong></u>]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 3 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>