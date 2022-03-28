# Egg Dropping Puzzle
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given <strong style="user-select: auto;">N</strong> identical eggs and you have access to a <strong style="user-select: auto;">K</strong>-floored building from&nbsp;<strong style="user-select: auto;">1</strong>&nbsp;to&nbsp;<strong style="user-select: auto;">K</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">There exists a floor <strong style="user-select: auto;">f</strong>&nbsp;where <strong style="user-select: auto;">0</strong> &lt;= <strong style="user-select: auto;">f</strong> &lt;= <strong style="user-select: auto;">K&nbsp;</strong>such that any egg dropped at a floor higher than <strong style="user-select: auto;">f</strong>&nbsp;will break, and any egg dropped <strong style="user-select: auto;">at or below&nbsp;</strong>floor <strong style="user-select: auto;">f </strong>will <strong style="user-select: auto;">not break</strong>. There are few rules given below.&nbsp;</span></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">An egg that survives a fall can be used again.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">A broken egg must be discarded.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">The effect of a fall is the same for all eggs.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">If the egg doesn't break at a certain floor, it will not break at any floor below.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">If the eggs breaks at a certain floor, it will break at any floor above.</span></li>
</ul>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Return the minimum number of moves that you need to determine with certainty what the value of&nbsp;<strong style="user-select: auto;">f</strong>&nbsp;is.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">For more description on this problem see <a href="http://en.wikipedia.org/wiki/Dynamic_programming#Egg_dropping_puzzle" target="_blank" style="user-select: auto;">wiki page</a></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
N </strong>= 1<strong style="user-select: auto;">, K </strong>= 2
<strong style="user-select: auto;">Output: </strong>2
<strong style="user-select: auto;">Explanation:&nbsp;
</strong>1. Drop the egg from floor 1. If it 
&nbsp;  breaks, we know that f = 0.
2. Otherwise, drop the egg from floor 2.
&nbsp;  If it breaks, we know that f = 1.
3. If it does not break, then we know f = 2.
4. Hence, we need at minimum 2 moves to
&nbsp;  determine with certainty what the value of f is.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">
</strong>N = 2, K = 10
<strong style="user-select: auto;">Output: </strong>4</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete the function&nbsp;<strong style="user-select: auto;">eggDrop()</strong>&nbsp;which takes two&nbsp;positive integer N&nbsp;and K as input parameters&nbsp;and returns the&nbsp;minimum number of attempts you need in order to find the critical floor.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong> : O(N*(K^2))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space</strong>: O(N*K)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=N&lt;=200<br style="user-select: auto;">
1&lt;=K&lt;=200</span></p>
 <p style="user-select: auto;"></p>
            </div>