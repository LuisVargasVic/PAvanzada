Problem:

Kaylin loves mushrooms. Put them on her plate and she'll eat them up! In this problem she's eating a plate of mushrooms, and Bartholomew is putting more pieces on her plate.

In this problem, we'll look at how many pieces of mushroom are on her plate at 10-second intervals. Bartholomew could put any non-negative integer number of mushroom pieces down at any time, and the only way they can leave the plate is by being eaten.

Figure out the minimum number of mushrooms that Kaylin could have eaten using two different methods of computation:

    Assume Kaylin could eat any number of mushroom pieces at any time.
    Assume that, starting with the first time we look at the plate, Kaylin eats mushrooms at a constant rate whenever there are mushrooms on her plate.

For example, if the input is 10 5 15 5:

With the first method, Kaylin must have eaten at least 15 mushroom pieces: first she eats 5, then 10 more are put on her plate, then she eats another 10. There's no way she could have eaten fewer pieces.

With the second method, Kaylin must have eaten at least 25 mushroom pieces. We can determine that she must eat mushrooms at a rate of at least 1 piece per second. She starts with 10 pieces on her plate. In the first 10 seconds, she eats 10 pieces, and 5 more are put on her plate. In the next 5 seconds, she eats 5 pieces, then her plate stays empty for 5 seconds, and then Bartholomew puts 15 more pieces on her plate. Then she eats 10 pieces in the last 10 seconds.

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each will consist of one line containing a single integer N, followed by a line containing N space-separated integers mi; the number of mushrooms on Kaylin's plate at the start, and at 10-second intervals.

Output
For each test case, output one line containing "Case #x: y z", where x is the test case number (starting from 1), y is the minimum number of mushrooms Kaylin could have eaten using the first method of computation, and z is the minimum number of mushrooms Kaylin could have eaten using the second method of computation.
Limits

1 ≤ T ≤ 100.
Small dataset

2 ≤ N ≤ 10.
0 ≤ mi ≤ 100.
Large dataset

2 ≤ N ≤ 1000.
0 ≤ mi ≤ 10000.

Breakdown:
At first it was hard to get the problem then with a little of focused I got that both questions where independent
So for first question is the sum of decreases of each interval for example we have 10 5 15 5
We have a for that perform the sum at second position and stops when reaches last position
  if what is in position, in first case m[1] < m[0]{ Add to the sum by this operation 10 - 5 = 5 }
  if what is in position, in second case m[2] < m[1] { No addition to the sum }
  if what is in position, in third case m[3] < m[2]{ Add to the sum by this operation 15 - 5 = 10 }

Sum = 15
For the second question is a little harder we use part here max to know which is the max difference between indexes this is to know how many mushrooms can be eaten by iteration
Then knowing this we compare if the value in the position is lower than max add to the sum
if not sum the max value
For example we have 10 5 15 5
We have this for to know the max difference between indexes at second position and stops when reaches last position
  if max is less than m[0] - m[1] (max here is assign as -1)
    10 - 5 = 5
    Assign to max the difference that is 5

  if max is less than m[1] - m[2] (max here is assign as 5)
    5 - 15 = -10
    Don't assign to max the difference because is less than 5

  if max is less than m[2] - m[3] (max here is assign as 5)
    15 - 5 = 10
    Assign to max the difference that is 10

Then is a for to sum the position if is lower than max value if not sum max value stops when reaches (last position - 1)
  if m[0] < max { Add the position value 10 < 10 }
  else{ Add 10 }

  if m[1] < max
    Add the position value 5 < 10
    Add 5

  if m[2] < max { Add the position value 15 < 10 }
  else { Add 10 }

Sum = 25
