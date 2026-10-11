//Q1
import java.util.Scanner;
class ZeroException extends Exception
 {
    ZeroException(String s)
     {
        super(s);
    }
}

class Prime
 {
    public static void main(String[] args)
     {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int n = sc.nextInt();

        try {
            if (n == 0)
                throw new ZeroException("Number is 0");

            boolean prime = true;

            if (n < 2)
                prime = false;

            for (int i = 2; i <= n / 2; i++) 
            {
                if (n % i == 0)
                 {
                    prime = false;
                    break;
                }
            }

            if (prime)
                System.out.println("Prime number");
            else
                System.out.println("Not a prime number");

        } catch (ZeroException e) {
            System.out.println(e.getMessage());
        }

        sc.close();
    }
}


//Q2

const fs = require('fs');

fs.stat('test.txt', (err, stats) =>
 {
    if (err)
     {
        console.log("File not found");
        return;
    }

    console.log("File size:", stats.size, "bytes");
    console.log("Is file:", stats.isFile());
    console.log("Is directory:", stats.isDirectory());
    console.log("Created:", stats.birthtime);
    console.log("Last accessed:", stats.atime);
    console.log("Last modified:", stats.mtime);
});
