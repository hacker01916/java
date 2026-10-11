//Q1
class Person 
{
    String Personname;
    String Aadharno;
    int Panno;

    Person(String Personname, String Aadharno, int Panno)
     {
        this.Personname = Personname;
        this.Aadharno = Aadharno;
        this.Panno = Panno;
    }

    void display()
     {
        System.out.println("Name: " + Personname);
        System.out.println("Aadhar No: " + Aadharno);
        System.out.println("PAN No: " + Panno);
        System.out.println();
    }

    public static void main(String[] args)
     {
        Person p1 = new Person("Rahul", "123456789012", 101);
        Person p2 = new Person("Priya", "234567890123", 102);
        Person p3 = new Person("Amit", "345678901234", 103);
        Person p4 = new Person("Sneha", "456789012345", 104);
        Person p5 = new Person("Rohan", "567890123456", 105);

        p1.display();
        p2.display();
        p3.display();
        p4.display();
        p5.display();
    }
}


//Q2


const fs = require('fs');
fs.readFile('student.json', 'utf8', (err, data) => 
{
    if (err)
     {
        console.log("Error reading file");
        return;
    }

   
    let student = JSON.parse(data);

    student.name = "Rahul";
    student.marks = 90;

    fs.writeFile('student.json',
        JSON.stringify(student, null, 2), (err) =>
         {
        if (err)
         {
            console.log("Error writing file");
        } else 
        {
            console.log("JSON file updated successfully");
            console.log(student);
        }
    });
});


//student.json:

{
  "name": "Rahul",
  "marks": 90,
  "course": "BSc"
}