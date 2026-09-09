## [3871. Count Commas in Range II](https://leetcode.com/problems/count-commas-in-range-ii/)

**Difficulty:** Medium  
**Topics:** Math  

**Problem Description:**

<p>You are given an integer <code>n</code>.</p>

<p>Return the <strong>total</strong> number of commas used when writing all integers from <code>[1, n]</code> (inclusive) in <strong>standard</strong> number formatting.</p>

<p>In <strong>standard</strong> formatting:</p>

<ul>
	<li>A comma is inserted after <strong>every three</strong> digits from the right.</li>
	<li>Numbers with <strong>fewer</strong> than 4 digits contain no commas.</li>
</ul>


<p><strong>Example 1:</strong></p>

<div>
<p><strong>Input:</strong> <span>n = 1002</span></p>

<p><strong>Output:</strong> <span>3</span></p>

<p><strong>Explanation:</strong></p>

<p>The numbers <code>&quot;1,000&quot;</code>, <code>&quot;1,001&quot;</code>, and <code>&quot;1,002&quot;</code> each contain one comma, giving a total of 3.</p>
</div>

<p><strong>Example 2:</strong></p>

<div>
<p><strong>Input:</strong> <span>n = 998</span></p>

<p><strong>Output:</strong> <span>0</span></p>

<p><strong>Explanation:</strong></p>

<p><strong>​​​​​​​</strong>All numbers from 1 to 998 have fewer than four digits. Therefore, no commas are used.</p>
</div>


<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>15</sup></code></li>
</ul>
