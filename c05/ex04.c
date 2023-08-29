int ft_fibonacci(int index) {
    // Base case: Fibonacci sequence starts with 0 and 1
    if (index == 0)
        return 0;
    else if (index == 1)
        return 1;
    // Check for negative index
    else if (index < 0)
        return -1;
    // Recursive case: Calculate Fibonacci using recursion
    else
        return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}
