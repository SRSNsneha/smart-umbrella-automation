var http = require("http");
var fs = require("fs");
var SerialPort = require("serialport");
var parsers = SerialPort.parsers;

const parser = new parsers.Readline({ delimiter: "\r\n" });

// Change COM port as per your system
var port = new SerialPort("COM3", { baudRate: 9600 });
port.pipe(parser);

var index = fs.readFileSync("index.html");

var app = http.createServer(function (req, res) {
  res.writeHead(200, { "Content-Type": "text/html" });
  res.end(index);
});

var io = require("socket.io")(app);

io.on("connection", function (socket) {
  parser.on("data", function (data) {
    io.emit("data", data);
  });

  socket.on("command", function (cmd) {
    port.write(cmd + "\n");
  });
});

app.listen(3000, () => {
  console.log("Server running on http://localhost:3000");
});
