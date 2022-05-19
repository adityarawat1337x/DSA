<h2><a href="https://leetcode.com/problems/xor-queries-of-a-subarray/">1310. XOR Queries of a Subarray</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array <code style="user-select: auto;">arr</code> of positive integers. You are also given the array <code style="user-select: auto;">queries</code> where <code style="user-select: auto;">queries[i] = [left<sub style="user-select: auto;">i, </sub>right<sub style="user-select: auto;">i</sub>]</code>.</p>

<p style="user-select: auto;">For each query <code style="user-select: auto;">i</code> compute the <strong style="user-select: auto;">XOR</strong> of elements from <code style="user-select: auto;">left<sub style="user-select: auto;">i</sub></code> to <code style="user-select: auto;">right<sub style="user-select: auto;">i</sub></code> (that is, <code style="user-select: auto;">arr[left<sub style="user-select: auto;">i</sub>] XOR arr[left<sub style="user-select: auto;">i</sub> + 1] XOR ... XOR arr[right<sub style="user-select: auto;">i</sub>]</code> ).</p>

<p style="user-select: auto;">Return an array <code style="user-select: auto;">answer</code> where <code style="user-select: auto;">answer[i]</code> is the answer to the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> query.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [1,3,4,8], queries = [[0,1],[1,2],[0,3],[3,3]]
<strong style="user-select: auto;">Output:</strong> [2,7,14,8] 
<strong style="user-select: auto;">Explanation:</strong> 
The binary representation of the elements in the array are:
1 = 0001 
3 = 0011 
4 = 0100 
8 = 1000 
The XOR values for queries are:
[0,1] = 1 xor 3 = 2 
[1,2] = 3 xor 4 = 7 
[0,3] = 1 xor 3 xor 4 xor 8 = 14 
[3,3] = 8
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [4,8,2,10], queries = [[2,3],[1,3],[0,0],[0,3]]
<strong style="user-select: auto;">Output:</strong> [8,0,4,4]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr.length, queries.length &lt;= 3 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">queries[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= left<sub style="user-select: auto;">i</sub> &lt;= right<sub style="user-select: auto;">i</sub> &lt; arr.length</code></li>
</ul>
</div>