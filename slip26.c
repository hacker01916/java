//Q1

import java.util.Scanner;

class Student
 {
    String student_name;
    int student_rollno;
    int total_lectures;
    int attended_lectures;

    Student(String name, int rollno, int total, int attended)
     {
        student_name = name;
        student_rollno = rollno;
        total_lectures = total;
        attended_lectures = attended;
    }
    void display() throws Exception
     {
        double percentage =
            (attended_lectures * 100.0) / total_lectures;

        if (percentage < 75)
         {
            throw new Exception("Student is Not Eligible for Exam");
         }

        System.out.println("Name: " + student_name);
        System.out.println("Roll No: " + student_rollno);
        System.out.println("Attendance: " + percentage + "%");
        System.out.println("Eligible for Exam");
    }
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter name: ");
        String name = sc.nextLine();

        System.out.print("Enter roll no: ");
        int roll = sc.nextInt();

        System.out.print("Enter total lectures: ");
        int total = sc.nextInt();

        System.out.print("Enter attended lectures: ");
        int attended = sc.nextInt();

        Student s = new Student(name, roll, total, attended);

        try
         {
            s.display();
         }
         catch (Exception e)
         {
            System.out.println(e.getMessage());
         }

        sc.close();
    }
}



//Q2

const fs = require('fs');
fs.copyFile('a.txt', 'b.txt', (err) =>
 {
    if (err)
     {
        console.log("Copy error");
        } else
         {
         console.log("File copied");

        fs.rename('b.txt', 'c.txt', (err) =>
         {
            if (err) 
            {
                console.log("Rename error");
            } 
            else
            {
                console.log("File renamed");
                fs.unlink('c.txt', (err) => {
                    if (err)
                     {
                        console.log("Delete error");
                    }
                     else
                      {
                        console.log("File deleted");
                     }
                });
            }
        });
    }
});

