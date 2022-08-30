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
char_count()            