<h2><a href="https://leetcode.com/problems/random-pick-with-weight/">528. Random Pick with Weight</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> array of positive integers <code style="user-select: auto;">w</code> where <code style="user-select: auto;">w[i]</code> describes the <strong style="user-select: auto;">weight</strong> of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> index.</p>

<p style="user-select: auto;">You need to implement the function <code style="user-select: auto;">pickIndex()</code>, which <strong style="user-select: auto;">randomly</strong> picks an index in the range <code style="user-select: auto;">[0, w.length - 1]</code> (<strong style="user-select: auto;">inclusive</strong>) and returns it. The <strong style="user-select: auto;">probability</strong> of picking an index <code style="user-select: auto;">i</code> is <code style="user-select: auto;">w[i] / sum(w)</code>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, if <code style="user-select: auto;">w = [1, 3]</code>, the probability of picking index <code style="user-select: auto;">0</code> is <code style="user-select: auto;">1 / (1 + 3) = 0.25</code> (i.e., <code style="user-select: auto;">25%</code>), and the probability of picking index <code style="user-select: auto;">1</code> is <code style="user-select: auto;">3 / (1 + 3) = 0.75</code> (i.e., <code style="user-select: auto;">75%</code>).</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["Solution","pickIndex"]
[[[1]],[]]
<strong style="user-select: auto;">Output</strong>
[null,0]

<strong style="user-select: auto;">Explanation</strong>
Solution solution = new Solution([1]);
solution.pickIndex(); // return 0. The only option is to return 0 since there is only one element in w.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["Solution","pickIndex","pickIndex","pickIndex","pickIndex","pickIndex"]
[[[1,3]],[],[],[],[],[]]
<strong style="user-select: auto;">Output</strong>
[null,1,1,1,1,0]

<strong style="user-select: auto;">Explanation</strong>
Solution solution = new Solution([1, 3]);
solution.pickIndex(); // return 1. It is returning the second element (index = 1) that has a probability of 3/4.
solution.pickIndex(); // return 1
solution.pickIndex(); // return 1
solution.pickIndex(); // return 1
solution.pickIndex(); // return 0. It is returning the first element (index = 0) that has a probability of 1/4.

Since this is a randomization problem, multiple answers are allowed.
All of the following outputs can be considered correct:
[null,1,1,1,1,0]
[null,1,1,1,1,1]
[null,1,1,1,0,0]
[null,1,1,1,0,1]
[null,1,0,1,0,0]
......
and so on.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= w.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= w[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">pickIndex</code> will be called at most <code style="user-select: auto;">10<sup style="user-select: auto;">4</sup></code> times.</li>
</ul>
</div>