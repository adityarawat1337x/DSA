<h2><a href="https://leetcode.com/problems/longest-turbulent-subarray/">978. Longest Turbulent Subarray</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">arr</code>, return <em style="user-select: auto;">the length of a maximum size turbulent subarray of</em> <code style="user-select: auto;">arr</code>.</p>

<p style="user-select: auto;">A subarray is <strong style="user-select: auto;">turbulent</strong> if the comparison sign flips between each adjacent pair of elements in the subarray.</p>

<p style="user-select: auto;">More formally, a subarray <code style="user-select: auto;">[arr[i], arr[i + 1], ..., arr[j]]</code> of <code style="user-select: auto;">arr</code> is said to be turbulent if and only if:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For <code style="user-select: auto;">i &lt;= k &lt; j</code>:

	<ul style="user-select: auto;">
		<li style="user-select: auto;"><code style="user-select: auto;">arr[k] &gt; arr[k + 1]</code> when <code style="user-select: auto;">k</code> is odd, and</li>
		<li style="user-select: auto;"><code style="user-select: auto;">arr[k] &lt; arr[k + 1]</code> when <code style="user-select: auto;">k</code> is even.</li>
	</ul>
	</li>
	<li style="user-select: auto;">Or, for <code style="user-select: auto;">i &lt;= k &lt; j</code>:
	<ul style="user-select: auto;">
		<li style="user-select: auto;"><code style="user-select: auto;">arr[k] &gt; arr[k + 1]</code> when <code style="user-select: auto;">k</code> is even, and</li>
		<li style="user-select: auto;"><code style="user-select: auto;">arr[k] &lt; arr[k + 1]</code> when <code style="user-select: auto;">k</code> is odd.</li>
	</ul>
	</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [9,4,2,10,7,8,8,1,9]
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> arr[1] &gt; arr[2] &lt; arr[3] &gt; arr[4] &lt; arr[5]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [4,8,12,16]
<strong style="user-select: auto;">Output:</strong> 2
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [100]
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr.length &lt;= 4 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>