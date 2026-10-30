<h2><a href="https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string">Minimum Insertions to Balance a Parentheses String</a></h2> <img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' /><hr><p>You are given a parentheses string <code>s</code> containing only the characters <code>&#39;(&#39;</code> and <code>&#39;)&#39;</code>. A parentheses string is <strong>balanced</strong> if it can be formed using the following rules:</p>

<ul>
	<li>The empty string is balanced.</li>
	<li>If <code>A</code> is balanced, then <code>&#39;(&#39;</code> + <code>A</code> + <code>&#39;))&#39;</code> is balanced.</li>
	<li>If <code>A</code> and <code>B</code> are balanced, then their concatenation is balanced.</li>
</ul>

<p>In other words, every left parenthesis <code>&#39;(&#39;</code> must have a corresponding pair of two consecutive right parentheses <code>&#39;))&#39;</code> that comes after it, and every right parenthesis must belong to exactly one such matching pair.</p>

<p>For example, <code>&quot;())&quot;</code>, <code>&quot;())(())))&quot;</code> and <code>&quot;(())())))&quot;</code> are balanced, while <code>&quot;)()&quot;</code>, <code>&quot;()))&quot;</code> and <code>&quot;(()))&quot;</code> are not balanced.</p>

<p>You can insert the characters <code>&#39;(&#39;</code> and <code>&#39;)&#39;</code> at any position of the string to balance it if needed.</p>

<p>Return the <strong>minimum</strong> number of insertions needed to make <code>s</code> balanced.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;(()))&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>

<p><strong>Explanation:</strong></p>

<p>The second <code>&#39;(&#39;</code> is matched with two consecutive <code>&#39;)&#39;</code>, but the first <code>&#39;(&#39;</code> has only one matching <code>&#39;)&#39;</code>. We need to insert one more <code>&#39;)&#39;</code> at the end to make the string <code>&quot;(())))&quot;</code>, which is balanced.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;())&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">0</span></p>

<p><strong>Explanation:</strong></p>

<p>The string is already balanced because its <code>&#39;(&#39;</code> is followed by two consecutive <code>&#39;)&#39;</code>, and both right parentheses belong to that matching pair.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;))())(&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">3</span></p>

<p><strong>Explanation:</strong></p>

<p>Insert <code>&#39;(&#39;</code> at the beginning to match the first <code>&#39;))&#39;</code>, and insert <code>&#39;))&#39;</code> at the end to match the last <code>&#39;(&#39;</code>. Three insertions are needed in total.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s</code> consists of <code>&#39;(&#39;</code> and <code>&#39;)&#39;</code> only.</li>
</ul>
