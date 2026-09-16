## [3794. Reverse String Prefix](https://leetcode.com/problems/reverse-string-prefix/)

**Difficulty:** Easy  
**Topics:** Two Pointers, String  

**Problem Description:**

<p>You are given a string <code>s</code> and an integer <code>k</code>.</p>

<p>Reverse the first <code>k</code> characters of <code>s</code> and return the resulting string.</p>


<p><strong>Example 1:</strong></p>

<div>
<p><strong>Input:</strong> <span>s = &quot;abcd&quot;, k = 2</span></p>

<p><strong>Output:</strong> <span>&quot;bacd&quot;</span></p>

<p><strong>Explanation:</strong>​​​​​​​</p>

<p>The first <code>k = 2</code> characters <code>&quot;ab&quot;</code> are reversed to <code>&quot;ba&quot;</code>. The final resulting string is <code>&quot;bacd&quot;</code>.</p>
</div>

<p><strong>Example 2:</strong></p>

<div>
<p><strong>Input:</strong> <span>s = &quot;xyz&quot;, k = 3</span></p>

<p><strong>Output:</strong> <span>&quot;zyx&quot;</span></p>

<p><strong>Explanation:</strong></p>

<p>The first <code>k = 3</code> characters <code>&quot;xyz&quot;</code> are reversed to <code>&quot;zyx&quot;</code>. The final resulting string is <code>&quot;zyx&quot;</code>.</p>
</div>

<p><strong>Example 3:</strong></p>

<div>
<p><strong>Input:</strong> <span>s = &quot;hey&quot;, k = 1</span></p>

<p><strong>Output:</strong> <span>&quot;hey&quot;</span></p>

<p><strong>Explanation:</strong></p>

<p>The first <code>k = 1</code> character <code>&quot;h&quot;</code> remains unchanged on reversal. The final resulting string is <code>&quot;hey&quot;</code>.</p>
</div>


<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 100</code></li>
	<li><code>s</code> consists of lowercase English letters.</li>
	<li><code>1 &lt;= k &lt;= s.length</code></li>
</ul>
