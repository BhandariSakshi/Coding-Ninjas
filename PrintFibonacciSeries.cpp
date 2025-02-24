vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    int fib1 = 0;
    int fib2 = 1;
    int next = 0;
    vector<int> result;

    if (n <= 0) return result; 
    if (n >= 1) result.push_back(0);
    if (n >= 2) result.push_back(1);


    for(int i = 3; i <= n; i++)
    {
        next = fib1+fib2;
        fib1=fib2;
        fib2=next;

        result.push_back(next);

    }

    return result;


    
}
