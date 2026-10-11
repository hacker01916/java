//Q1
class Employee 
{
    int id;
    String name;
    double salary;

    void getData() 
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Employee ID: ");
        id = sc.nextInt();

        System.out.print("Enter Employee Name: ");
        name = sc.next();

        System.out.print("Enter Employee Salary: ");
        salary = sc.nextDouble();
    }

    void display() {
        System.out.println("ID     : " + id);
        System.out.println("Name   : " + name);
        System.out.println("Salary : " + salary);
    }
}

public class EmployeeDemo
 {
    public static void main(String[] args)
     {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of employees: ");
        int n = sc.nextInt();

    
        Employee[] emp = new Employee[n];

        for (int i = 0; i < n; i++)
         {
            System.out.println("\nEnter details of Employee " + (i + 1));

            emp[i] = new Employee();
            emp[i].getData();
        }

        System.out.println("\n--- Employee Details ---");

        for (int i = 0; i < n; i++) {
            emp[i].display();
            System.out.println();
        }
    }
}



//Q2
<!DOCTYPE html>
<html>
<head>
    <title>Arrow Functions</title>
</head>

<body>
    <h2>Arrow Functions in JavaScript</h2>
    <script>
        let add = (a, b) => a + b;
        let subtract = (a, b) => a - b;
        let multiply = (a, b) => a * b;
        let divide = (a, b) => a / b;

        let a = 20;
        let b = 10;

        document.write("First Number = " + a + "<br>");
        document.write("Second Number = " + b + "<br><br>");

        document.write("Addition = " + add(a, b) + "<br>");
        document.write("Subtraction = " + subtract(a, b) + "<br>");
        document.write("Multiplication = " + multiply(a, b) + "<br>");
        document.write("Division = " + divide(a, b) + "<br>");
    </script>

</body>
</html>