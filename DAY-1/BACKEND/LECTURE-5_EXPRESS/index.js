import express, { json } from 'express'
const app=express();
app.get('/',(req,res)=>{
    res.send("hello from home");
})
app.get('/about',(req,res)=>{
    res.send("hello from  about");
})
app.get('/project',(req,res)=>{
    res.send("hello from  project");
})
const obj={
    name:"aanshi",
    age:21,
}
app.get('/contact',(req,res)=>{
  
    res.json({ message: "hello from contact",obj })
})
app.post('/post',(req,res)=>{
    res.send("Post requests aanshi")
})
app.listen(3000,(req,res)=>{
    console.log("hello form server 3000")
})