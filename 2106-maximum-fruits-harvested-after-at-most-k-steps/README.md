<h2><a href="https://leetcode.com/problems/maximum-fruits-harvested-after-at-most-k-steps/">2106. Maximum Fruits Harvested After at Most K Steps</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Fruits are available at some positions on an infinite x-axis. You are given a 2D integer array <code style="user-select: auto;">fruits</code> where <code style="user-select: auto;">fruits[i] = [position<sub style="user-select: auto;">i</sub>, amount<sub style="user-select: auto;">i</sub>]</code> depicts <code style="user-select: auto;">amount<sub style="user-select: auto;">i</sub></code> fruits at the position <code style="user-select: auto;">position<sub style="user-select: auto;">i</sub></code>. <code style="user-select: auto;">fruits</code> is already <strong style="user-select: auto;">sorted</strong> by <code style="user-select: auto;">position<sub style="user-select: auto;">i</sub></code> in <strong style="user-select: auto;">ascending order</strong>, and each <code style="user-select: auto;">position<sub style="user-select: auto;">i</sub></code> is <strong style="user-select: auto;">unique</strong>.</p>

<p style="user-select: auto;">You are also given an integer <code style="user-select: auto;">startPos</code> and an integer <code style="user-select: auto;">k</code>. Initially, you are at the position <code style="user-select: auto;">startPos</code>. From any position, you can either walk to the <strong style="user-select: auto;">left or right</strong>. It takes <strong style="user-select: auto;">one step</strong> to move <strong style="user-select: auto;">one unit</strong> on the x-axis, and you can walk <strong style="user-select: auto;">at most</strong> <code style="user-select: auto;">k</code> steps in total. For every position you reach, you harvest all the fruits at that position, and the fruits will disappear from that position.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum total number</strong> of fruits you can harvest</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/11/21/1.png" style="width: 472px; height: 115px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> fruits = [[2,8],[6,3],[8,6]], startPos = 5, k = 4
<strong style="user-select: auto;">Output:</strong> 9
<strong style="user-select: auto;">Explanation:</strong> 
The optimal way is to:
- Move right to position 6 and harvest 3 fruits
- Move right to position 8 and harvest 6 fruits
You moved 3 steps and harvested 3 + 6 = 9 fruits in total.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/11/21/2.png" style="width: 512px; height: 129px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> fruits = [[0,9],[4,1],[5,7],[6,2],[7,4],[10,9]], startPos = 5, k = 4
<strong style="user-select: auto;">Output:</strong> 14
<strong style="user-select: auto;">Explanation:</strong> 
You can move at most k = 4 steps, so you cannot reach position 0 nor 10.
The optimal way is to:
- Harvest the 7 fruits at the starting position 5
- Move left to position 4 and harvest 1 fruit
- Move right to position 6 and harvest 2 fruits
- Move right to position 7 and harvest 4 fruits
You moved 1 + 3 = 4 steps and harvested 7 + 1 + 2 + 4 = 14 fruits in total.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/11/21/3.png" style="width: 476px; height: 100px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> fruits = [[0,3],[6,4],[8,5]], startPos = 3, k = 2
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong>
You can move at most k = 2 steps and cannot reach any position with fruits.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= fruits.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">fruits[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= startPos, position<sub style="user-select: auto;">i</sub> &lt;= 2 * 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">position<sub style="user-select: auto;">i-1</sub> &lt; position<sub style="user-select: auto;">i</sub></code> for any <code style="user-select: auto;">i &gt; 0</code>&nbsp;(<strong style="user-select: auto;">0-indexed</strong>)</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= amount<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= k &lt;= 2 * 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>