#include <stdio.h>

/* Input function to take input from user ! 
       which include input like :- 
       deposit;
        rate of return;
        annual contribution;
        total yrs !
        */
        
        
void input(double *deposit, double *rateofreturn, double *annual_contribution, int *total_yrs) {
    printf("Enter deposit:\n rate of return:\n annual contribution:\n total years:\n\n");
    scanf("%lf %lf %lf %d", deposit, rateofreturn, annual_contribution, total_yrs);
}


// To Print heading  using loop ;

void heading() {
    for (int i = 0; i < 60; i++) printf("*");
    printf("\n%10s%18s%16s%16s\n", "Year", "Deposit", "Interest", "New Balance");
    for (int i = 0; i < 60; i++) printf("*");
    printf("\n");
}

// logic implementation !
void lop(int total_yrs, double deposit, double rateofreturn, double annual_contribution) {
    double balance = deposit;
   
    for (int yr = 1; yr <= total_yrs; yr++) {
        double interest = balance * (rateofreturn / 100);
        double new_balance = balance + interest + annual_contribution;
       
        printf("%10d%18.2f%16.2f%16.2f\n", yr, balance, interest, new_balance);
        balance = new_balance;
    }
}

// Main function
int main() {
    double deposit, rateofreturn, annual_contribution;
    int total_yrs;
    
    // function csll !
    input(&deposit, &rateofreturn, &annual_contribution, &total_yrs);

    // To display the given input from the user !.
    printf("\nDeposit: %.2lf\nRate of Return: %.2lf%%\nAnnual Contribution: %.2lf\nTotal Years: %d\n\n",
           deposit, rateofreturn, annual_contribution, total_yrs);

    // function call ! 
    heading();
    // function call ! 
    lop(total_yrs, deposit, rateofreturn, annual_contribution);

    return 0;
}