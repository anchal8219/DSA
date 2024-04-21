var n=8;
var a = [1,2,0,4,0,6,3,8]
var j;
for(let i=0;i<n;i++){
    j=n-2;
        if(a[i]==0){
            while(j>=(i+1)){
                a[j+1]=a[j];
                j--;
            }
            a[j+1] = 0;
            i++;
        }
}

//The join(' ') method concatenates all the elements of the array a into a single string, separated by spaces. When you pass this string to console.log, it will print all the elements in one line, separated by spaces.
console.log(a.join(' '));

//or
for(let i=0;i<n;i++){
    console.log(a[i])
}

//or
let result = "";
for (let i = 0; i < a.length; i++) {
    result += a[i] + " ";
}
console.log(result.trim()); // trim() to remove the trailing space

//or
console.log(a.toString());

//or
a.forEach(item => console.log(item));

//or
a.map(item => console.log(item));






