<h2><a href="https://leetcode.com/problems/sum-of-scores-of-built-strings/">2223. Sum of Scores of Built Strings</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are <strong style="user-select: auto;">building</strong> a string <code style="user-select: auto;">s</code> of length <code style="user-select: auto;">n</code> <strong style="user-select: auto;">one</strong> character at a time, <strong style="user-select: auto;">prepending</strong> each new character to the <strong style="user-select: auto;">front</strong> of the string. The strings are labeled from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">n</code>, where the string with length <code style="user-select: auto;">i</code> is labeled <code style="user-select: auto;">s<sub style="user-select: auto;">i</sub></code>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, for <code style="user-select: auto;">s = "abaca"</code>, <code style="user-select: auto;">s<sub style="user-select: auto;">1</sub> == "a"</code>, <code style="user-select: auto;">s<sub style="user-select: auto;">2</sub> == "ca"</code>, <code style="user-select: auto;">s<sub style="user-select: auto;">3</sub> == "aca"</code>, etc.</li>
</ul>

<p style="user-select: auto;">The <strong style="user-select: auto;">score</strong> of <code style="user-select: auto;">s<sub style="user-select: auto;">i</sub></code> is the length of the <strong style="user-select: auto;">longest common prefix</strong> between <code style="user-select: auto;">s<sub style="user-select: auto;">i</sub></code> and <code style="user-select: auto;">s<sub style="user-select: auto;">n</sub></code> (Note that <code style="user-select: auto;">s == s<sub style="user-select: auto;">n</sub></code>).</p>

<p style="user-select: auto;">Given the final string <code style="user-select: auto;">s</code>, return<em style="user-select: auto;"> the <strong style="user-select: auto;">sum</strong> of the <strong style="user-select: auto;">score</strong> of every </em><code style="user-select: auto;">s<sub style="user-select: auto;">i</sub></code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "babab"
<strong style="user-select: auto;">Output:</strong> 9
<strong style="user-select: auto;">Explanation:</strong>
For s<sub style="user-select: auto;">1</sub> == "b", the longest common prefix is "b" which has a score of 1.
For s<sub style="user-select: auto;">2</sub> == "ab", there is no common prefix so the score is 0.
For s<sub style="user-select: auto;">3</sub> == "bab", the longest common prefix is "bab" which has a score of 3.
For s<sub style="user-select: auto;">4</sub> == "abab", there is no common prefix so the score is 0.
For s<sub style="user-select: auto;">5</sub> == "babab", the longest common prefix is "babab" which has a score of 5.
The sum of the scores is 1 + 0 + 3 + 0 + 5 = 9, so we return 9.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "azbazbzaz"
<strong style="user-select: auto;">Output:</strong> 14
<strong style="user-select: auto;">Explanation:</strong> 
For s<sub style="user-select: auto;">2</sub> == "az", the longest common prefix is "az" which has a score of 2.
For s<sub style="user-select: auto;">6</sub> == "azbzaz", the longest common prefix is "azb" which has a score of 3.
For s<sub style="user-select: auto;">9</sub> == "azbazbzaz", the longest common prefix is "azbazbzaz" which has a score of 9.
For all other s<sub style="user-select: auto;">i</sub>, the score is 0.
The sum of the scores is 2 + 3 + 9 = 14, so we return 14.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of lowercase English letters.</li>
</ul>
</div>