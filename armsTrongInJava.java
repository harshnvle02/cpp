import java.util.Scanner;

class armstrong {
     int checkLength(int num) {

        int count = 0;

        while (num != 0) {
            num = num / 10;
            count++;
        }
        return count;
    }

    private int power(int digit, int length) {
        int mul = 1;
        int i = 0;

        while (i < length) {
            mul = mul * digit;
            i++;
        }
        return mul;
    }

    public boolean check(int num) {

        int getLength = checkLength(num);
        int newNum = num;
        int sum = 0;
        int digit;

        while (num != 0) {
            int getMul = 1;
            digit = num % 10;
            getMul = power(digit, getLength);

            sum = sum + getMul;
            num = num / 10;
        }
        if (sum == newNum) {
            return true;
        }
        return false;

    }

}

public class armsTrongInJava {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number");
        int num = sc.nextInt();
        sc.close();

        armstrong arm = new armstrong();
        if(arm.check(num))
        {
            System.out.println("It is armstrong"); 
        }
        else
        {
            System.out.println("It is not armstron");
        }

    }
}