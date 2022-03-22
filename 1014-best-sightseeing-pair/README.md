<h2><a href="https://leetcode.com/problems/best-sightseeing-pair/">1014. Best Sightseeing Pair</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">values</code> where values[i] represents the value of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> sightseeing spot. Two sightseeing spots <code style="user-select: auto;">i</code> and <code style="user-select: auto;">j</code> have a <strong style="user-select: auto;">distance</strong> <code style="user-select: auto;">j - i</code> between them.</p>

<p style="user-select: auto;">The score of a pair (<code style="user-select: auto;">i &lt; j</code>) of sightseeing spots is <code style="user-select: auto;">values[i] + values[j] + i - j</code>: the sum of the values of the sightseeing spots, minus the distance between them.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the maximum score of a pair of sightseeing spots</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> values = [8,1,5,2,6]
<strong style="user-select: auto;">Output:</strong> 11
<strong style="user-select: auto;">Explanation:</strong> i = 0, j = 2, values[i] + values[j] + i - j = 8 + 5 + 0 - 2 = 11
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> values = [1,2]
<strong style="user-select: auto;">Output:</strong> 2
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= values.length &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= values[i] &lt;= 1000</code></li>
</ul>
</div>