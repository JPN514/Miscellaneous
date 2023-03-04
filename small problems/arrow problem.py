#Program for an arrow problem
#How many arrows in a given sequence S need to be changed to ensure all arrows face the same direction? (minimium required changes)
#E.g. S="v<>>" would need 2 changes so all arrows are ">"

# you can write to stdout for debugging purposes, e.g.
# print("this is a debug message")

def get_Input():
    #Gets the input of arrows
    S = str(input("Enter your string of characters (<,>,v,^): "))

    return S

def solution(S):
    #Establishes the number of arrows required for all to face same direction
    #Note this is the minimum amount of changes 
    direction = []
    for i in range(0,4):
        direction.append(0)

    #counts the arrows for each possible direction
    for arrow in S: 
        if arrow == "^":
            direction[0] += 1
        elif arrow == "<":
            direction[1] += 1
        elif arrow == ">":
            direction[2] += 1   
        elif arrow == "v":
            direction[3] += 1

    #We now sort the direction list to get the modal direction
    direction.sort(reverse=True)
    changes = len(S) - direction[0] #the length of the string minus the modal direction gives the minimum amount of changes 
    return changes

def print_result(S,changes):
    #Prints the solution
    print("The string of arrows {}, requires {} changes for all arrows to face the same direction.".format(S,changes))

    pass

def main():
    S = get_Input()
    changes = solution(S)
    print_result(S,changes)
    pass

main()
