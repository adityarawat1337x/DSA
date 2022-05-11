<h2><a href="https://leetcode.com/problems/minimum-consecutive-cards-to-pick-up/">2260. Minimum Consecutive Cards to Pick Up</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">cards</code> where <code style="user-select: auto;">cards[i]</code> represents the <strong style="user-select: auto;">value</strong> of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> card. A pair of cards are <strong style="user-select: auto;">matching</strong> if the cards have the <strong style="user-select: auto;">same</strong> value.</p>

<p style="user-select: auto;">Return<em style="user-select: auto;"> the <strong style="user-select: auto;">minimum</strong> number of <strong style="user-select: auto;">consecutive</strong> cards you have to pick up to have a pair of <strong style="user-select: auto;">matching</strong> cards among the picked cards.</em> If it is impossible to have matching cards, return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> cards = [3,4,2,3,4,7]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> We can pick up the cards [3,4,2,3] which contain a matching pair of cards with value 3. Note that picking up the cards [4,2,3,4] is also optimal.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> cards = [1,0,5,3]
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> There is no way to pick up a set of consecutive cards that contain a pair of matching cards.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= cards.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= cards[i] &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
</ul>
</div>