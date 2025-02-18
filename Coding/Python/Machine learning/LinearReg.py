#These are library imports thst we bring for the model to use and create the output we expect
import numpy as np
from sklearn.linear_model import LinearRegression
import matplotlib.pyplot as plt

x = np.array([5, 15, 25, 35, 45, 55]).reshape((-1, 1)) #Array of numbers to use as actual data for x and then y
y = np.array([5, 20, 14, 32, 22, 38])

# This portion trains the model
model = LinearRegression() # This line is calling the LinearRegression class from the sklearn.linear_model module
model.fit(x, y) # then we use it to train the model variable we created to fin the best line that connects x and y

#Metrics for the data
r_sq = model.score(x, y)  # R_sq is the coefficient of determination that is calculated by calling a method from the libraries to tell "How well does the line fit the data?"
print(f"coefficient of determination: {r_sq}") #print the result the output system for this and the following prints
print(f"intercept: {model.intercept_}") #this is where the line crosses the y axis like in normal math functions.
print(f"slope: {model.coef_}") #Steepness of the line

#Prediction
y_pred = model.predict(x) #this assigns the value of the prediction against the actual data to y_pred

# This is to grapgh the results with Matplotlib
plt.scatter(x, y, color='blue', label='Actual Data') #We use this to plot the actual data with dots colored blue and labeled in the output as "Actual Data"
plt.scatter(x, y_pred, color='red', label='Predicted') #Same as the predicted one but with the color red and correspondent name
plt.xlabel('x')  #label x axis
plt.ylabel('y') #same with the y axis
plt.legend() #create the legend to display the plot elements
plt.show() #Show it to the display