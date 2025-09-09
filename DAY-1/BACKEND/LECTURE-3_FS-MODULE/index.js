const fs=require('fs');

fs.writeFile("input.txt","hello from write file asynchronous",(err,data)=>{
    if(err) throw err;
    else {
        console.log("Message:",data);
    }
})
console.log("..........................")
fs.readFile("input.txt","utf-8",(err,data)=>{
    if(err) throw err;
    else {
        console.log("Message from read:",data);
    }
})
console.log("..........................")
fs.appendFile("input.txt","\nhello from append file",(err,data)=>{
    if(err) throw err;
    else {
        console.log("Message from read:",data);
    }
})
console.log("..........................")
fs.readFile("input.txt","utf-8",(err,data)=>{
    if(err) throw err;
    else {
        console.log("Message from append file read:",data);
    }
})