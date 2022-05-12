<h2><a href="https://leetcode.com/problems/find-substring-with-given-hash-value/">2156. Find Substring With Given Hash Value</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">The hash of a <strong style="user-select: auto;">0-indexed</strong> string <code style="user-select: auto;">s</code> of length <code style="user-select: auto;">k</code>, given integers <code style="user-select: auto;">p</code> and <code style="user-select: auto;">m</code>, is computed using the following function:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">hash(s, p, m) = (val(s[0]) * p<sup style="user-select: auto;">0</sup> + val(s[1]) * p<sup style="user-select: auto;">1</sup> + ... + val(s[k-1]) * p<sup style="user-select: auto;">k-1</sup>) mod m</code>.</li>
</ul>

<p style="user-select: auto;">Where <code style="user-select: auto;">val(s[i])</code> represents the index of <code style="user-select: auto;">s[i]</code> in the alphabet from <code style="user-select: auto;">val('a') = 1</code> to <code style="user-select: auto;">val('z') = 26</code>.</p>

<p style="user-select: auto;">You are given a string <code style="user-select: auto;">s</code> and the integers <code style="user-select: auto;">power</code>, <code style="user-select: auto;">modulo</code>, <code style="user-select: auto;">k</code>, and <code style="user-select: auto;">hashValue.</code> Return <code style="user-select: auto;">sub</code>,<em style="user-select: auto;"> the <strong style="user-select: auto;">first</strong> <strong style="user-select: auto;">substring</strong> of </em><code style="user-select: auto;">s</code><em style="user-select: auto;"> of length </em><code style="user-select: auto;">k</code><em style="user-select: auto;"> such that </em><code style="user-select: auto;">hash(sub, power, modulo) == hashValue</code>.</p>

<p style="user-select: auto;">The test cases will be generated such that an answer always <strong style="user-select: auto;">exists</strong>.</p>

<p style="user-select: auto;">A <b style="user-select: auto;">substring</b> is a contiguous non-empty sequence of characters within a string.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "leetcode", power = 7, modulo = 20, k = 2, hashValue = 0
<strong style="user-select: auto;">Output:</strong> "ee"
<strong style="user-select: auto;">Explanation:</strong> The hash of "ee" can be computed to be hash("ee", 7, 20) = (5 * 1 + 5 * 7) mod 20 = 40 mod 20 = 0. 
"ee" is the first substring of length 2 with hashValue 0. Hence, we return "ee".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "fbxzaad", power = 31, modulo = 100, k = 3, hashValue = 32
<strong style="user-select: auto;">Output:</strong> "fbx"
<strong style="user-select: auto;">Explanation:</strong> The hash of "fbx" can be computed to be hash("fbx", 31, 100) = (6 * 1 + 2 * 31 + 24 * 31<sup style="user-select: auto;">2</sup>) mod 100 = 23132 mod 100 = 32. 
The hash of "bxz" can be computed to be hash("bxz", 31, 100) = (2 * 1 + 24 * 31 + 26 * 31<sup style="user-select: auto;">2</sup>) mod 100 = 25732 mod 100 = 32. 
"fbx" is the first substring of length 3 with hashValue 32. Hence, we return "fbx".
Note that "bxz" also has a hash of 32 but it appears later than "fbx".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= s.length &lt;= 2 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= power, modulo &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= hashValue &lt; modulo</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of lowercase English letters only.</li>
	<li style="user-select: auto;">The test cases are generated such that an answer always <strong style="user-select: auto;">exists</strong>.</li>
</ul>
</div>