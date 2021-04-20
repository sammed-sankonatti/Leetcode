var isPalindrome =  function(x){
    var nums = x.toString();

    for(let i=0;i<nums.length/2; i++)
    {
        if(nums.charAt(i) !=  nums.charAt(nums.length-1-i))
            console.log("not palindrome");
    }

    console.log("Palindrome");
}

isPalindrome(101);