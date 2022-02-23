<h2><a href="https://leetcode.com/problems/graph-connectivity-with-threshold/">1627. Graph Connectivity With Threshold</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">We have <code style="user-select: auto;">n</code> cities labeled from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">n</code>. Two different cities with labels <code style="user-select: auto;">x</code> and <code style="user-select: auto;">y</code> are directly connected by a bidirectional road if and only if <code style="user-select: auto;">x</code> and <code style="user-select: auto;">y</code> share a common divisor <strong style="user-select: auto;">strictly greater</strong> than some <code style="user-select: auto;">threshold</code>. More formally, cities with labels <code style="user-select: auto;">x</code> and <code style="user-select: auto;">y</code> have a road between them if there exists an integer <code style="user-select: auto;">z</code> such that all of the following are true:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">x % z == 0</code>,</li>
	<li style="user-select: auto;"><code style="user-select: auto;">y % z == 0</code>, and</li>
	<li style="user-select: auto;"><code style="user-select: auto;">z &gt; threshold</code>.</li>
</ul>

<p style="user-select: auto;">Given the two integers, <code style="user-select: auto;">n</code> and <code style="user-select: auto;">threshold</code>, and an array of <code style="user-select: auto;">queries</code>, you must determine for each <code style="user-select: auto;">queries[i] = [a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub>]</code> if cities <code style="user-select: auto;">a<sub style="user-select: auto;">i</sub></code> and <code style="user-select: auto;">b<sub style="user-select: auto;">i</sub></code> are connected directly or indirectly.&nbsp;(i.e. there is some path between them).</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">an array </em><code style="user-select: auto;">answer</code><em style="user-select: auto;">, where </em><code style="user-select: auto;">answer.length == queries.length</code><em style="user-select: auto;"> and </em><code style="user-select: auto;">answer[i]</code><em style="user-select: auto;"> is </em><code style="user-select: auto;">true</code><em style="user-select: auto;"> if for the </em><code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code><em style="user-select: auto;"> query, there is a path between </em><code style="user-select: auto;">a<sub style="user-select: auto;">i</sub></code><em style="user-select: auto;"> and </em><code style="user-select: auto;">b<sub style="user-select: auto;">i</sub></code><em style="user-select: auto;">, or </em><code style="user-select: auto;">answer[i]</code><em style="user-select: auto;"> is </em><code style="user-select: auto;">false</code><em style="user-select: auto;"> if there is no path.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/09/ex1.jpg" style="width: 382px; height: 181px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 6, threshold = 2, queries = [[1,4],[2,5],[3,6]]
<strong style="user-select: auto;">Output:</strong> [false,false,true]
<strong style="user-select: auto;">Explanation:</strong> The divisors for each number:
1:   1
2:   1, 2
3:   1, <u style="user-select: auto;">3</u>
4:   1, 2, <u style="user-select: auto;">4</u>
5:   1, <u style="user-select: auto;">5</u>
6:   1, 2, <u style="user-select: auto;">3</u>, <u style="user-select: auto;">6</u>
Using the underlined divisors above the threshold, only cities 3 and 6 share a common divisor, so they are the
only ones directly connected. The result of each query:
[1,4]   1 is not connected to 4
[2,5]   2 is not connected to 5
[3,6]   3 is connected to 6 through path 3--6
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/10/tmp.jpg" style="width: 532px; height: 302px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 6, threshold = 0, queries = [[4,5],[3,4],[3,2],[2,6],[1,3]]
<strong style="user-select: auto;">Output:</strong> [true,true,true,true,true]
<strong style="user-select: auto;">Explanation:</strong> The divisors for each number are the same as the previous example. However, since the threshold is 0,
all divisors can be used. Since all numbers share 1 as a divisor, all cities are connected.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/17/ex3.jpg" style="width: 282px; height: 282px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 5, threshold = 1, queries = [[4,5],[4,5],[3,2],[2,3],[3,4]]
<strong style="user-select: auto;">Output:</strong> [false,false,false,false,false]
<strong style="user-select: auto;">Explanation:</strong> Only cities 2 and 4 share a common divisor 2 which is strictly greater than the threshold 1, so they are the only ones directly connected.
Please notice that there can be multiple queries for the same pair of nodes [x, y], and that the query [x, y] is equivalent to the query [y, x].
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= threshold &lt;= n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= queries.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">queries[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub> &lt;= cities</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">a<sub style="user-select: auto;">i</sub> != b<sub style="user-select: auto;">i</sub></code></li>
</ul>
</div>