# BUG LOG

- Receive a segmentation fault whenever I try to check if the area 'isSafe'
  without placing a mine first. It also happens when the col, row section is
  out of bounds even when an exception should be thrown.
