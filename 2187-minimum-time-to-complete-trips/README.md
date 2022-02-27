<h2><a href="https://leetcode.com/problems/minimum-time-to-complete-trips/">2187. Minimum Time to Complete Trips</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array <code style="user-select: auto;">time</code> where <code style="user-select: auto;">time[i]</code> denotes the time taken by the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> bus to complete <strong style="user-select: auto;">one trip</strong>.</p>

<p style="user-select: auto;">Each bus can make multiple trips <strong style="user-select: auto;">successively</strong>; that is, the next trip can start <strong style="user-select: auto;">immediately after</strong> completing the current trip. Also, each bus operates <strong style="user-select: auto;">independently</strong>; that is, the trips of one bus do not influence the trips of any other bus.</p>

<p style="user-select: auto;">You are also given an integer <code style="user-select: auto;">totalTrips</code>, which denotes the number of trips all buses should make <strong style="user-select: auto;">in total</strong>. Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum time</strong> required for all buses to complete <strong style="user-select: auto;">at least</strong> </em><code style="user-select: auto;">totalTrips</code><em style="user-select: auto;"> trips</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> time = [1,2,3], totalTrips = 5
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong>
- At time t = 1, the number of trips completed by each bus are [1,0,0]. 
  The total number of trips completed is 1 + 0 + 0 = 1.
- At time t = 2, the number of trips completed by each bus are [2,1,0]. 
  The total number of trips completed is 2 + 1 + 0 = 3.
- At time t = 3, the number of trips completed by each bus are [3,1,1]. 
  The total number of trips completed is 3 + 1 + 1 = 5.
So the minimum time needed for all buses to complete at least 5 trips is 3.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> time = [2], totalTrips = 1
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
There is only one bus, and it will complete its first trip at t = 2.
So the minimum time needed to complete 1 trip is 2.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= time.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= time[i], totalTrips &lt;= 10<sup style="user-select: auto;">7</sup></code></li>
</ul>
</div>