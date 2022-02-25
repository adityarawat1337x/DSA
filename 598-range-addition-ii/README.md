<h2><a href="https://leetcode.com/problems/range-addition-ii/">598. Range Addition II</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an <code style="user-select: auto;">m x n</code> matrix <code style="user-select: auto;">M</code> initialized with all <code style="user-select: auto;">0</code>'s and an array of operations <code style="user-select: auto;">ops</code>, where <code style="user-select: auto;">ops[i] = [a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub>]</code> means <code style="user-select: auto;">M[x][y]</code> should be incremented by one for all <code style="user-select: auto;">0 &lt;= x &lt; a<sub style="user-select: auto;">i</sub></code> and <code style="user-select: auto;">0 &lt;= y &lt; b<sub style="user-select: auto;">i</sub></code>.</p>

<p style="user-select: auto;">Count and return <em style="user-select: auto;">the number of maximum integers in the matrix after performing all the operations</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/02/ex1.jpg" style="width: 750px; height: 176px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> m = 3, n = 3, ops = [[2,2],[3,3]]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> The maximum integer in M is 2, and there are four of it in M. So return 4.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> m = 3, n = 3, ops = [[2,2],[3,3],[3,3],[3,3],[2,2],[3,3],[3,3],[3,3],[2,2],[3,3],[3,3],[3,3]]
<strong style="user-select: auto;">Output:</strong> 4
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> m = 3, n = 3, ops = []
<strong style="user-select: auto;">Output:</strong> 9
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 4 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= ops.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">ops[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= a<sub style="user-select: auto;">i</sub> &lt;= m</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= b<sub style="user-select: auto;">i</sub> &lt;= n</code></li>
</ul>
</div>