from array import array
from operator import index
from pickle import TRUE
from string import punctuation

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

def special_chars():
    #removes special characters from a string 
    #use .replace()
    word = get_word()
    initial_word = word
    special =  set(punctuation) #all ASCII chars which are considered punctuation: !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~.
    new_word = ""
    removed = ""
    for i in word:
        if i in special:
            removed = removed + i #append special char to the removed string
            word.replace(i,"") #unsure if this works ???
        else:
            new_word = new_word + i # saves the latest word minus the special char
  
    print("Initial string: {}, removed chars: {}, final string: {}".format(initial_word,removed,new_word))
#special_chars()

def string_swap():
    #swaps two strings NO 3rd variable !!!
    #follow method for two ints x and y,
    #x = x+y, y = x-y, x = x-y ????
    #use [:] and extract the strings from that
    
    word1 = get_word()
    word2 = get_word()
    print("Initial ordered pair: ({},{})".format(word1,word2))

    word1 = word1 + word2
    word2 = word1[0:(len(word1)-len(word2))] #this allows us to take word1 from the string word1+word2 using len and start/end points
    word1 = word1[len(word2):] #word2 is now original word1 from above, so len(word2) skips word1 in word1+word2 leaving us with word2

    print("Final ordered pair: ({},{})".format(word1,word2))
#string_swap()

#BELOW IS CLASS FOR LINKED LIST AND ITS NODES
class Linkedlist():
    def __init__(self, nodes=None):
        self.head = None
        if nodes is not None:
            node = Node(data=nodes.pop(0)) 
            self.head = node
            for elem in nodes:
                node.next = Node(data=elem)
                node = node.next

    def __repr__(self):
        node = self.head
        nodes = []
        while node is not None:
            nodes.append(node.data)
            node = node.next
        nodes.append("None")
        return " -> ".join(nodes)     

    def __iter__(self): #used to print each node
        node = self.head
        while node is not None:
            yield node
            node = node.next   

    def add_first(self,node): #adds to node to start of the linked list
        node.next = self.head
        self.head = node      

    def add_last(self,node): #adds node to end of list
        if self.head == None:
            self.head = node
            return
        for current_node in self:
            pass
        current_node.next = node     

    def length(self): #gets the length/size of the linked list
        size = 0
        for node in self:
            size += 1
        return size    
               
    def search(self,key):
        #will search the LL for a specific value.
        current = self.head
        while current:
            if current.data == key:
                return 1
            else: 
                current = current.next 
        return -1      

    def get_node_at_index(self,index):
        #will return the info of a node at given index in the list

        current = self.head
        count = 0
        print(count,index)
        while current:
            if index == count:
                return current.data,current.next
            
            current = current.next
            count += 1
        return -1        



class Node():
    def __init__(self,data):
        self.data = data
        self.next = None

    def __repr__(self):
        return self.data


def Linked_List_practice(): #practice with linked lists 
    data = ['a','b','c','d','e']
    LL = Linkedlist(data)
    print(LL.__repr__())
    for node in LL:
        print(node)

    LL.add_first(Node("z"))
    print(LL.__repr__())   
    LL.add_last(Node("ZZ")) 
    print(LL.__repr__())
#Linked_List_practice()

def middle_linked_list(): 
    #finds the middle element or pair of a linked list depending on odd/even length
    data = ['a','b','c','d','e','f','g','h','i','j','k','l','m']
    LL = Linkedlist(data)
    length = LL.length()
    print("List: {}, Length is: {}".format(LL.__repr__(),length))
    
    
    current_node = LL.head
    if length % 2 != 0:
        length = length // 2
        while length > 0:
            length -= 1
            current_node = current_node.next 
        print("List is of odd length, middle element is: {}".format(current_node))    
    else:
        length = length // 2
        while length > 1:
            length -= 1
            current_node = current_node.next
        print("List is of even length, middle pair is: ({},{})".format(current_node,current_node.next))    
#middle_linked_list()

def reverse_linked_list():
    #creates new linked list with the elements reversed
    #could possibly do without the extra linked list ???
    data = ['a','b','c','d','e','f','g','h','i','j','k','l','m']
    LL = Linkedlist(data)
    ReverseLL = Linkedlist(None)
    
    node = LL.head
    while node is not None:
        ReverseLL.add_first(Node(node.data))
        node = node.next
    print(LL.__repr__())    
    print(ReverseLL.__repr__())    
#reverse_linked_list()    

def search_LL():
    #used to search a linked list for a specific value 
    data = ['a','b','c','d','e','f','g','h','i','j','k','l','m']
    LL = Linkedlist(data)
    print(LL.__repr__())
    key = input("Enter the value would you like to search for: ")

    found = LL.search(key)

    if found == 1:
        print("{} is in the list.".format(key))
    else:
        print("{} is not in the list.".format(key))    
#search_LL()    

def get_node_at_index():
    #will retreive the node (data and next) at a specified index
    data = ['a','b','c','d','e','f','g','h','i','j','k','l','m']
    LL = Linkedlist(data)
    print(LL.__repr__())
    index = input("Enter the index you like to select: ")

    found = LL.get_node_at_index(int(index)) #returns a pair

    if found == -1:
        print("Index out of range.")
    else: 
        print("Node at index {} has value {} and next of {}".format(index,found[0],found[1]))    
#get_node_at_index()

