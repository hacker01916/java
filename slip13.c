//Q1
import java.util.Scanner;

class Clock
 {
    int hours, minutes, seconds;
    String mode;

    Clock(int h, int m, int s)
     {
        hours = h;
        minutes = m;
        seconds = s;
        mode = (h < 12) ? "AM" : "PM";
    }

    boolean valid()
     {
        return hours >= 0 && hours <= 23 &&
               minutes >= 0 && minutes <= 59 &&
               seconds >= 0 && seconds <= 59;
    }

    void display()
     {
        int h = hours % 12;
        if (h == 0)
            h = 12;

        System.out.printf("Time: %02d:%02d:%02d %s",
                h, minutes, seconds, mode);
    }
}

public class ClockDemo
 {
    public static void main(String[] args)
     {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter hours: ");
        int h = sc.nextInt();

        System.out.print("Enter minutes: ");
        int m = sc.nextInt();

        System.out.print("Enter seconds: ");
        int s = sc.nextInt();

        Clock c = new Clock(h, m, s);

        if (c.valid())
            c.display();
        else
            System.out.println("Invalid time");

        sc.close();
    }
}


//Q2
let a = 10;
let b = 20;

console.log("Before swapping:");
console.log("a =", a);
console.log("b =", b);

[a, b] = [b, a];

console.log("\nAfter swapping:");
console.log("a =", a);
console.log("b =", b);