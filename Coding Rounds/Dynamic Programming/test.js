const allConstruct = (target, wordBank) => {
    const table = Array(target.length + 1)
    .fill()
    .map(()=> []);

    table[0] = [[]];

    for(let i=0; i<=target.length; i++){
        for(let word of wordBank){
            if(target.slice(i, i+word.length) === word){
                const newCombination = table[i].map(subArray =>[...subArray, word]);
                table[i + word.length].push(...newCombination);
            }
        }
    }
    return table[target.length];
};

console.log(allConstruct("purple", ['purp', 'p', 'ur', 'le', 'purpl'])) // 2 ways on the output
console.log(allConstruct("abcdef", ['ab', 'abc', 'cd', 'def', 'abcd', 'ef', 'c'])) // 4 ways on the output
console.log(allConstruct("potato", ['pot', 'ta', 'to']))
