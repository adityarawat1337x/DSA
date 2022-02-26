<h2><a href="https://leetcode.com/problems/egg-drop-with-2-eggs-and-n-floors/">1884. Egg Drop With 2 Eggs and N Floors</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given <strong style="user-select: auto;">two identical</strong> eggs and you have access to a building with <code style="user-select: auto;">n</code> floors labeled from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">n</code>.</p>

<p style="user-select: auto;">You know that there exists a floor <code style="user-select: auto;">f</code> where <code style="user-select: auto;">0 &lt;= f &lt;= n</code> such that any egg dropped at a floor <strong style="user-select: auto;">higher</strong> than <code style="user-select: auto;">f</code> will <strong style="user-select: auto;">break</strong>, and any egg dropped <strong style="user-select: auto;">at or below</strong> floor <code style="user-select: auto;">f</code> will <strong style="user-select: auto;">not break</strong>.</p>

<p style="user-select: auto;">In each move, you may take an <strong style="user-select: auto;">unbroken</strong> egg and drop it from any floor <code style="user-select: auto;">x</code> (where <code style="user-select: auto;">1 &lt;= x &lt;= n</code>). If the egg breaks, you can no longer use it. However, if the egg does not break, you may <strong style="user-select: auto;">reuse</strong> it in future moves.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum number of moves</strong> that you need to determine <strong style="user-select: auto;">with certainty</strong> what the value of </em><code style="user-select: auto;">f</code> is.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> We can drop the first egg from floor 1 and the second egg from floor 2.
If the first egg breaks, we know that f = 0.
If the second egg breaks but the first egg didn't, we know that f = 1.
Otherwise, if both eggs survive, we know that f = 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 100
<strong style="user-select: auto;">Output:</strong> 14
<strong style="user-select: auto;">Explanation:</strong> One optimal strategy is:
- Drop the 1st egg at floor 9. If it breaks, we know f is between 0 and 8. Drop the 2nd egg starting from floor 1 and going up one at a time to find f within 8 more drops. Total drops is 1 + 8 = 9.
- If the 1st egg does not break, drop the 1st egg again at floor 22. If it breaks, we know f is between 9 and 21. Drop the 2nd egg starting from floor 10 and going up one at a time to find f within 12 more drops. Total drops is 2 + 12 = 14.
- If the 1st egg does not break again, follow a similar process dropping the 1st egg from floors 34, 45, 55, 64, 72, 79, 85, 90, 94, 97, 99, and 100.
Regardless of the outcome, it takes at most 14 drops to determine f.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 1000</code></li>
</ul>
</div>