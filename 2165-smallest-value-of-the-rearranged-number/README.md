<h2><a href="https://leetcode.com/problems/smallest-value-of-the-rearranged-number/">2165. Smallest Value of the Rearranged Number</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer <code style="user-select: auto;">num.</code> <strong style="user-select: auto;">Rearrange</strong> the digits of <code style="user-select: auto;">num</code> such that its value is <strong style="user-select: auto;">minimized</strong> and it does not contain <strong style="user-select: auto;">any</strong> leading zeros.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the rearranged number with minimal value</em>.</p>

<p style="user-select: auto;">Note that the sign of the number does not change after rearranging the digits.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num = 310
<strong style="user-select: auto;">Output:</strong> 103
<strong style="user-select: auto;">Explanation:</strong> The possible arrangements for the digits of 310 are 013, 031, 103, 130, 301, 310. 
The arrangement with the smallest value that does not contain any leading zeros is 103.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num = -7605
<strong style="user-select: auto;">Output:</strong> -7650
<strong style="user-select: auto;">Explanation:</strong> Some possible arrangements for the digits of -7605 are -7650, -6705, -5076, -0567.
The arrangement with the smallest value that does not contain any leading zeros is -7650.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">15</sup> &lt;= num &lt;= 10<sup style="user-select: auto;">15</sup></code></li>
</ul>
</div>