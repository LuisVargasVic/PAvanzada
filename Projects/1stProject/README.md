Problem:
A little boy likes throwing balls in his dreams. He stands on the endless horizontal plane and throws a ball at an angle of a degrees to the plane. The starting speed of the ball is V m/s. The ball flies some distance, falls down, then jumps off, flies again, falls again, and so on.
As far as everything may happen in a dream, the laws of the ball's motion differ from the usual laws of physics:

    the ball moves in the gravity field with acceleration of gravity equal to 10 m/s2;
    the rebound angle equals the angle of fall;
    after every fall, the kinetic energy of the ball decreases by a factor of K;
    there is no air in the dream;
    "Pi" equals to 3.1415926535.

Your task is to determine the maximal distance from the point of throwing that the ball can fly.
Input
The input contains three numbers: 0 ≤ V ≤ 500000, 0 ≤ a ≤ 90, and K > 1 separated by spaces. The numbers V and a are integers; the number K is real.
Output
The output should contain the required distance in meters rounded to two fractional digits.

Breakdown:
First get the input and analyze everything it detects is correct get the input
Divide the input into three send that to the function like parameters
In the function make an if statement with this condition for the three variables 0 ≤ V ≤ 500000, 0 ≤ a ≤ 90, and K > 1
And finally the formula that is explained in the problem
Speed that is exponent 2
That multiplies the K factor in the horizontal plane that multiplies acceleration and PI all that divides by 90 degrees
All of that divides the gravity divided by the k factor minus 1
(Speed^2 * factorK * sin(acceleration * PI / 90)) / (gravity * (factorK - 1))
Thanks to my physical book from 2 years ago struggling for a long time  
Output
