<h2><a href="https://leetcode.com/problems/least-number-of-unique-integers-after-k-removals/">1481. Least Number of Unique Integers after K Removals</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of integers&nbsp;<code style="user-select: auto;">arr</code>&nbsp;and an integer <code style="user-select: auto;">k</code>.&nbsp;Find the <em style="user-select: auto;">least number of unique integers</em>&nbsp;after removing <strong style="user-select: auto;">exactly</strong> <code style="user-select: auto;">k</code> elements<b style="user-select: auto;">.</b></p>

<ol style="user-select: auto;">
</ol>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input: </strong>arr = [5,5,4], k = 1
<strong style="user-select: auto;">Output: </strong>1
<strong style="user-select: auto;">Explanation</strong>: Remove the single 4, only 5 is left.
</pre>
<strong style="user-select: auto;">Example 2:</strong>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input: </strong>arr = [4,3,1,1,3,3,2], k = 3
<strong style="user-select: auto;">Output: </strong>2
<strong style="user-select: auto;">Explanation</strong>: Remove 4, 2 and either one of the two 1s or three 3s. 1 and 3 will be left.</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr.length&nbsp;&lt;= 10^5</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr[i] &lt;= 10^9</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= k&nbsp;&lt;= arr.length</code></li>
</ul></div>