let inputString = "Sundar in Wonderland"
let splittedString =  inputString.split(' ')
let reversedString =""

splittedString.map((word)=>{
    let reversedWord = ""
    console.log(`Word:${word}`)
    for(let i= word.length - 1; i>=0;i--){
        console.log(reversedWord)
        reversedWord += word[i]
        console.log(`reversed Word: ${reversedWord}`)
    }
    console.log(`${reversedString} ${reversedWord}`)
    console.log(reversedString === " ")
    reversedString === " "? reversedString+reversedWord : reversedString + " " + reversedWord 
    console.log(`reversed String:${reversedString}`)
})

console.log(reversedString)
