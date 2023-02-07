import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.Condition;
import java.util.concurrent.locks.ReentrantLock;
public class BankAccount {
    private double balance;
    public BankAccount() {
        balance = 0;
    }
    public void deposit(double amount) {
        System.out.println("Depositing: " + amount);
        double newBalance = balance + amount;
        System.out.println(", new balance is: " + newBalance);
        balance = newBalance;
    }
    public void withdraw(double amount) {
        System.out.println("Withdrawing: " + amount);
        double newBalance = balance - amount;
        System.out.println(", new balance is: " + newBalance);
        balance = newBalance;
    }
    public double getBalance() {
        return balance;
    }
}
