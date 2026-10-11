//Q1 
import java.io.*;
import java.util.*;

class FileReverse {
public static void main(String[] args) throws Exception {
    Scanner sc = new Scanner(System.in);

   System.out.print("Enter file name: ");
  String name = sc.nextLine();

  FileReader fr = new FileReader(name);
   StringBuilder s = new StringBuilder();

   int ch;
   while ((ch = fr.read()) != -1)
  s.append((char) ch);
 fr.close();
 System.out.println("Reversed and Case Changed:");
   System.out.println(s.reverse().toString()
    .chars()
    .collect(StringBuilder::new,
    (b, c) -> b.append(
  Character.isUpperCase(c)
? Character.toLowerCase(c)
  : Character.toUpperCase(c)),
StringBuilder::append));
    }
}


//Q2

<!DOCTYPE html>
<html>
<head>
    <title>Image Gallery</title>

    <style>
        * {
            box-sizing: border-box;
        }

        body
         {
            margin: 0;
            font-family: Arial, sans-serif;
            background-color: #f2f2f2;
        }

        h1 
        {
            text-align: center;
            padding: 20px;
            color: #333;
        }

        
        .gallery
         {
            display: flex;
            flex-wrap: wrap;
            gap: 20px;
            justify-content: center;
            padding: 20px;
        }

        .gallery-item {
            width: 300px;
            background-color: white;
            border-radius: 10px;
            overflow: hidden;
            box-shadow: 0 4px 8px rgba(0, 0, 0, 0.2);
            transition: transform 0.3s;
        }

        
        .gallery-item:hover {
            transform: scale(1.05);
        }

        .gallery-item img {
            width: 100%;
            height: 200px;
            object-fit: cover;
            display: block;
            transition: opacity 0.3s;
        }

        .gallery-item:hover img {
            opacity: 0.8;
        }

        .caption {
            text-align: center;
            padding: 15px;
            font-size: 18px;
            font-weight: bold;
        }

        
        @media (max-width: 768px) {
            .gallery-item {
                width: 45%;
            }
        }

        @media (max-width: 500px) {
            .gallery-item {
                width: 100%;
            }
        }
    </style>
</head>

<body>

    <h1>My Image Gallery</h1>

    <div class="gallery">

        <div class="gallery-item">
            <img src="https://picsum.photos/id/1015/600/400"
                 alt="Mountain">
            <div class="caption">Mountain</div>
        </div>

        <div class="gallery-item">
            <img src="https://picsum.photos/id/1016/600/400"
                 alt="Nature">
            <div class="caption">Nature</div>
        </div>

        <div class="gallery-item">
            <img src="https://picsum.photos/id/1025/600/400"
                 alt="Animal">
            <div class="caption">Animal</div>
        </div>

        <div class="gallery-item">
            <img src="https://picsum.photos/id/1035/600/400"
                 alt="River">
            <div class="caption">River</div>
        </div>

        <div class="gallery-item">
            <img src="https://picsum.photos/id/1043/600/400"
                 alt="Forest">
            <div class="caption">Forest</div>
        </div>

        <div class="gallery-item">
            <img src="https://picsum.photos/id/1069/600/400"
                 alt="Beach">
            <div class="caption">Beach</div>
        </div>

    </div>

</body>
</html>
