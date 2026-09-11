## [3483. Unique 3-Digit Even Numbers](https://leetcode.com/problems/unique-3-digit-even-numbers/)

**Difficulty:** Easy  
**Topics:** Array, Hash Table, Recursion, Enumeration  

**Problem Description:**

<p>You are given an array of digits called <code>digits</code>. Your task is to determine the number of <strong>distinct</strong> three-digit even numbers that can be formed using these digits.</p>

<p><strong>Note</strong>: Each <em>copy</em> of a digit can only be used <strong>once per number</strong>, and there may <strong>not</strong> be leading zeros.</p>


<p><strong>Example 1:</strong></p>

<div>
<p><strong>Input:</strong> <span>digits = [1,2,3,4]</span></p>

<p><strong>Output:</strong> <span>12</span></p>

<p><strong>Explanation:</strong> The 12 distinct 3-digit even numbers that can be formed are 124, 132, 134, 142, 214, 234, 312, 314, 324, 342, 412, and 432. Note that 222 cannot be formed because there is only 1 copy of the digit 2.</p>
</div>

<p><strong>Example 2:</strong></p>

<div>
<p><strong>Input:</strong> <span>digits = [0,2,2]</span></p>

<p><strong>Output:</strong> <span>2</span></p>

<p><strong>Explanation:</strong> The only 3-digit even numbers that can be formed are 202 and 220. Note that the digit 2 can be used twice because it appears twice in the array.</p>
</div>

<p><strong>Example 3:</strong></p>

<div>
<p><strong>Input:</strong> <span>digits = [6,6,6]</span></p>

<p><strong>Output:</strong> <span>1</span></p>

<p><strong>Explanation:</strong> Only 666 can be formed.</p>
</div>

<p><strong>Example 4:</strong></p>

<div>
<p><strong>Input:</strong> <span>digits = [1,3,5]</span></p>

<p><strong>Output:</strong> <span>0</span></p>

<p><strong>Explanation:</strong> No even 3-digit numbers can be formed.</p>
</div>


<p><strong>Constraints:</strong></p>

<ul>
	<li><code>3 &lt;= digits.length &lt;= 10</code></li>
	<li><code>0 &lt;= digits[i] &lt;= 9</code></li>
</ul>
