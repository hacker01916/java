//Q1

interface Calculator
 {
    int add(int a, int b);
    int subtract(int a, int b);
}

class SimpleCalc implements Calculator
 {

    public int add(int a, int b) 
    {
        return a + b;
    }

    public int subtract(int a, int b)
     {
        return a - b;
    }

    public static void main(String[] args)
     {
        SimpleCalc obj = new SimpleCalc();

        System.out.println("Addition = " + obj.add(10, 5));
        System.out.println("Subtraction = " + obj.subtract(10, 5));
    }
}



//Q2
const fs = require('fs');

fs.mkdirSync('MyFolder');
console.log("Directory created");

console.log("Directories:", fs.readdirSync('.'));

fs.renameSync('MyFolder', 'NewFolder');
console.log("Directory renamed");

fs.rmdirSync('NewFolder');
console.log("Directory deleted");

let student = {
    name: "Rahul",
    rollNo: 101,
    course: "B.Sc. Computer Science"
};

fs.writeFileSync('student.json', JSON.stringify(student));
console.log("JSON data written");


let data = fs.readFileSync('student.json', 'utf8');
let obj = JSON.parse(data);

console.log(obj);
