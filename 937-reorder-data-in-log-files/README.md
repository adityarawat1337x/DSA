<h2><a href="https://leetcode.com/problems/reorder-data-in-log-files/">937. Reorder Data in Log Files</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of <code style="user-select: auto;">logs</code>. Each log is a space-delimited string of words, where the first word is the <strong style="user-select: auto;">identifier</strong>.</p>

<p style="user-select: auto;">There are two types of logs:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><b style="user-select: auto;">Letter-logs</b>: All words (except the identifier) consist of lowercase English letters.</li>
	<li style="user-select: auto;"><strong style="user-select: auto;">Digit-logs</strong>: All words (except the identifier) consist of digits.</li>
</ul>

<p style="user-select: auto;">Reorder these logs so that:</p>

<ol style="user-select: auto;">
	<li style="user-select: auto;">The <strong style="user-select: auto;">letter-logs</strong> come before all <strong style="user-select: auto;">digit-logs</strong>.</li>
	<li style="user-select: auto;">The <strong style="user-select: auto;">letter-logs</strong> are sorted lexicographically by their contents. If their contents are the same, then sort them lexicographically by their identifiers.</li>
	<li style="user-select: auto;">The <strong style="user-select: auto;">digit-logs</strong> maintain their relative ordering.</li>
</ol>

<p style="user-select: auto;">Return <em style="user-select: auto;">the final order of the logs</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> logs = ["dig1 8 1 5 1","let1 art can","dig2 3 6","let2 own kit dig","let3 art zero"]
<strong style="user-select: auto;">Output:</strong> ["let1 art can","let3 art zero","let2 own kit dig","dig1 8 1 5 1","dig2 3 6"]
<strong style="user-select: auto;">Explanation:</strong>
The letter-log contents are all different, so their ordering is "art can", "art zero", "own kit dig".
The digit-logs have a relative order of "dig1 8 1 5 1", "dig2 3 6".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> logs = ["a1 9 2 3 1","g1 act car","zo4 4 7","ab1 off key dog","a8 act zoo"]
<strong style="user-select: auto;">Output:</strong> ["g1 act car","a8 act zoo","ab1 off key dog","a1 9 2 3 1","zo4 4 7"]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= logs.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= logs[i].length &lt;= 100</code></li>
	<li style="user-select: auto;">All the tokens of <code style="user-select: auto;">logs[i]</code> are separated by a <strong style="user-select: auto;">single</strong> space.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">logs[i]</code> is guaranteed to have an identifier and at least one word after the identifier.</li>
</ul>
</div>