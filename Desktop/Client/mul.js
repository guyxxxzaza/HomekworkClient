var Cal = require('./Cal.js')
var i = 1
let stdin = process.openStdin()
console.log('Enter Value for Cal Multiply : ')

stdin.addListener('data', temp => {
	if (i == 1) {
		Cal.calMul(temp)

		console.log('\n_________________________________\n')
		console.log('Enter Your Score : ')
	} else{
		console.log('Your Grade is ' + Cal.avg(temp))
		console.log('')
		console.log('\n_________________________________\n')
		stdin.destroy()
	} 

		


	i++
})