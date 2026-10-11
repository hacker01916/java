//Q1
abstract class Shape
 {
    abstract void area();
    abstract void volume();
}
class Cylinder extends Shape 
{
    double radius, height;

    Cylinder(double r, double h) 
    {
        radius = r;
        height = h;
    }

    void area()
     {
        double a = 2 * Math.PI * radius * (radius + height);
        System.out.println("Area of Cylinder: " + a);
    }

    void volume() 
    {
        double v = Math.PI * radius * radius * height;
        System.out.println("Volume of Cylinder: " + v);
    }

    public static void main(String[] args)
     {
        Cylinder c = new Cylinder(5, 10);
        c.area();
        c.volume();
    }
}


//Q2

const fs = require('fs');

fs.writeFileSync('sync.txt', 'Synchronous write example');
console.log('Synchronous write done');

fs.writeFile('async.txt', 'Asynchronous write example', (err) => 
{
  if (err) throw err;
  console.log('Asynchronous write done');
});

const dataSync = fs.readFileSync('sync.txt', 'utf8');
console.log('Synchronous read:', dataSync);

fs.readFile('async.txt', 'utf8', (err, data) => 
{
  if (err) throw err;
  console.log('Asynchronous read:', data);
});

console.log('Program continues while async operations run...');
