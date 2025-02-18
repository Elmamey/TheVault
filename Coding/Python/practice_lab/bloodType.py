# This program is to help educate patients at a local clinic about blood type compatibility

# Requirements:

# • Use at least one list to store blood types or compatibility data.
# • Use loops for user interaction until they choose to exit.
# • Use if-statements to handle user choices and compatibility logic.
# • Use functions to organize code into reusable blocks.
# • Provide clear and user-friendly output.

# Author: Antonio Cruel ID: 75203 Email: 75203@student.dorset-college.ie

def main (): #define the main function
        
        choice = 0
        end = False #set boolean variable to check if the loop needs to end

        blood_type_receive= { #use dictionary to use bloodtype as a key to access the compatibility to receive
        "A+": ["A+", "A-", "O+", "O-"],
        "A-": ["A-", "O-"],
        "B+": ["B+", "B-", "O+", "O-"],
        "B-": ["B-", "O-"],
        "AB+": ["AB+", "AB-", "A+", "A-", "B+", "B-", "O+", "O-"],
        "AB-": ["AB-", "A-", "B-", "O-"],
        "O+": ["O+", "O-"],
        "O-": ["O-"]
        }
        
        blood_type_give = { #same to give
        "A+": ["A+", "AB+"],
        "A-": ["A+", "A-", "AB+", "AB-"],
        "B+": ["B+", "AB+"],
        "B-": ["B+", "B-", "AB+", "AB-"],
        "AB+": ["AB+"],
        "AB-": ["AB+", "AB-"],
        "O+": ["A+", "B+", "AB+", "O+"],
        "O-": ["A+", "A-", "B+", "B-", "AB+", "AB-", "O+", "O-"]
        }
        

        #A+ gives: A+ AB+, receives: A+, A-, O+, O-
        #O+ gives: O+, A+, B+, AB+, receives: O+, O-
        #B+ gives: B+, AB+, receives: B+, B-, O+, O-
        #AB+ gives: AB+ receives: (everyone): A+, O+, B+, AB+, A-, O, B-, AB- 
        #A- gives: A+, A-, AB+, AB- receives: A-, O-
        #O- gives: everyone, receives: O-
        #B- gives: all Bs and ABs, receives: B-, O-
        #AB- gives: AB-, AB+, receives: AB-, A-, B-, O-

        print("Welcome to the Blood compatibility checker!") #introduction

        while not end: #initiate while loop
            
            choice = int(input("\nPlease choose an option by entering a number:\n"
                   "1. Check who can donate to your blood type.\n"
                   "2. Check who you can donate blood to.\n"
                   "3. Exit the program.\n"))       #main print selection     
            
            if choice not in (1,2,3): #invalid input checker
                print("Please enter a valid character\n")
                
            elif choice == 1: #first chouice
                
                blood_type = input("Please enter your blood type: ").strip().upper()
                
                if blood_type in (blood_type_receive): #check the blood type entered in the receive dictionary to retrieve compatibility
                    
                    compatible_blood = blood_type_receive[blood_type] #place the value inside compatible blood variable
                    
                    print(f"\nBlood type {blood_type} can receive blood from:\n") #print the results
                    for receive in compatible_blood: #iterate through the multiple compatibilities
                        print(f"{receive} blood") #print the result
                else:
                    print("\nPlease enter a valid blood type\n") #input error checker
                    
                again = input("Do you want to try again? (yes/no): ").lower() #retry prompt
                if again != 'yes':
                    print("\nThanks for using the blood compatibility checker!\n")
                    break
                
                #receive section over. Start of give section, choice 2.
                
                
            elif choice == 2: #the choice two is the exact same as 1, except that instead of receive, we replace it for give.
                
                blood_type = input("Please enter your blood type: ").strip().upper()
                
                if blood_type in (blood_type_give):
                    
                    compatible_blood = blood_type_give[blood_type]
                    
                    print(f"\nBlood type {blood_type} can give blood to: \n")
                    
                    for give in compatible_blood:
                        print(f"{give} blood")
                else:
                    
                    print("Please enter a valid blood type\n")
                
                again = input("Do you want to try again? (yes/no): ").lower()
                
                if again != 'yes':
                    print("\nThanks for using the blood compatibility checker!\n")
                    break
            
            elif choice == 3: #exit option
                print("Thanks for using the blood compatibility checker!\n")
                break #break from the loop to end program
            else:
                print("Please enter a valid number\n") #input error checker
    #end while loop   
        
if __name__ == "__main__": #call the main function
    main()