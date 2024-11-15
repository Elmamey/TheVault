#Write a Python program for a retail store that calculates a discount based on each customer’s age and
#  the total amount spent on a product. The program should run in a loop to process multiple customers, 
# and only stop when the user chooses to exit.

#The store offers the following discounts:

#1.	Age-based Discount: If the customer is below 18 years old, they get a 10% discount on the product price.
#2.	Promotion: If the total price after the age-based discount is over €100, the customer
#  receives an additional €10 discount.

#Requirements:

#1.	Use a while loop to allow multiple customer entries.
#2.	Use input() to get the customer’s age and product price.
#3.	Apply an if statement to determine eligibility for each discount.
#4.	Display the final price and any discounts applied.
#5.	After processing each customer, ask if the user wants to enter details for another customer. 
# Exit if the answer is "no."

def main (): #define the main function
        
        print("Hello! Welcome to my store, at the till this program will calculate your eligibility for discounts!") #introduce the user to the program
        end = False #set boolean variable to check if the loop needs to end

        

        while not end: #initiate while loop
                age = int(input("Please enter your age: "))
                if age >= 18:
                        print("Thank you! Unfortunately you are not elegible for our store discount ")
                        price = float(input("Please enter the price of the item you want to purchase (Euro): "))
                        if price > 100: #check if the amount purchased is bigger than 100 for the extra discount
                                end = True #once finished set the condition to True to end the loop and check if the user wants to replay at the end
                                print("Awesome! since your purchase is over €100 you earn a €10 discount!! ")
                                discount = price * 0.1
                                final_price = price - discount - 10 #added discount
                                print(f"Your purchase is a total of {final_price:.2f} with our discount! Thank you for shopping with us (: ")
                        else:
                                end = True
                                print(f"Your purchase is a total of {price:.2f}. Remember there is an additional €10 discount if your purchase is over €100! Thank you for shopping with us! ")
                        
                elif age < 18:
                        price = float(input("Congratulation! you apply for a 10 percent dicsount in your purchase! No please enter the price of the item you want to purchase: "))
                        if price > 100:
                                end = True
                                print("Awesome! since your purchase is over €100 you earn an extra €10 discount!!")
                                discount = price * 0.1 
                                final_price = price - discount - 10
                                print(f"Your purchase is a total of {final_price:.2f} with our discount! Thank you for shopping with us (:")
                        else:
                                end = True
                                discount = price * 0.1
                                final_price = price - discount
                                print(f"Your purchase is a total of {final_price:.2f} with our discount! Remember there is an additional €10 discount if your purchase is over €100! Thank you for shopping with us (:")
                else:
                        print("Please enter a valid input: ")
                        
                decision = input("Would you like to enter another customer? Enter Yes or N: ").strip().upper() #ask the user to play again and use strip and upper to get rid of the case sensitive issue
                if decision == 'Y':
                        end = False #restart program
                else:
                        print("Please come again!")
                        end = True #end program
    #end while loop   

if __name__ == "__main__": #call the main function
    main()