<h2><a href="https://leetcode.com/problems/missing-number/description/">Missing Number</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr><p>Given an array <code>nums</code> containing <code>n</code><em> distinct numbers in the range <code>[0, n]</code> return the only number in the range that is missing from the array.</p>

<p>&nbsp;</p>

<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />
  <title>Rotated Sorted Array Examples</title>
  <style>
    body {
      background-color: #0d1117;
      color: #c9d1d9;
      font-family: Consolas, monospace;
      padding: 20px;
    }
    .example {
      background-color: #161b22;
      border-radius: 8px;
      padding: 15px;
      margin-bottom: 25px;
      border-left: 4px solid #58a6ff;
    }
    .title {
      font-style: italic;
      margin-bottom: 8px;
    }
    .content b {
      color: #79c0ff;
    }
  </style>
</head>
<body>

  <div class="example">
    <div class="title"><b>Example 1:</b></div>
    <div class="content">
      <p><b>Input:</b> nums = [3,4,5,1,2]</p>
      <p><b>Output:</b> true</p>
      <p><b>Explanation:</b> [1,2,3,4,5] is the original sorted array.<br>
         You can rotate the array by x = 3 positions to begin on the element of value 3: [3,4,5,1,2].
      </p>
    </div>
  </div>

  <div class="example">
    <div class="title"><b>Example 2:</b></div>
    <div class="content">
      <p><b>Input:</b> nums = [2,1,3,4]</p>
      <p><b>Output:</b> false</p>
      <p><b>Explanation:</b> There is no sorted array once rotated that can make nums.</p>
    </div>
  </div>

  <div class="example">
    <div class="title"><b>Example 3:</b></div>
    <div class="content">
      <p><b>Input:</b> nums = [1,2,3]</p>
      <p><b>Output:</b> true</p>
      <p><b>Explanation:</b> [1,2,3] is the original sorted array.<br>
         You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.
      </p>
    </div>
  </div>

</body>
</html>
