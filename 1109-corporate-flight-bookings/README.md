<h2><a href="https://leetcode.com/problems/corporate-flight-bookings/">1109. Corporate Flight Bookings</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There are <code style="user-select: auto;">n</code> flights that are labeled from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">n</code>.</p>

<p style="user-select: auto;">You are given an array of flight bookings <code style="user-select: auto;">bookings</code>, where <code style="user-select: auto;">bookings[i] = [first<sub style="user-select: auto;">i</sub>, last<sub style="user-select: auto;">i</sub>, seats<sub style="user-select: auto;">i</sub>]</code> represents a booking for flights <code style="user-select: auto;">first<sub style="user-select: auto;">i</sub></code> through <code style="user-select: auto;">last<sub style="user-select: auto;">i</sub></code> (<strong style="user-select: auto;">inclusive</strong>) with <code style="user-select: auto;">seats<sub style="user-select: auto;">i</sub></code> seats reserved for <strong style="user-select: auto;">each flight</strong> in the range.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">an array </em><code style="user-select: auto;">answer</code><em style="user-select: auto;"> of length </em><code style="user-select: auto;">n</code><em style="user-select: auto;">, where </em><code style="user-select: auto;">answer[i]</code><em style="user-select: auto;"> is the total number of seats reserved for flight </em><code style="user-select: auto;">i</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> bookings = [[1,2,10],[2,3,20],[2,5,25]], n = 5
<strong style="user-select: auto;">Output:</strong> [10,55,45,25,25]
<strong style="user-select: auto;">Explanation:</strong>
Flight labels:        1   2   3   4   5
Booking 1 reserved:  10  10
Booking 2 reserved:      20  20
Booking 3 reserved:      25  25  25  25
Total seats:         10  55  45  25  25
Hence, answer = [10,55,45,25,25]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> bookings = [[1,2,10],[2,2,15]], n = 2
<strong style="user-select: auto;">Output:</strong> [10,25]
<strong style="user-select: auto;">Explanation:</strong>
Flight labels:        1   2
Booking 1 reserved:  10  10
Booking 2 reserved:      15
Total seats:         10  25
Hence, answer = [10,25]

</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 2 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= bookings.length &lt;= 2 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">bookings[i].length == 3</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= first<sub style="user-select: auto;">i</sub> &lt;= last<sub style="user-select: auto;">i</sub> &lt;= n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= seats<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>