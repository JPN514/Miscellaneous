from array import array
from pickle import TRUE
import re

#Function to get word from user, will be used repeatedly
def get_word():
    word = input("Enter a word: ")
    return word

#Function to reverse a string input by the user:
def reverse_word():
    word = get_word
    reverse = ""
    for letter in word[::-1]:
        reverse = reverse + letter
    print(reverse)
    is_pallindrome(word,reverse)

#Function to check if the word is a pallindrome:
def is_pallindrome(word,reverse):
    if word == reverse:
        print(word + " is a pallindrome.") 
    else: 
        print(word + " is NOT a pallindrome.")        
#reverse_word()

#Function to count matching and non-matching chars in a pair of strings
def count_matching_chars():
    word1 = get_word()
    word2 = get_word()

    c, j, n = 0, 0, 0
      
    # loop executes till length of str1 and 
    # stores value of str1 character by character 
    # and stores in i at each iteration.
    for i in word1:    
          
        # this will check if character extracted from
        # str1 is present in str2 or not(str2.find(i)
        # return -1 if not found otherwise return the 
        # starting occurrence index of that character
        # in str2) and j == str1.find(i) is used to 
        # avoid the counting of the duplicate characters
        # present in str1 found in str2
        if word2.find(i)>= 0 and j == word1.find(i): 
            c += 1
        elif word2.find(i) < 0:
            n += 1
        j += 1
    print("Number of matching characters are: " + str(c))
    print("Number of non-mathcing characters are: " + str(n))
#count_matching_chars()    

#Function to count number of vowels in a string
def vowel_count():
    word = get_word()
    vowels = "aeiou"
    count= 0

    #This loop counts all vowels
    for i in word:
        if vowels.find(i) >= 0:
            count += 1
    print("There are {} vowels in the string: {}".format(count,word))

    count = 0
    consonants = 0
    j = 0
    #This loop counts distinct vowels
    for i in word:
        if vowels.find(i) >= 0:
            count += 1
            vowels = vowels.replace(i,"") #this removes the already counted vowel to ensure no double count
        elif vowels.find(i) < 0 and j == word.find(i): #ensures the consonant has not been counted already
            consonants += 1
        j += 1    
    print("There are {} distinct vowels in the string: {}".format(count,word)) 
    print("There are {} distinct consonants in the string: {}".format(consonants,word))  
#vowel_count()

#Function to check if a word is an anagram of another word
def anagram():
    word1 = " "
    word2 = ""
    while len(word1) != len(word2):
        print("Words must be the same length.")
        word1 = get_word()
        word2 = get_word()

    set1 = set(word1)
    set2 = set(word2)

    if set1 == set2:
        print("{} is an anagram of {}".format(word1,word2))
    else:
        print("{} is NOT an anagram of {}".format(word1,word2))    
#anagram()

#Function to count the occurences of a specific character in a string
def char_count():
    word = get_word()
    letter = input("Input the char to search for: ")
    count = 0

    for i in word:
        if letter == i:
            count += 1
    print("There are {} occurences of {} in {}".format(count,letter,word))
#char_count()    


#Function to count occurences of all chars in a string:
def count_each_char():
    word = get_word()
    temp_word = word

    count = 0
    for i in word:
        for letter in word:
            if i == letter:
                count += 1
                word = word.replace(letter,"")
        if count > 0: 
            print("There are {} occurrences of {} in {}".format(count,i,temp_word)) 
            
        count = 0
#count_each_char() #works but coudl be more efficient!!!

#Function to shift a number of characters in a string:
def string_rotate():

    word = get_word()
    d = int(input("Enter amount of letters to be shifted: "))

    #left shift
    temp = word[:d]
    rotation = word[d::] + temp
    print("Left shifted string is: {}".format(rotation))

    #right shift 
    temp = word[len(word)-d:]
    rotation = temp + word[:len(word)-d]
    print("Right shifted string is: {}".format(rotation))
