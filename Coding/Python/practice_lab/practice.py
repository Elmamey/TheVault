#this program halves even numbers and multiplies them by 3 and adds 1 if they are odd, until it reaches 1.
#author Antonio Cruel

def main ():

    num = 0
    steps= 0
    end = False # boolean to end the condition when using the loop

    print("Hello! Please enter any number greater than 1. No matter what number, I will divide or modify it until it reaches 1")

    #input validation to make sure the user enters a number that is greater than 1.

    while num < 2:
        try: 
            num = int(input("Please enter a  number:"))
            if num <1:
                print("Sorry the number has to be greater than 1. Try again")

            elif num == 1:
                print(f"The value of your number is {num}")
                end = True
                break
        except ValueError:
            print("Please enter a valid interger.")
    
#main calculation loop

    while not end:
        if num == 1:
            end = True #ending condition checked in every iteration.
            break
        elif num % 2 == 0: #if the number is even checker
            if num == 2:
                num //= 2
                steps += 1
                break
            else:
                num //=2
                print(f"The next value is {num}")
                steps += 1
        else: #if the number is odd.
            num = num * 3 + 1
            print(f"The next value is {num}")
            steps += 1

    print (f"the final value of your number is {num} and the number of steps is {steps}")

    #call the main function

if __name__ == "__main__":
        main()