# This program calculates the volume, surface area of a cube/box and the area of a circle
# Author: Antonio Cruel

import math

def main():
    # Initialize variables
    b_height = 0.0
    b_length = 0.0
    b_width = 0.0
    radius = 0.0
    decision = ' '
    repeat = True

    print("Hello! Welcome to the area calculator.")
    print("Would you like to calculate the volume/surface area of a box or calculate the area of a circle?")
    decision = input("Please select B (box) or C (circle): ").strip()

    while repeat:
        if decision == 'B' or decision == 'b':
            repeat = False
            # Get box dimensions
            b_height = float(input("Okay! Please enter the box height: "))
            b_length = float(input("Thanks, now enter the length: "))
            b_width = float(input("Thanks! Now finally enter the width: "))

            # Calculate volume and surface area
            volume = b_height * b_length * b_width
            surface_area = 6.0 * math.pow(b_height, 2.0)  #a box can a cube so asumming it's a cube

            # Display results
            print(f"Perfect, the volume of your box is {volume} and the surface area is {surface_area}")

        elif decision == 'C' or decision == 'c':
            repeat = False
            # Get radius for circle
            radius = float(input("Okay! Please enter the circle's radius: "))

            # Calculate area
            area = 3.14 * math.pow(radius, 2.0)

            # Display result
            print(f"Perfect! The area of your circle is {area}")

        else:
            # Handle invalid input
            print("Please enter a valid character (B or C).")
            decision = input("B (box) or C (circle)? ").strip()

# Run the main function
if __name__ == "__main__":
    main()
