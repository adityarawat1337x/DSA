<h2><a href="https://leetcode.com/problems/minimum-ascii-delete-sum-for-two-strings/">712. Minimum ASCII Delete Sum for Two Strings</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two strings <code style="user-select: auto;">s1</code> and&nbsp;<code style="user-select: auto;">s2</code>, return <em style="user-select: auto;">the lowest <strong style="user-select: auto;">ASCII</strong> sum of deleted characters to make two strings equal</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s1 = "sea", s2 = "eat"
<strong style="user-select: auto;">Output:</strong> 231
<strong style="user-select: auto;">Explanation:</strong> Deleting "s" from "sea" adds the ASCII value of "s" (115) to the sum.
Deleting "t" from "eat" adds 116 to the sum.
At the end, both strings are equal, and 115 + 116 = 231 is the minimum sum possible to achieve this.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s1 = "delete", s2 = "leet"
<strong style="user-select: auto;">Output:</strong> 403
<strong style="user-select: auto;">Explanation:</strong> Deleting "dee" from "delete" to turn the string into "let",
adds 100[d] + 101[e] + 101[e] to the sum.
Deleting "e" from "leet" adds 101[e] to the sum.
At the end, both strings are equal to "let", and the answer is 100+101+101+101 = 403.
If instead we turned both strings into "lee" or "eet", we would get answers of 433 or 417, which are higher.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s1.length, s2.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s1</code> and <code style="user-select: auto;">s2</code> consist of lowercase English letters.</li>
</ul>
</div>