# Sort by Set Bit Count
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array of integers, sort the array (in descending order) according to count of set bits in binary representation of array elements.&nbsp; </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong> For integers having same number of set bits in their binary representation, sort according to their position in the original array i.e., a stable sort.</span></p>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></div>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>
arr[] = {5, 2, 3, 9, 4, 6, 7, 15, 32};
<strong style="user-select: auto;">Output:</strong>
15 7 5 3 9 6 2 4 32
<strong style="user-select: auto;">Explanation:</strong>
The integers in their binary
representation are:
15 - 1111
7  - 0111
5  - 0101
3  - 0011
9  - 1001
6  - 0110
2  - 0010
4  - 0100
32 - 10000
hence the non-increasing sorted order is:
{15}, {7}, {5, 3, 9, 6}, {2, 4, 32}</span></pre>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></div>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: 
</strong>arr[] = {1, 2, 3, 4, 5, 6};
<strong style="user-select: auto;">Output:</strong> 
3 5 6 1 2 4
<strong style="user-select: auto;">Explanation:</strong>
3  - 0011
5  - 0101
6  - 0110
1  - 0001
2  - 0010
4  - 0100
hence the non-increasing sorted order is
{3, 5, 6}, {1, 2, 4}</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to print anything, printing is done by the driver code itself. You just need to complete the function <strong style="user-select: auto;">sortBySetBitCount() </strong>which takes the array <strong style="user-select: auto;">arr[]</strong> and its size <strong style="user-select: auto;">N</strong><strong style="user-select: auto;"> </strong>as inputs and sort the array <strong style="user-select: auto;">arr[]</strong> inplace. Use of extra space is prohibited.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity: </strong>O(N.log(N))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space: </strong>O(1)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 ≤ A[i] ≤ 10<sup style="user-select: auto;">6</sup> </span></p>
 <p style="user-select: auto;"></p>
            </div>