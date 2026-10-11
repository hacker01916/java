//Q1

import java.util.Scanner;

class Vehicle
 {
    String company;
    double price;

    void getData(Scanner sc)
     {
        System.out.print("Enter company: ");
        company = sc.nextLine();

        System.out.print("Enter price: ");
        price = sc.nextDouble();
    }

    void display() 
    {
        System.out.println("Company: " + company);
        System.out.println("Price: " + price);
    }
}

class LightMotorVehicle extends Vehicle
 {
    int mileage;

    void getData(Scanner sc) 
    {
        sc.nextLine();
        super.getData(sc);
        System.out.print("Enter mileage: ");
        mileage = sc.nextInt();
    }

    void display()
     {
        super.display();
        System.out.println("Mileage: " + mileage);
    }
}

class HeavyMotorVehicle extends Vehicle
 {
    int capacity;

    void getData(Scanner sc) 
    {
        sc.nextLine();
        super.getData(sc);
        System.out.print("Enter capacity in tons: ");
        capacity = sc.nextInt();
    }

    void display() 
    {
        super.display();
        System.out.println("Capacity: " + capacity + " tons");
    }
}

public class VehicleDemo 
{
    public static void main(String[] args)
     {
        Scanner sc = new Scanner(System.in);

        System.out.println("1. Light Vehicle");
        System.out.println("2. Heavy Vehicle");
        System.out.print("Enter choice: ");
        int ch = sc.nextInt();

        if (ch == 1) 
        {
            LightMotorVehicle l = new LightMotorVehicle();
            l.getData(sc);
            l.display();
        }
         else if (ch == 2)
         {
            HeavyMotorVehicle h = new HeavyMotorVehicle();
            h.getData(sc);
            h.display();
        }
         else
          {
            System.out.println("Invalid choice");
        }

        sc.close();
    }
}



//Q2
let marks = [85, 90, 78];

let total = marks[0] + marks[1] + marks[2];
let average = total / 3;

console.log("Subject 1: " + marks[0]);
console.log("Subject 2: " + marks[1]);
console.log("Subject 3: " + marks[2]);
console.log("Total Marks: " + total);
console.log("Average Marks: " + average);