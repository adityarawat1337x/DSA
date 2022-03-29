<h2><a href="https://leetcode.com/problems/maximum-value-of-k-coins-from-piles/">2218. Maximum Value of K Coins From Piles</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There are <code style="user-select: auto;">n</code> <strong style="user-select: auto;">piles</strong> of coins on a table. Each pile consists of a <strong style="user-select: auto;">positive number</strong> of coins of assorted denominations.</p>

<p style="user-select: auto;">In one move, you can choose any coin on <strong style="user-select: auto;">top</strong> of any pile, remove it, and add it to your wallet.</p>

<p style="user-select: auto;">Given a list <code style="user-select: auto;">piles</code>, where <code style="user-select: auto;">piles[i]</code> is a list of integers denoting the composition of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> pile from <strong style="user-select: auto;">top to bottom</strong>, and a positive integer <code style="user-select: auto;">k</code>, return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum total value</strong> of coins you can have in your wallet if you choose <strong style="user-select: auto;">exactly</strong></em> <code style="user-select: auto;">k</code> <em style="user-select: auto;">coins optimally</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/11/09/e1.png" style="width: 600px; height: 243px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> piles = [[1,100,3],[7,8,9]], k = 2
<strong style="user-select: auto;">Output:</strong> 101
<strong style="user-select: auto;">Explanation:</strong>
The above diagram shows the different ways we can choose k coins.
The maximum total we can obtain is 101.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> piles = [[100],[100],[100],[100],[100],[100],[1,1,1,1,1,1,700]], k = 7
<strong style="user-select: auto;">Output:</strong> 706
<strong style="user-select: auto;">Explanation:
</strong>The maximum total can be obtained if we choose all coins from the last pile.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == piles.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= piles[i][j] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= sum(piles[i].length) &lt;= 2000</code></li>
</ul>
</div>