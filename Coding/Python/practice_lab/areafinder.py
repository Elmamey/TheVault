#program to calculate volume and surface area of a box and the area of a circle
#Antonio Cruel

import math

def main():
    b_height = 0.0
    b_length = 0.0
    b_width = 0.0
    radius = 0.0
    repeat = True

    print("Hello! Welcome to the area calculator")
    print("Would you like to calculate the volume/surface area of a box, or the area of a circle?")
    decision = input("please select B (for Box) or C (For circle): ").strip().upper()

    while repeat:
        if decision == 'B':
            repeat = False
            #get the dimensions to calculate tha volume and surface of the box
            b_height = float(input("Please enter the box height!: "))
            b_length = float(input("Please enter the box length!: "))
            b_width = float(input("Thanks! Now finally enter the width: "))

            #calculate the volume and surface area

            volume = b_height * b_length * b_width
            surface_area = 2 * (b_height * b_length + b_height * b_width + b_length * b_width)

            print(f"Perfect! the volume of your box is {volume:.2f} and the surface area is {surface_area:.2f}")
            
        elif decision == 'C':
            repeat = False

            #get radius for the circle

            radius = float(input("Please Enter the circle radius"))

            #calculate the area of the circle
            area = math.pi * (radius ** 2)

            print(f"Perfect! the area of your circle is {area:.2f}")
        
        else: 
            #prompt again for valid selection if input is incorrect.
            print("Please enter a valid character: B for box or C for circle.")
            decision = input("B or C? ").strip().upper()

#call the main function
if __name__ == "__main__":
    main()
    

