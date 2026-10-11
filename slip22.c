//Q2
interface ProductInfo 
{
    void display();
}

class Product implements ProductInfo 
{
    int product_id;
    String product_name;
    double product_cost;
    int product_quantity;

    static int count = 0;

    Product() 
    {
        product_id = 0;
        product_name = "Unknown";
        product_cost = 0.0;
        product_quantity = 0;
        count++;
    }

    Product(int id, String name, double cost, int quantity) 
    {
        product_id = id;
        product_name = name;
        product_cost = cost;
        product_quantity = quantity;
        count++;
    }

    public void display()
     {
        System.out.println("Product ID: " + product_id);
        System.out.println("Product Name: " + product_name);
        System.out.println("Product Cost: " + product_cost);
        System.out.println("Product Quantity: " + product_quantity);
        System.out.println("-------------------------");
    }

    static void displayCount()
     {
        System.out.println("Total Product Objects: " + count);
     }
}

public class ProductDemo 
{
    public static void main(String[] args)
     {
        Product p1 = new Product();
        Product p2 = new Product(101, "Laptop", 50000, 2);
        Product p3 = new Product(102, "Mouse", 500, 5);

        p1.display();
        p2.display();
        p3.display();

        Product.displayCount();
    }
}

//Q2

const fs = require('fs');

fs.writeFile('test.txt', 'Hello Node.js!', function(err) 
{
    if (err) throw err;
    console.log("File written successfully.");

    fs.readFile('test.txt', 'utf8', function(err, data)
     {
        if (err) throw err;
        console.log("File content: " + data);
    });
});
