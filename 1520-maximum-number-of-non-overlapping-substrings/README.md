<h2><a href="https://leetcode.com/problems/maximum-number-of-non-overlapping-substrings/">1520. Maximum Number of Non-Overlapping Substrings</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a string <code style="user-select: auto;">s</code>&nbsp;of lowercase letters, you need to find the maximum number of <strong style="user-select: auto;">non-empty</strong> substrings of&nbsp;<code style="user-select: auto;">s</code>&nbsp;that meet the following conditions:</p>

<ol style="user-select: auto;">
	<li style="user-select: auto;">The substrings do not overlap, that is for any two substrings <code style="user-select: auto;">s[i..j]</code> and <code style="user-select: auto;">s[k..l]</code>, either <code style="user-select: auto;">j &lt; k</code> or <code style="user-select: auto;">i &gt; l</code>&nbsp;is true.</li>
	<li style="user-select: auto;">A substring that contains a certain character&nbsp;<code style="user-select: auto;">c</code>&nbsp;must also contain all occurrences of <code style="user-select: auto;">c</code>.</li>
</ol>

<p style="user-select: auto;">Find <em style="user-select: auto;">the maximum number of substrings that meet the above conditions</em>. If there are multiple solutions with the same number of substrings, <em style="user-select: auto;">return the one with minimum total length.&nbsp;</em>It can be shown that there exists a unique solution of minimum total length.</p>

<p style="user-select: auto;">Notice that you can return the substrings in <strong style="user-select: auto;">any</strong> order.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "adefaddaccc"
<strong style="user-select: auto;">Output:</strong> ["e","f","ccc"]
<b style="user-select: auto;">Explanation:</b>&nbsp;The following are all the possible substrings that meet the conditions:
[
&nbsp; "adefaddaccc"
&nbsp; "adefadda",
&nbsp; "ef",
&nbsp; "e",
  "f",
&nbsp; "ccc",
]
If we choose the first string, we cannot choose anything else and we'd get only 1. If we choose "adefadda", we are left with "ccc" which is the only one that doesn't overlap, thus obtaining 2 substrings. Notice also, that it's not optimal to choose "ef" since it can be split into two. Therefore, the optimal way is to choose ["e","f","ccc"] which gives us 3 substrings. No other solution of the same number of substrings exist.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abbaccd"
<strong style="user-select: auto;">Output:</strong> ["d","bb","cc"]
<b style="user-select: auto;">Explanation: </b>Notice that while the set of substrings ["d","abba","cc"] also has length 3, it's considered incorrect since it has larger total length.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10^5</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code>&nbsp;contains only lowercase English letters.</li>
</ul>
</div>