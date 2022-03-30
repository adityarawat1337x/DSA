<h2><a href="https://leetcode.com/problems/number-of-wonderful-substrings/">1915. Number of Wonderful Substrings</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A <strong style="user-select: auto;">wonderful</strong> string is a string where <strong style="user-select: auto;">at most one</strong> letter appears an <strong style="user-select: auto;">odd</strong> number of times.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, <code style="user-select: auto;">"ccjjc"</code> and <code style="user-select: auto;">"abab"</code> are wonderful, but <code style="user-select: auto;">"ab"</code> is not.</li>
</ul>

<p style="user-select: auto;">Given a string <code style="user-select: auto;">word</code> that consists of the first ten lowercase English letters (<code style="user-select: auto;">'a'</code> through <code style="user-select: auto;">'j'</code>), return <em style="user-select: auto;">the <strong style="user-select: auto;">number of wonderful non-empty substrings</strong> in </em><code style="user-select: auto;">word</code><em style="user-select: auto;">. If the same substring appears multiple times in </em><code style="user-select: auto;">word</code><em style="user-select: auto;">, then count <strong style="user-select: auto;">each occurrence</strong> separately.</em></p>

<p style="user-select: auto;">A <strong style="user-select: auto;">substring</strong> is a contiguous sequence of characters in a string.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word = "aba"
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> The four wonderful substrings are underlined below:
- "<u style="user-select: auto;"><strong style="user-select: auto;">a</strong></u>ba" -&gt; "a"
- "a<u style="user-select: auto;"><strong style="user-select: auto;">b</strong></u>a" -&gt; "b"
- "ab<u style="user-select: auto;"><strong style="user-select: auto;">a</strong></u>" -&gt; "a"
- "<u style="user-select: auto;"><strong style="user-select: auto;">aba</strong></u>" -&gt; "aba"
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word = "aabb"
<strong style="user-select: auto;">Output:</strong> 9
<strong style="user-select: auto;">Explanation:</strong> The nine wonderful substrings are underlined below:
- "<strong style="user-select: auto;"><u style="user-select: auto;">a</u></strong>abb" -&gt; "a"
- "<u style="user-select: auto;"><strong style="user-select: auto;">aa</strong></u>bb" -&gt; "aa"
- "<u style="user-select: auto;"><strong style="user-select: auto;">aab</strong></u>b" -&gt; "aab"
- "<u style="user-select: auto;"><strong style="user-select: auto;">aabb</strong></u>" -&gt; "aabb"
- "a<u style="user-select: auto;"><strong style="user-select: auto;">a</strong></u>bb" -&gt; "a"
- "a<u style="user-select: auto;"><strong style="user-select: auto;">abb</strong></u>" -&gt; "abb"
- "aa<u style="user-select: auto;"><strong style="user-select: auto;">b</strong></u>b" -&gt; "b"
- "aa<u style="user-select: auto;"><strong style="user-select: auto;">bb</strong></u>" -&gt; "bb"
- "aab<u style="user-select: auto;"><strong style="user-select: auto;">b</strong></u>" -&gt; "b"
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word = "he"
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The two wonderful substrings are underlined below:
- "<b style="user-select: auto;"><u style="user-select: auto;">h</u></b>e" -&gt; "h"
- "h<strong style="user-select: auto;"><u style="user-select: auto;">e</u></strong>" -&gt; "e"
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= word.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">word</code> consists of lowercase English letters from <code style="user-select: auto;">'a'</code>&nbsp;to <code style="user-select: auto;">'j'</code>.</li>
</ul></div>