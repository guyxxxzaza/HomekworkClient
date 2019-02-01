let stdin = process.openStdin()
let i=1,w,d;
var cal = require('./Cal.js')
const CalBmi =()=>{
    console.log('w:')
    stdin.addListener("data",(value)=>{
        if(i===1){
            w=value
            console.log('h:')
        }
        else{
            console.log('bmi:'+cal.bmi(w,value))
            stdin.destroy()
        }
        i++
    })
}


CalBmi()
