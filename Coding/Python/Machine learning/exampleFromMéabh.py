#These are library imports thst we bring for the model to use and create the output we expect
import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression

# This section generates the data we use to train the model 
x = np.random.rand(6, 1) # 6 random numbers (between 0 and 1)
y = np.random.rand(6, 1) # more random numbers

# This portion trains the model
model = LinearRegression() # This line is calling the LinearRegression class from the sklearn.linear_model module
model.fit(x, y) # then we use it to train the model variable we created to fin the best line that connects x and y

# Metrics
r_sq = model.score(x, y) # R_sq is the coefficient of determination that is calculated by calling a method from the libraries to tell "How well does the line fit the data?"
print(f"Coefficient of determination: {r_sq}") #print the result the output system.
print(f"Intercept: {model.intercept_}") #this is where the line crosses the y axis like in normal math functions.
print(f"Slope: {model.coef_}") #Steepness of the linef

# Predictions to evaluate against the actual data
y_pred = model.predict(x) # Uses the line to guess y for each x

# This is to grapgh the results with Matplotlib
plt.scatter(x, y, color='blue', label='Actual Data') #We use this to plot the actual data with dots colored blue and labeled in the output as "Actual Data"
plt.scatter(x, y_pred, color='red', label='Predicted') #Same as the predicted one but with the color red and correspondent name
plt.xlabel('x')  #label x axis
plt.ylabel('y') #same with the y axis
plt.legend() #create the legend to display the plot elements
plt.show() #Show it to the display