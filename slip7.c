//Q1

class AgeException extends Exception
 {
    AgeException(String message) 
    {
        super(message);
    }
}
class Driver
 {
    int license_no;
    String name;
    String address;
    int age;

    
    Driver(int license_no, String name, String address, int age)
            throws AgeException 
            {

        if (age < 18)
         {
            throw new AgeException("Age is below 18 years");
         }

        this.license_no = license_no;
        this.name = name;
        this.address = address;
        this.age = age;
    }

    
    void display() 
    {
        System.out.println("License No : " + license_no);
        System.out.println("Name       : " + name);
        System.out.println("Address    : " + address);
        System.out.println("Age        : " + age);
    }
}

public class DriverDemo
 {
    public static void main(String[] args)
     {

        try {
            Driver d1 = new Driver(101, "Rahul", "Pune", 25);
            d1.display();

            System.out.println();

            Driver d2 = new Driver(102, "Amit", "Nashik", 16);
            d2.display();

             } catch (AgeException e)
         {
            System.out.println("Exception: " + e.getMessage());
         }
    }
}




//Q2
 <!DOCTYPE html>
<html>
<head>
    <title>Programming Languages</title>

    <style>
        
        li:first-child 
        {
            color: red;
            font-size: 25px;
            font-weight: bold;
        }

        li:last-child 
        {
            color: blue;
            font-size: 25px;
            font-weight: bold;
        }

        
        li {
            padding: 5px;
             }
    </style>
</head>

<body>

    <h2>Programming Languages</h2>

    <ul>
        <li>Java</li>
        <li>Python</li>
        <li>C</li>
        <li>C++</li>
        <li>JavaScript</li>
    </ul>

</body>
</html>