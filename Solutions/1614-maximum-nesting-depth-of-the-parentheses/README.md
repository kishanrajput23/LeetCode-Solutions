## [1614. Maximum Nesting Depth of the Parentheses](https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/)

**Difficulty:** Easy  
**Topics:** String, Stack, Bracket Sequences  

**Problem Description:**

<p>Given a <strong>valid parentheses string</strong> <code>s</code>, return the <strong>nesting depth</strong> of<em> </em><code>s</code>. The nesting depth is the <strong>maximum</strong> number of nested parentheses.</p>


<p><strong>Example 1:</strong></p>

<div>
<p><strong>Input:</strong> <span>s = &quot;(1+(2*3)+((8)/4))+1&quot;</span></p>

<p><strong>Output:</strong> <span>3</span></p>

<p><strong>Explanation:</strong></p>

<p>Digit 8 is inside of 3 nested parentheses in the string.</p>
</div>

<p><strong>Example 2:</strong></p>

<div>
<p><strong>Input:</strong> <span>s = &quot;(1)+((2))+(((3)))&quot;</span></p>

<p><strong>Output:</strong> <span>3</span></p>

<p><strong>Explanation:</strong></p>

<p>Digit 3 is inside of 3 nested parentheses in the string.</p>
</div>

<p><strong>Example 3:</strong></p>

<div>
<p><strong>Input:</strong> <span>s = &quot;()(())((()()))&quot;</span></p>

<p><strong>Output:</strong> <span>3</span></p>
</div>


<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 100</code></li>
	<li><code>s</code> consists of digits <code>0-9</code> and characters <code>&#39;+&#39;</code>, <code>&#39;-&#39;</code>, <code>&#39;*&#39;</code>, <code>&#39;/&#39;</code>, <code>&#39;(&#39;</code>, and <code>&#39;)&#39;</code>.</li>
	<li>It is guaranteed that parentheses expression <code>s</code> is a VPS.</li>
</ul>
