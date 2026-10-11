//Q1

<html>
<body>
<h2>Color Application</h2>

<button onclick="changeColor('red')">Red</button>
<button onclick="changeColor('green')">Green</button>
<button onclick="changeColor('blue')">Blue</button>

<script>
function changeColor(color) 
{
    document.body.style.backgroundColor = color;
    document.write("Selected Color: " + color);
}
</script>
</body>
</html>


//Q2

const http = require('http');

const server = http.createServer((req, res) => {
    res.writeHead(200, {'Content-Type': 'text/plain'});
    res.end('Hello! Request received successfully.');
});

server.listen(3000, () => {
    console.log('Server running at http://localhost:3000');
});

//node server.js