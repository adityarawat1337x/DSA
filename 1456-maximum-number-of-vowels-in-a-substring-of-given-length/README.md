<h2><a href="https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/">1456. Maximum Number of Vowels in a Substring of Given Length</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a string <code style="user-select: auto;">s</code> and an integer <code style="user-select: auto;">k</code>, return <em style="user-select: auto;">the maximum number of vowel letters in any substring of </em><code style="user-select: auto;">s</code><em style="user-select: auto;"> with length </em><code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Vowel letters</strong> in English are <code style="user-select: auto;">'a'</code>, <code style="user-select: auto;">'e'</code>, <code style="user-select: auto;">'i'</code>, <code style="user-select: auto;">'o'</code>, and <code style="user-select: auto;">'u'</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abciiidef", k = 3
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The substring "iii" contains 3 vowel letters.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "aeiou", k = 2
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> Any substring of length 2 contains 2 vowels.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "leetcode", k = 3
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> "lee", "eet" and "ode" contain 2 vowels.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of lowercase English letters.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= s.length</code></li>
</ul>
</div>