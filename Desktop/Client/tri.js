let stdin = process.openStdin()
let i=1,d;
var cal = require('./Cal.js')
const CalTri =()=>{
    console.log('d:')
    stdin.addListener("data",(value)=>{
        if(i===1){
            d=value
            console.log('h:')
        }
        else{
            console.log('bmi:'+cal.tri(d,value))
            stdin.destroy()
        }
        i++
    })
}
CalTri()