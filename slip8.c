//Q1
import java.util.Scanner;
abstract class Shape
 {
    int data1;
    int data2;

    
    public Shape(int data1, int data2) 
    {
        this.data1 = data1;
        this.data2 = data2;
    }

    
    abstract void printArea();
}

class Rectangle extends Shape
 {
    public Rectangle(int length, int breadth)
     {
        super(length, breadth);
     }

    @Override
    void printArea()
     {
        double area = data1 * data2;
        System.out.println("Area of Rectangle (Length: " + data1 + ", Breadth: " + data2 + ") = " + area);
    }
}


class Triangle extends Shape
 {
    public Triangle(int base, int height) 
    {
        super(base, height);
    }

    @Override
    void printArea() 
    {
        double area = 0.5 * data1 * data2;
        System.out.println("Area of Triangle (Base: " + data1 + ", Height: " + data2 + ") = " + area);
    }
}

class Circle extends Shape
 {
    public Circle(int radius) 
    {
        super(radius, 0);
    }

    @Override
    void printArea() 
    {
        double area = Math.PI * data1 * data1;
        System.out.println("Area of Circle (Radius: " + data1 + ") = " + area);
    }
}

public class Main 
{
    public static void main(String[] args) 
    {
        Shape rect = new Rectangle(10, 5);
        Shape tri = new Shape() {}; 
        
        Shape rectangle = new Rectangle(12, 6);
        Shape triangle = new Shape(10, 8) {
            @Override
            void printArea() 
            {
                System.out.println("Area of Triangle = " + (0.5 * data1 * data2));
            }
        };
    
        Rectangle r = new Rectangle(10, 5);
        Triangle t = new Triangle(10, 4);
        Circle c = new Circle(7);

        r.printArea();
        t.printArea();
        c.printArea();
    }
}



//Q2

<!DOCTYPE html>
<html>
<head>
    <title>Change Image</title>

    <style>
        body
         {
            text-align: center;
            font-family: Arial;
        }

        img
         {
            width: 300px;
            height: 200px;
            margin: 20px;
        }

        button
         {
            padding: 10px 20px;
            font-size: 18px;
        }
    </style>
</head>

<body>

    <h2>JavaScript DOM Image Change</h2>

    <!-- Image -->
    <img id="myImage" src="image1.jpg" alt="Image">

    <br>

    <!-- Button -->
    <button id="changeButton">Change Image</button>

    <script>
        let image = document.getElementById("myImage");
        let button = document.getElementById("changeButton");

        button.addEventListener("click", function() {

            image.src = "image2.jpg";
        });
    </script>

</body>
</html>

