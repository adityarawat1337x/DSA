<h2><a href="https://leetcode.com/problems/maximize-the-confusion-of-an-exam/">2024. Maximize the Confusion of an Exam</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A teacher is writing a test with <code style="user-select: auto;">n</code> true/false questions, with <code style="user-select: auto;">'T'</code> denoting true and <code style="user-select: auto;">'F'</code> denoting false. He wants to confuse the students by <strong style="user-select: auto;">maximizing</strong> the number of <strong style="user-select: auto;">consecutive</strong> questions with the <strong style="user-select: auto;">same</strong> answer (multiple trues or multiple falses in a row).</p>

<p style="user-select: auto;">You are given a string <code style="user-select: auto;">answerKey</code>, where <code style="user-select: auto;">answerKey[i]</code> is the original answer to the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> question. In addition, you are given an integer <code style="user-select: auto;">k</code>, the maximum number of times you may perform the following operation:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Change the answer key for any question to <code style="user-select: auto;">'T'</code> or <code style="user-select: auto;">'F'</code> (i.e., set <code style="user-select: auto;">answerKey[i]</code> to <code style="user-select: auto;">'T'</code> or <code style="user-select: auto;">'F'</code>).</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> number of consecutive</em> <code style="user-select: auto;">'T'</code>s or <code style="user-select: auto;">'F'</code>s <em style="user-select: auto;">in the answer key after performing the operation at most</em> <code style="user-select: auto;">k</code> <em style="user-select: auto;">times</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> answerKey = "TTFF", k = 2
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> We can replace both the 'F's with 'T's to make answerKey = "<u style="user-select: auto;">TTTT</u>".
There are four consecutive 'T's.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> answerKey = "TFFT", k = 1
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> We can replace the first 'T' with an 'F' to make answerKey = "<u style="user-select: auto;">FFF</u>T".
Alternatively, we can replace the second 'T' with an 'F' to make answerKey = "T<u style="user-select: auto;">FFF</u>".
In both cases, there are three consecutive 'F's.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> answerKey = "TTFTTFTT", k = 1
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> We can replace the first 'F' to make answerKey = "<u style="user-select: auto;">TTTTT</u>FTT"
Alternatively, we can replace the second 'F' to make answerKey = "TTF<u style="user-select: auto;">TTTTT</u>". 
In both cases, there are five consecutive 'T's.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == answerKey.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">answerKey[i]</code> is either <code style="user-select: auto;">'T'</code> or <code style="user-select: auto;">'F'</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= n</code></li>
</ul>
</div>