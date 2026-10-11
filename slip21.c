//Q1

class College
 {
    int cno;
    String cname, caddr;

    College(int no, String name, String addr)
     {
        cno = no;
        cname = name;
        caddr = addr;
    }

    void displayCollege()
     {
        System.out.println("College No: " + cno);
        System.out.println("College Name: " + cname);
        System.out.println("Address: " + caddr);
    }
}

class Department extends College 
{
    int dno;
    String dname;

    Department(int cno, String cname, String caddr,
               int dno, String dname)
                {
        super(cno, cname, caddr);
        this.dno = dno;
        this.dname = dname;
    }

    void display()
     {
        displayCollege();
        System.out.println("Department No: " + dno);
        System.out.println("Department Name: " + dname);
    }
}

public class CollegeDemo 
{
    public static void main(String[] args) 
    {
        Department d = new Department( 1, "SP College", "Pune", 101,"Computer Science");

        d.display();
    }
}


//Q2


const path = require('path');
let p = 'C:/College/Java/program.java';
console.log("Join:", path.join('College', 'Java', 'file.java'));
console.log("Resolve:", path.resolve('College', 'Java'));
console.log("Directory:", path.dirname(p));
console.log("File Name:", path.basename(p));
console.log("Extension:", path.extname(p));
console.log("File Name without Extension:",path.basename(p, '.java'));