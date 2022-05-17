<h2><a href="https://leetcode.com/problems/find-two-non-overlapping-sub-arrays-each-with-target-sum/">1477. Find Two Non-overlapping Sub-arrays Each With Target Sum</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of integers <code style="user-select: auto;">arr</code> and an integer <code style="user-select: auto;">target</code>.</p>

<p style="user-select: auto;">You have to find <strong style="user-select: auto;">two non-overlapping sub-arrays</strong> of <code style="user-select: auto;">arr</code> each with a sum equal <code style="user-select: auto;">target</code>. There can be multiple answers so you have to find an answer where the sum of the lengths of the two sub-arrays is <strong style="user-select: auto;">minimum</strong>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum sum of the lengths</em> of the two required sub-arrays, or return <code style="user-select: auto;">-1</code> if you cannot find such two sub-arrays.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [3,2,2,4,3], target = 3
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> Only two sub-arrays have sum = 3 ([3] and [3]). The sum of their lengths is 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [7,3,4,7], target = 7
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> Although we have three non-overlapping sub-arrays of sum = 7 ([7], [3,4] and [7]), but we will choose the first and third sub-arrays as the sum of their lengths is 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [4,3,2,6,2,3,4], target = 6
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> We have only one sub-array of sum = 6.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr[i] &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= target &lt;= 10<sup style="user-select: auto;">8</sup></code></li>
</ul>
</div>