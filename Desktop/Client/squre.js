let stdin = process.openStdin()
let i=1,d;
var cal = require('./Cal.js')
const CalSqure =()=>{
    console.log('d:')
    stdin.addListener("data",(value)=>{
        if(i===1){
            d=value
            console.log('h:')
        }
        else{
            console.log('bmi:'+cal.squre(d,value))
            stdin.destroy()
        }
        i++
    })
}
CalSqure()