## [3783. Mirror Distance of an Integer](https://leetcode.com/problems/mirror-distance-of-an-integer/)

**Difficulty:** Easy  
**Topics:** Math  

**Problem Description:**

<p>You are given an integer <code>n</code>.</p>

<p>Define its <strong>mirror distance</strong> as: <code>abs(n - reverse(n))</code>​​​​​​​ where <code>reverse(n)</code> is the integer formed by reversing the digits of <code>n</code>.</p>

<p>Return an integer denoting the mirror distance of <code>n</code>​​​​​​​.</p>

<p><code>abs(x)</code> denotes the absolute value of <code>x</code>.</p>


<p><strong>Example 1:</strong></p>

<div>
<p><strong>Input:</strong> <span>n = 25</span></p>

<p><strong>Output:</strong> <span>27</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li><code>reverse(25) = 52</code>.</li>
	<li>Thus, the answer is <code>abs(25 - 52) = 27</code>.</li>
</ul>
</div>

<p><strong>Example 2:</strong></p>

<div>
<p><strong>Input:</strong> <span>n = 10</span></p>

<p><strong>Output:</strong> <span>9</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li><code>reverse(10) = 01</code> which is 1.</li>
	<li>Thus, the answer is <code>abs(10 - 1) = 9</code>.</li>
</ul>
</div>

<p><strong>Example 3:</strong></p>

<div>
<p><strong>Input:</strong> <span>n = 7</span></p>

<p><strong>Output:</strong> <span>0</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li><code>reverse(7) = 7</code>.</li>
	<li>Thus, the answer is <code>abs(7 - 7) = 0</code>.</li>
</ul>
</div>


<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>9</sup></code></li>
</ul>
