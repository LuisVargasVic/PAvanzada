Problem:

You've built an inflight entertainment system with on-demand movie streaming.

Users on longer flights like to start a second movie right when their first one ends, but they complain that the plane usually lands before they can see the ending. So you're building a feature for choosing two movies whose total runtimes will equal the exact flight length.

Write a function that takes an integer flight_length (in minutes) and a list of integers movie_lengths (in minutes) and returns a boolean indicating whether there are two numbers in movie_lengths whose sum equals flight_length.

When building your function:

    Assume your users will watch exactly two movies
    Don't make your users watch the same movie twice
    Optimize for runtime over memory


Break down:
I will use a HashTable to get the hour and the name of the movies
The first thing is to insert the movies with the index, length and name and assign the flight's length after that enter in a for search for the i movie and j movie (that is the right of the i) and that length of movie i + length of movie j equal to the flight's length if anything is found it will print that there is nothing and will keep looking when everyone is searched it will print there are no more movies option.
