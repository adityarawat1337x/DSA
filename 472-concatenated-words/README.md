<h2><a href="https://leetcode.com/problems/concatenated-words/">472. Concatenated Words</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of strings <code style="user-select: auto;">words</code> (<strong style="user-select: auto;">without duplicates</strong>), return <em style="user-select: auto;">all the <strong style="user-select: auto;">concatenated words</strong> in the given list of</em> <code style="user-select: auto;">words</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">concatenated word</strong> is defined as a string that is comprised entirely of at least two shorter words in the given array.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["cat","cats","catsdogcats","dog","dogcatsdog","hippopotamuses","rat","ratcatdogcat"]
<strong style="user-select: auto;">Output:</strong> ["catsdogcats","dogcatsdog","ratcatdogcat"]
<strong style="user-select: auto;">Explanation:</strong> "catsdogcats" can be concatenated by "cats", "dog" and "cats"; 
"dogcatsdog" can be concatenated by "dog", "cats" and "dog"; 
"ratcatdogcat" can be concatenated by "rat", "cat", "dog" and "cat".</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["cat","dog","catdog"]
<strong style="user-select: auto;">Output:</strong> ["catdog"]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= words[i].length &lt;= 30</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">words[i]</code> consists of only lowercase English letters.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= sum(words[i].length) &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>