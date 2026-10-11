//Q1
class MyNumber
 {
    private int n;

    MyNumber()
     {
        n = 0;
    }

    MyNumber(int n) 
    {
        this.n = n;
    }

    boolean isNegative()
     {
        return n < 0;
    }

    boolean isPositive()
     {
        return n > 0;
    }

    boolean isOdd()
     {
        return n % 2 != 0;
    }

    boolean isEven()
     {
        return n % 2 == 0;
    }

    public static void main(String args[])
     {
        int num = Integer.parseInt(args[0]);
        MyNumber obj = new MyNumber(num);

        System.out.println("Negative: " + obj.isNegative());
        System.out.println("Positive: " + obj.isPositive());
        System.out.println("Odd: " + obj.isOdd());
        System.out.println("Even: " + obj.isEven());
    }
}


//Q2


const fs = require('fs');
const path = require('path');
const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

const file = 'test.txt';

console.log("1.Create  2.Read  3.Update");
console.log("4.Rename  5.Delete");

rl.question("Enter choice: ", (ch) =>
 {
    if (ch == 1)
     {
        fs.writeFileSync(file, "Hello World");
        console.log("File created");
    }
     else if (ch == 2)
      {
        if (fs.existsSync(file))
            console.log(fs.readFileSync(file, 'utf8'));
        else
            console.log("File not found");
    } 
    else if (ch == 3)
     {
        fs.appendFileSync(file, "\nNew text");
        console.log("File updated");
    }
     else if (ch == 4)
      {
        fs.renameSync(file, 'new.txt');
        console.log("File renamed");
    }
     else if (ch == 5) 
     {
        fs.unlinkSync(file);
        console.log("File deleted");
    }
     else
      {
        console.log("Invalid choice");
    }

    rl.close();
});
