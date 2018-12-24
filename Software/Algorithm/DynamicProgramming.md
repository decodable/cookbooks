
# 1-D
1. [Decode Ways](https://leetcode.com/problems/decode-ways/)
2. [Word Break](https://leetcode.com/problems/word-break/)
3. [Sentence Screen Fitting](https://leetcode.com/problems/sentence-screen-fitting/)
4. [House Robber](https://leetcode.com/problems/house-robber/)
5. [House Robber II](https://leetcode.com/problems/house-robber-ii/)
6. [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock)
7. [Best Time to Buy and Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/)

[Decode Ways](https://leetcode.com/problems/decode-ways/) and [Word Break](https://leetcode.com/problems/word-break/) are similar, both are to decode.

Both divide the problem into n subproblems. The difference is that, for each subproblem, _Decode Ways_ takes constant time, while _Word Break_ needs linear time.

[Sentence Screen Fitting](https://leetcode.com/problems/sentence-screen-fitting/) has constrains that the word length won't exceed 10 and total words in the sentence won't exceed 100, so we can concat words into one sentence at firest. See [solution](https://leetcode.com/problems/sentence-screen-fitting/discuss/90845/21ms-18-lines-Java-solution).

In order for DP to work, the subproblem dependency should be acyclic, otherwise there will be
infinte loops. [House Robber II](https://leetcode.com/problems/house-robber-ii/) looks like cyclic, however it can be easily tranformed to [House Robber](https://leetcode.com/problems/house-robber/).

# 2-D
1. [Edit Distance](https://leetcode.com/problems/edit-distance/)
