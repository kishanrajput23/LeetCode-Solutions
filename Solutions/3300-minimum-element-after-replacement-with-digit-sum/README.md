## [3300. Minimum Element After Replacement With Digit Sum](https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/)

**Difficulty:** Easy  
**Topics:** Array, Math  

**Problem Description:**

<p>You are given an integer array <code>nums</code>.</p>

<p>You replace each element in <code>nums</code> with the <strong>sum</strong> of its digits.</p>

<p>Return the <strong>minimum</strong> element in <code>nums</code> after all replacements.</p>


<p><strong>Example 1:</strong></p>

<div>
<p><strong>Input:</strong> <span>nums = [10,12,13,14]</span></p>

<p><strong>Output:</strong> <span>1</span></p>

<p><strong>Explanation:</strong></p>

<p><code>nums</code> becomes <code>[1, 3, 4, 5]</code> after all replacements, with minimum element 1.</p>
</div>

<p><strong>Example 2:</strong></p>

<div>
<p><strong>Input:</strong> <span>nums = [1,2,3,4]</span></p>

<p><strong>Output:</strong> <span>1</span></p>

<p><strong>Explanation:</strong></p>

<p><code>nums</code> becomes <code>[1, 2, 3, 4]</code> after all replacements, with minimum element 1.</p>
</div>

<p><strong>Example 3:</strong></p>

<div>
<p><strong>Input:</strong> <span>nums = [999,19,199]</span></p>

<p><strong>Output:</strong> <span>10</span></p>

<p><strong>Explanation:</strong></p>

<p><code>nums</code> becomes <code>[27, 10, 19]</code> after all replacements, with minimum element 10.</p>
</div>


<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
</ul>
