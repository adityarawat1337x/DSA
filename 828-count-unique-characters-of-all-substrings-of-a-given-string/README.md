<h2><a href="https://leetcode.com/problems/count-unique-characters-of-all-substrings-of-a-given-string/">828. Count Unique Characters of All Substrings of a Given String</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Let's define a function <code style="user-select: auto;">countUniqueChars(s)</code> that returns the number of unique characters on <code style="user-select: auto;">s</code>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, calling <code style="user-select: auto;">countUniqueChars(s)</code> if <code style="user-select: auto;">s = "LEETCODE"</code> then <code style="user-select: auto;">"L"</code>, <code style="user-select: auto;">"T"</code>, <code style="user-select: auto;">"C"</code>, <code style="user-select: auto;">"O"</code>, <code style="user-select: auto;">"D"</code> are the unique characters since they appear only once in <code style="user-select: auto;">s</code>, therefore <code style="user-select: auto;">countUniqueChars(s) = 5</code>.</li>
</ul>

<p style="user-select: auto;">Given a string <code style="user-select: auto;">s</code>, return the sum of <code style="user-select: auto;">countUniqueChars(t)</code> where <code style="user-select: auto;">t</code> is a substring of <code style="user-select: auto;">s</code>.</p>

<p style="user-select: auto;">Notice that some substrings can be repeated so in this case you have to count the repeated ones too.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "ABC"
<strong style="user-select: auto;">Output:</strong> 10
<strong style="user-select: auto;">Explanation: </strong>All possible substrings are: "A","B","C","AB","BC" and "ABC".
Evey substring is composed with only unique letters.
Sum of lengths of all substring is 1 + 1 + 1 + 2 + 2 + 3 = 10
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "ABA"
<strong style="user-select: auto;">Output:</strong> 8
<strong style="user-select: auto;">Explanation: </strong>The same as example 1, except <code style="user-select: auto;">countUniqueChars</code>("ABA") = 1.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "LEETCODE"
<strong style="user-select: auto;">Output:</strong> 92
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of uppercase English letters only.</li>
</ul>
</div>