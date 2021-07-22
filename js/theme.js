'Use strict'

let timeVariable = ""
timeVariable = document.querySelector('.theme')

function theme()
{
	timeVariable.classList.toggle('light-theme')
	timeVariable.classList.toggle('dark-theme')
	console.log(timeVariable)
}