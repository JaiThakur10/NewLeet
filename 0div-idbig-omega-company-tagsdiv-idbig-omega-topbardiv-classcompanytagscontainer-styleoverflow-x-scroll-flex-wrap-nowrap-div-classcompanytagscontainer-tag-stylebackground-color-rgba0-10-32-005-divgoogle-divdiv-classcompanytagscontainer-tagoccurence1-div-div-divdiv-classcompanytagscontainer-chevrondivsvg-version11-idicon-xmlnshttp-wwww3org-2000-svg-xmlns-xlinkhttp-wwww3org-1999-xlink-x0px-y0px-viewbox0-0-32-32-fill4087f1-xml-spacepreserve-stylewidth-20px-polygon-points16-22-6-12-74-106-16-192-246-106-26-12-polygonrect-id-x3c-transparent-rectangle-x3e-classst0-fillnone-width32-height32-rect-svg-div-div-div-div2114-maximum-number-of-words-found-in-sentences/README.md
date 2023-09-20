<h2><a href="https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Google</div><div class="companyTagsContainer--tagOccurence">1</div></div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>2114. Maximum Number of Words Found in Sentences</a></h2><h3>Easy</h3><hr><div><p>A <strong>sentence</strong> is a list of <strong>words</strong> that are separated by a single space&nbsp;with no leading or trailing spaces.</p>

<p>You are given an array of strings <code>sentences</code>, where each <code>sentences[i]</code> represents a single <strong>sentence</strong>.</p>

<p>Return <em>the <strong>maximum number of words</strong> that appear in a single sentence</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> sentences = ["alice and bob love leetcode", "i think so too", <u>"this is great thanks very much"</u>]
<strong>Output:</strong> 6
<strong>Explanation:</strong> 
- The first sentence, "alice and bob love leetcode", has 5 words in total.
- The second sentence, "i think so too", has 4 words in total.
- The third sentence, "this is great thanks very much", has 6 words in total.
Thus, the maximum number of words in a single sentence comes from the third sentence, which has 6 words.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> sentences = ["please wait", <u>"continue to fight"</u>, <u>"continue to win"</u>]
<strong>Output:</strong> 3
<strong>Explanation:</strong> It is possible that multiple sentences contain the same number of words. 
In this example, the second and third sentences (underlined) have the same number of words.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= sentences.length &lt;= 100</code></li>
	<li><code>1 &lt;= sentences[i].length &lt;= 100</code></li>
	<li><code>sentences[i]</code> consists only of lowercase English letters and <code>' '</code> only.</li>
	<li><code>sentences[i]</code> does not have leading or trailing spaces.</li>
	<li>All the words in <code>sentences[i]</code> are separated by a single space.</li>
</ul>
</div>