#string_rotate()

#Function to find numerical digits in a string:
def numerical_digits():

    word = get_word()
    nums = 0
    #first way
    for i in word:
        if i.isnumeric():
            nums += 1
    print("Number of digits in {} is: {}".format(word,nums))   

    #second way
    nums = len(re.findall('[0-9]',word))
    print("Number of digits in {} using re is: {}".format(word,nums))
#numerical_digits()

#Function to find the first character in a string which is not repeated:
def first_unique_char():

    word = get_word()
    unique = "" #used to store unique letters from the input string

    #searches for the char in the part of the string following the occurence of i and breaks if i is not found meaning uniqueness
    for i in word:
        if word.find(i,(word.find(i)+1)) == -1:
            unique = i 
            break

    print("The first not repeated char in {} is: {}".format(word,unique))
#first_unique_char() #needs to be more efficient as O[n^2] here.

#Used to get array input from user
def get_array():
    arr = list(map(int,input("Enter array elements separated by commas: ").split(",")))
    return arr

#Function to find missing int from array of N-1 ints from range [0,N] using summation
def missing_int_array():
    arr = [1,2,3,4,5,7,8,9,10,11] #example array missing 6

    n = len(arr)

    total = (n+2)*(n+1)/2 #as arr is missing a number 
    size = sum(arr)

    missing = int(total - size)

    print("The missing number from {} is: {}".format(arr,missing))
#missing_int_array()

#Function to find matching ints in an array:
def matching_ints():
    arr = get_array()
    arr.sort() #sorts array so matching elements will be contiguous
    duplicates = []
    count = 0 #pair counter 
    i = 0 #index

    #the following traverses the array and compares adjacent elements
    #if they match we append them to the duplicate array and increment the counter then skip
    #using while loop to control the counter unlike in a for loop
    while i < len(arr)-1:
        if arr[i] == arr[i+1]:
            count += 1
            duplicates.append(arr[i])
            i = i + 2
        else:
            i += 1    

    print("The array {} contains {} pairs of matching/duplicated elements which are: {}".format(arr,count,duplicates))
#matching_ints()    

#Function to delete repeated elements in integer array:
def delete_int_array():
    arr = get_array()
    arr.sort()
    duplicates = []
    i = 0
    count = 0
    print(arr)

    #loop traverses array and appends duplicate elements to another array 
    #could potentially be more efficient due to not incrementing index counter when we find a match ???
    while i < len(arr)-1:
        if arr[i] == arr[i+1]:
            duplicates.append(arr[i])
            arr.pop(i)                  #pop removes the element with index i from array
            count += 1
            #i = i + 1
        else:
            i += 1

    print("The {} duplicate elements are: {}".format(count,duplicates))
    print("The new array is: {}".format(arr))   
#delete_int_array()             

#Function to find min/max elements of unsorted array:
def min_max_unsorted_array():
    arr = get_array()
    min = arr[0]
    max = arr[0]

    for i in arr[1::]:
        if i < min:
            min = i
        if i > max:
            max = i    

    print("Minimum: {}, Maximum: {}, array: {}".format(min,max,arr))  
#min_max_unsorted_array()    

#Function to find second largest element of array:
def second_largest_array():
    arr = get_array()
    arr.sort(reverse=True) #sorts array in descending order

    max = arr[0]
    second_max = 0
    #traverse array and look for the first element less than the max which is the leading element as array is sorted.
    for i in arr:
        if i < max:
            second_max = i 
            break
        else:
            second_max = "None"

    print("The array {} has second largest element of: {}".format(arr,second_max))        
#second_largest_array()

#Function to reverse the order of an array:
def reverse_array():
    arr = get_array()
    reverse = []
    print(arr)
    #move backwards through array and append the element to another array
    for i in arr[::-1]:
        reverse.append(i)
        
    print("Reversed array is: {}".format(reverse))    
#reverse_array()

