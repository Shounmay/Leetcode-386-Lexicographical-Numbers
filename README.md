<h1 align='center'><u><b> Lexicographical Numbers</b> </u></h1>

<h2> <u>Problem Link:</u> https://leetcode.com/problems/lexicographical-numbers/ </h2>

<h1 ><u> Idea Used: </u></h1>

## Here for "1" the dictonary family will be {10,11,12...19,100,101...109...so on}, so we can generalize that

## for each element it'll have 9 child elements(e.g 1-> 10,11,12,.....19), and further each child element will have

## it's 9 child (10-. 100,101,102...109). We consider those elements which are less than equal to N. So each element

## x will have families as {(x\*10+i) , 0<=i<=9}. So single didgit elements will have {1,2....9} and each

## single digit will have a 2 digit family{1--> 10,11,12..19} and each 2 digit will have it's 3 digit family and so on.

<h1 ><u> Time and Space Analysis </u></h1>

## Time-Complexity: O(9^(logN(base10)))

## Space-Compexity: O(logN base 10)...[Auxillary Space for recursion Stack]
