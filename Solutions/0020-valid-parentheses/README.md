## [20. Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)

**Difficulty:** Easy  
**Topics:** String, Stack, Bracket Sequences  

**Problem Description:**

<p>Given a string <code>s</code> containing just the characters <code>&#39;(&#39;</code>, <code>&#39;)&#39;</code>, <code>&#39;{&#39;</code>, <code>&#39;}&#39;</code>, <code>&#39;[&#39;</code> and <code>&#39;]&#39;</code>, determine if the input string is valid.</p>

<p>An input string is valid if:</p>

<ol>
	<li>Open brackets must be closed by the same type of brackets.</li>
	<li>Open brackets must be closed in the correct order.</li>
	<li>Every close bracket has a corresponding open bracket of the same type.</li>
</ol>


<p><strong>Example 1:</strong></p>

<div>
<p><strong>Input:</strong> <span>s = &quot;()&quot;</span></p>

<p><strong>Output:</strong> <span>true</span></p>
</div>

<p><strong>Example 2:</strong></p>

<div>
<p><strong>Input:</strong> <span>s = &quot;()[]{}&quot;</span></p>

<p><strong>Output:</strong> <span>true</span></p>
</div>

<p><strong>Example 3:</strong></p>

<div>
<p><strong>Input:</strong> <span>s = &quot;(]&quot;</span></p>

<p><strong>Output:</strong> <span>false</span></p>
</div>

<p><strong>Example 4:</strong></p>

<div>
<p><strong>Input:</strong> <span>s = &quot;([])&quot;</span></p>

<p><strong>Output:</strong> <span>true</span></p>
</div>

<p><strong>Example 5:</strong></p>

<div>
<p><strong>Input:</strong> <span>s = &quot;([)]&quot;</span></p>

<p><strong>Output:</strong> <span>false</span></p>
</div>


<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>4</sup></code></li>
	<li><code>s</code> consists of parentheses only <code>&#39;()[]{}&#39;</code>.</li>
</ul>
