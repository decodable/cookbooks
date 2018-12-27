
# 1-D
1. [Decode Ways](https://leetcode.com/problems/decode-ways/)
2. [Word Break](https://leetcode.com/problems/word-break/)
3. [Word Break II](https://leetcode.com/problems/word-break-ii/)
4. [Sentence Screen Fitting](https://leetcode.com/problems/sentence-screen-fitting/)
5. [House Robber](https://leetcode.com/problems/house-robber/)
6. [House Robber II](https://leetcode.com/problems/house-robber-ii/)
7. [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock)
8. [Best Time to Buy and Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/)
9. [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)
0. [Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/)

[Decode Ways](https://leetcode.com/problems/decode-ways/) and [Word Break](https://leetcode.com/problems/word-break/) are similar, both are to decode.

Both divide the problem into n subproblems. The difference is that, for each subproblem, _Decode Ways_ takes constant time, while _Word Break_ needs linear time.

[Sentence Screen Fitting](https://leetcode.com/problems/sentence-screen-fitting/) has constrains that the word length won't exceed 10 and total words in the sentence won't exceed 100, so we can concat words into one sentence at firest. See [solution](https://leetcode.com/problems/sentence-screen-fitting/discuss/90845/21ms-18-lines-Java-solution).

In order for DP to work, the subproblem dependency should be acyclic, otherwise there will be
infinte loops. [House Robber II](https://leetcode.com/problems/house-robber-ii/) looks like cyclic, however it can be easily tranformed to [House Robber](https://leetcode.com/problems/house-robber/).

[Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock) and [Best Time to Buy and Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/) are interesting, as the only difference is that the former is not accumulative while the later is. Today's profit depends on the yesterday.

```
# I - calculate the max value of all Profit of all days
Profit[i] = max(0, Profit[i - 1] + (Prices[i] - Prices[i - 1]))
# II - calcuate the accumulated Profit of all days
Profit[i] = (Prices[i] - Prices[i - 1] < 0) ? Profit[i - 1] : (Profit[i - 1] + (Prices[i] - Prices[i - 1]))
```
The [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/) is exactly same as [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock).

# 2-D
1. [Edit Distance](https://leetcode.com/problems/edit-distance/)
2. [Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/)
3. [Minimum Window Subsequence](https://leetcode.com/problems/minimum-window-subsequence/)
4. [Longest Palindromic Subsequence](https://leetcode.com/problems/longest-palindromic-subsequence/)
5. [Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/)

[Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/) is my favorite, as there are so many interesting solutions.
