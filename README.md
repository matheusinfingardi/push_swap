
# PUSH SWAP

**Intro:** This project will make you sort data on a stack, with a limited set of instructions, using the lowest number of actions. 

**Algorithm:** In this project it's used the **Turk Algorithm** one appropriated to succefully solute an optimized data sorting also for long stacks.

**Mandatory part:** The **Push Swap** project is a very simple and higly effective algorithm project: data will need to be sorted. You have to your disposal a set of int values, 2 stacks and a set of instructions to manipulate both stacks.

The goal is write a program in C which calculates and displays on the standard output the smallest program using Push Swap language that sorts the integer arguments received.

**Push Swap Rules**

* Composed by to stacks named a and b
* To start 
    
    * Stack a contains a random amount of negative and or positive numbers which cannot be duplicated
    * Stack b is empty

* The goal is to sort in ascending order numbers into stack a
* To do this have this operations at disposal:
    
    * sa: swap a (swap the first two elements at the top of stack a)
    * sb: swap b (swap the first two elements at the top of stack b)
    * ss: sa and sb at the same time
    * pa: push a (take the first element at the top of b and put it at the top of a)
    * pb: push b (take the first element at the top of a and put it at the top of b)
    * ra: rotate a (shift up all elements of stack a by 1)
    * rb: rotate b (shift up all elements of stack b by 1)
    * rr: ra and rb at the same time
    * rra: reverse rotate a (shift down all elements of stack a by 1)
    * rrb: reverse rotate b (shift down all elements of stack b by 1)
    * rrr: rra and rrb at the same time

## Push Swap 3
![PushSwap3](https://github.com/matheusinfingardi/push_swap/blob/main/push_swap/Push%20Swap%20-%203.gif)

## Push Swap 5
![PushSwap5](https://github.com/matheusinfingardi/push_swap/blob/main/push_swap/Push%20Swap%20-%205.gif)

## Push Swap 50
![PushSwap50](https://github.com/matheusinfingardi/push_swap/blob/main/push_swap/Push%20Swap%20-%2050.gif)

## Push Swap 100
![PushSwap100](https://github.com/matheusinfingardi/push_swap/blob/main/push_swap/Push%20Swap%20-%20100.gif)

## Push Swap 500
![PushSwap500](https://github.com/matheusinfingardi/push_swap/blob/main/push_swap/Push%20Swap%20-%20500.gif)
