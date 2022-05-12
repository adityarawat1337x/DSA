<h2><a href="https://leetcode.com/problems/replace-the-substring-for-balanced-string/">1234. Replace the Substring for Balanced String</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string s of length <code style="user-select: auto;">n</code> containing only four kinds of characters: <code style="user-select: auto;">'Q'</code>, <code style="user-select: auto;">'W'</code>, <code style="user-select: auto;">'E'</code>, and <code style="user-select: auto;">'R'</code>.</p>

<p style="user-select: auto;">A string is said to be <strong style="user-select: auto;">balanced</strong><em style="user-select: auto;"> </em>if each of its characters appears <code style="user-select: auto;">n / 4</code> times where <code style="user-select: auto;">n</code> is the length of the string.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum length of the substring that can be replaced with <strong style="user-select: auto;">any</strong> other string of the same length to make </em><code style="user-select: auto;">s</code><em style="user-select: auto;"> <strong style="user-select: auto;">balanced</strong></em>. If s is already <strong style="user-select: auto;">balanced</strong>, return <code style="user-select: auto;">0</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "QWER"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> s is already balanced.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "QQWE"
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> We need to replace a 'Q' to 'R', so that "RQWE" (or "QRWE") is balanced.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "QQQW"
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> We can replace the first "QQ" to "ER". 
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == s.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">4 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n</code> is a multiple of <code style="user-select: auto;">4</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> contains only <code style="user-select: auto;">'Q'</code>, <code style="user-select: auto;">'W'</code>, <code style="user-select: auto;">'E'</code>, and <code style="user-select: auto;">'R'</code>.</li>
</ul>
</div>