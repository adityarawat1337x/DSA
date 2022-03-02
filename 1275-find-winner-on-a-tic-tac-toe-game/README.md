<h2><a href="https://leetcode.com/problems/find-winner-on-a-tic-tac-toe-game/">1275. Find Winner on a Tic Tac Toe Game</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;"><strong style="user-select: auto;">Tic-tac-toe</strong> is played by two players <code style="user-select: auto;">A</code> and <code style="user-select: auto;">B</code> on a <code style="user-select: auto;">3 x 3</code> grid. The rules of Tic-Tac-Toe are:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Players take turns placing characters into empty squares <code style="user-select: auto;">' '</code>.</li>
	<li style="user-select: auto;">The first player <code style="user-select: auto;">A</code> always places <code style="user-select: auto;">'X'</code> characters, while the second player <code style="user-select: auto;">B</code> always places <code style="user-select: auto;">'O'</code> characters.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">'X'</code> and <code style="user-select: auto;">'O'</code> characters are always placed into empty squares, never on filled ones.</li>
	<li style="user-select: auto;">The game ends when there are <strong style="user-select: auto;">three</strong> of the same (non-empty) character filling any row, column, or diagonal.</li>
	<li style="user-select: auto;">The game also ends if all squares are non-empty.</li>
	<li style="user-select: auto;">No more moves can be played if the game is over.</li>
</ul>

<p style="user-select: auto;">Given a 2D integer array <code style="user-select: auto;">moves</code> where <code style="user-select: auto;">moves[i] = [row<sub style="user-select: auto;">i</sub>, col<sub style="user-select: auto;">i</sub>]</code> indicates that the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> move will be played on <code style="user-select: auto;">grid[row<sub style="user-select: auto;">i</sub>][col<sub style="user-select: auto;">i</sub>]</code>. return <em style="user-select: auto;">the winner of the game if it exists</em> (<code style="user-select: auto;">A</code> or <code style="user-select: auto;">B</code>). In case the game ends in a draw return <code style="user-select: auto;">"Draw"</code>. If there are still movements to play return <code style="user-select: auto;">"Pending"</code>.</p>

<p style="user-select: auto;">You can assume that <code style="user-select: auto;">moves</code> is valid (i.e., it follows the rules of <strong style="user-select: auto;">Tic-Tac-Toe</strong>), the grid is initially empty, and <code style="user-select: auto;">A</code> will play first.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/09/22/xo1-grid.jpg" style="width: 244px; height: 245px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> moves = [[0,0],[2,0],[1,1],[2,1],[2,2]]
<strong style="user-select: auto;">Output:</strong> "A"
<strong style="user-select: auto;">Explanation:</strong> A wins, they always play first.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/09/22/xo2-grid.jpg" style="width: 244px; height: 245px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> moves = [[0,0],[1,1],[0,1],[0,2],[1,0],[2,0]]
<strong style="user-select: auto;">Output:</strong> "B"
<strong style="user-select: auto;">Explanation:</strong> B wins.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/09/22/xo3-grid.jpg" style="width: 244px; height: 245px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> moves = [[0,0],[1,1],[2,0],[1,0],[1,2],[2,1],[0,1],[0,2],[2,2]]
<strong style="user-select: auto;">Output:</strong> "Draw"
<strong style="user-select: auto;">Explanation:</strong> The game ends in a draw since there are no moves to make.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= moves.length &lt;= 9</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">moves[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= row<sub style="user-select: auto;">i</sub>, col<sub style="user-select: auto;">i</sub> &lt;= 2</code></li>
	<li style="user-select: auto;">There are no repeated elements on <code style="user-select: auto;">moves</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">moves</code> follow the rules of tic tac toe.</li>
</ul>
</div>