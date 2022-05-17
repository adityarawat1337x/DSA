<h2><a href="https://leetcode.com/problems/longest-substring-of-all-vowels-in-order/">1839. Longest Substring Of All Vowels in Order</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A string is considered <strong style="user-select: auto;">beautiful</strong> if it satisfies the following conditions:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Each of the 5 English vowels (<code style="user-select: auto;">'a'</code>, <code style="user-select: auto;">'e'</code>, <code style="user-select: auto;">'i'</code>, <code style="user-select: auto;">'o'</code>, <code style="user-select: auto;">'u'</code>) must appear <strong style="user-select: auto;">at least once</strong> in it.</li>
	<li style="user-select: auto;">The letters must be sorted in <strong style="user-select: auto;">alphabetical order</strong> (i.e. all <code style="user-select: auto;">'a'</code>s before <code style="user-select: auto;">'e'</code>s, all <code style="user-select: auto;">'e'</code>s before <code style="user-select: auto;">'i'</code>s, etc.).</li>
</ul>

<p style="user-select: auto;">For example, strings <code style="user-select: auto;">"aeiou"</code> and <code style="user-select: auto;">"aaaaaaeiiiioou"</code> are considered <strong style="user-select: auto;">beautiful</strong>, but <code style="user-select: auto;">"uaeio"</code>, <code style="user-select: auto;">"aeoiu"</code>, and <code style="user-select: auto;">"aaaeeeooo"</code> are <strong style="user-select: auto;">not beautiful</strong>.</p>

<p style="user-select: auto;">Given a string <code style="user-select: auto;">word</code> consisting of English vowels, return <em style="user-select: auto;">the <strong style="user-select: auto;">length of the longest beautiful substring</strong> of </em><code style="user-select: auto;">word</code><em style="user-select: auto;">. If no such substring exists, return </em><code style="user-select: auto;">0</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">substring</strong> is a contiguous sequence of characters in a string.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word = "aeiaaio<u style="user-select: auto;">aaaaeiiiiouuu</u>ooaauuaeiu"
<strong style="user-select: auto;">Output:</strong> 13
<b style="user-select: auto;">Explanation:</b> The longest beautiful substring in word is "aaaaeiiiiouuu" of length 13.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word = "aeeeiiiioooauuu<u style="user-select: auto;">aeiou</u>"
<strong style="user-select: auto;">Output:</strong> 5
<b style="user-select: auto;">Explanation:</b> The longest beautiful substring in word is "aeiou" of length 5.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word = "a"
<strong style="user-select: auto;">Output:</strong> 0
<b style="user-select: auto;">Explanation:</b> There is no beautiful substring, so return 0.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= word.length &lt;= 5 * 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">word</code> consists of characters <code style="user-select: auto;">'a'</code>, <code style="user-select: auto;">'e'</code>, <code style="user-select: auto;">'i'</code>, <code style="user-select: auto;">'o'</code>, and <code style="user-select: auto;">'u'</code>.</li>
</ul>
</div>