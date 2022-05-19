<h2><a href="https://leetcode.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/">1442. Count Triplets That Can Form Two Arrays of Equal XOR</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of integers <code style="user-select: auto;">arr</code>.</p>

<p style="user-select: auto;">We want to select three indices <code style="user-select: auto;">i</code>, <code style="user-select: auto;">j</code> and <code style="user-select: auto;">k</code> where <code style="user-select: auto;">(0 &lt;= i &lt; j &lt;= k &lt; arr.length)</code>.</p>

<p style="user-select: auto;">Let's define <code style="user-select: auto;">a</code> and <code style="user-select: auto;">b</code> as follows:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">a = arr[i] ^ arr[i + 1] ^ ... ^ arr[j - 1]</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">b = arr[j] ^ arr[j + 1] ^ ... ^ arr[k]</code></li>
</ul>

<p style="user-select: auto;">Note that <strong style="user-select: auto;">^</strong> denotes the <strong style="user-select: auto;">bitwise-xor</strong> operation.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the number of triplets</em> (<code style="user-select: auto;">i</code>, <code style="user-select: auto;">j</code> and <code style="user-select: auto;">k</code>) Where <code style="user-select: auto;">a == b</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [2,3,1,6,7]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> The triplets are (0,1,2), (0,2,2), (2,3,4) and (2,4,4)
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [1,1,1,1,1]
<strong style="user-select: auto;">Output:</strong> 10
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr.length &lt;= 300</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">8</sup></code></li>
</ul>
</div>