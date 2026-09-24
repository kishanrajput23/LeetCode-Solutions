## [3550. Smallest Index With Digit Sum Equal to Index](https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/)

**Difficulty:** Easy  
**Topics:** Array, Math  

**Problem Description:**

<p>You are given an integer array <code>nums</code>.</p>

<p>Return the <strong>smallest</strong> index <code>i</code> such that the sum of the digits of <code>nums[i]</code> is equal to <code>i</code>.</p>

<p>If no such index exists, return <code>-1</code>.</p>


<p><strong>Example 1:</strong></p>

<div>
<p><strong>Input:</strong> <span>nums = [1,3,2]</span></p>

<p><strong>Output:</strong> <span>2</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>For <code>nums[2] = 2</code>, the sum of digits is 2, which is equal to index <code>i = 2</code>. Thus, the output is 2.</li>
</ul>
</div>

<p><strong>Example 2:</strong></p>

<div>
<p><strong>Input:</strong> <span>nums = [1,10,11]</span></p>

<p><strong>Output:</strong> <span>1</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>For <code>nums[1] = 10</code>, the sum of digits is <code>1 + 0 = 1</code>, which is equal to index <code>i = 1</code>.</li>
	<li>For <code>nums[2] = 11</code>, the sum of digits is <code>1 + 1 = 2</code>, which is equal to index <code>i = 2</code>.</li>
	<li>Since index 1 is the smallest, the output is 1.</li>
</ul>
</div>

<p><strong>Example 3:</strong></p>

<div>
<p><strong>Input:</strong> <span>nums = [1,2,3]</span></p>

<p><strong>Output:</strong> <span>-1</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>Since no index satisfies the condition, the output is -1.</li>
</ul>
</div>


<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 1000</code></li>
</ul>
