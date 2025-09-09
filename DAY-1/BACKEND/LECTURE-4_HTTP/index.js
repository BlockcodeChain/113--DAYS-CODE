const http=require('http');
const server =http.createServer((Req,res)=>{
    res.end("hello from http server");
})
server.listen(3000,(req,res)=>{
    console.log("Server running on port 3000");
})