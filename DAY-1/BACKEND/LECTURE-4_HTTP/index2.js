const http=require('http');
const server =http.createServer((req,res)=>{
  if(req.url=="/"){
 res.end("hello from http server HOME")
    }
    if(req.url=="/about"){
 res.end("hello from http server ABOUT")
    }
    if(req.url=="/project"){
 res.end("hello from http server PROJECT")
    }
    if(req.url=="/contact"){
 res.end("hello from http server CONTACT US")
    }
})

server.listen(3000,(req,res)=>{
    console.log("Server running on port 3000");
})