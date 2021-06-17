It is used for optimization problems

We have a problem with a constraint and multiple solutions.
We have to optimize it to make it minimum or maximum.

The problems should be solved in stages(set by you)
if the solution is feasible then we include in final solution.

In general, greedy algorithms have five components,
1. Candidate set, from which a solution is created
2. Selection function, which chooses the best candidate to be added to the solution
3. Feasibility function, that is used to determine if a candidate can be used to contribute to a solution
4. Objective function, which assigns a value to a solution, or a partial solution
5. Solution function, which will indicate when we have discovered a complete solution

--Coin Change Problem


--Knapsack Problem
n = no. of objects
m = size of bag

objects
profit
weight

We have to add the objects to the bag and get the maximum profits to sell

For that we have to find the profit/weight for each item and add then highest to lowest till the bag weight reached.

Then we verify the weight and the map the amount of profit.
We can also add fraction of weights


--Job Sequencing with deadlines
n = no. of jobs
Jobs = No. of jobs

We have to find the highest amount of profit from completing the job

