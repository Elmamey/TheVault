
// JavaScript code to say "Hello from JavaScript!" for fun
console.log("Hello from JavaScript!");

// Add an event listener to check when the user scrolls
// This is to make the footer appear when the user is at the bottom of the page
// and disappear when it's not.
window.addEventListener("scroll", function() {
    var footer = document.getElementById("footer");
    if (window.scrollY + window.innerHeight >= document.documentElement.scrollHeight) {
        footer.style.display = "block";
    } else {
        footer.style.display = "none";
    }
});
//END


// Function to enable dark mode
function darkMode() {
    var element = document.body;
    var content = document.getElementById("DarkModetext");
    element.className = "dark-mode";
    content.innerText = "Dark Mode is ON";
    let imageMode = document.getElementById("mode");
}
//END

// Function to enable light mode
function lightMode() {
    var element = document.body;
    var content = document.getElementById("DarkModetext");
    element.className = "light-mode";
    content.innerText = "Dark Mode is OFF";
    let imageMode = document.getElementById("mode");
}
//END

// Select the button element
const scrollButton = document.getElementById('scrollButton');

// Select the chart container element
const chartContainer = document.querySelector('.chart-container');

// Define the offset value (in pixels) to scroll above the chart
const offset = 20; // Adjust this value as needed

// Add event listener to the button
scrollButton.addEventListener('click', () => {
    // Calculate the target scroll position by subtracting the offset
    const targetScrollPosition = chartContainer.offsetTop - offset;

    // Scroll to the adjusted position with smooth behavior
    window.scrollTo({
        top: targetScrollPosition,
        behavior: 'smooth'
    });
});



//pie chart script
document.addEventListener("DOMContentLoaded", function () {
    var ctx = document.getElementById('skillsPieChart').getContext('2d');

    var data = {
        datasets: [{
            data: [40, 60], // Adjust these percentages based on your skills/hobbies
            backgroundColor: ['#0d1d25', '#5fc1c2'],
        }],
        labels: ['Design :D', 'Coding'] // Labels for the pie chart items
    };

    var options = {
        responsive: true,
        maintainAspectRatio: false,
        tooltips: {
            callbacks: {
                label: function (tooltipItem, data) {
                    var dataset = data.datasets[tooltipItem.datasetIndex];
                    var total = dataset.data.reduce(function (previousValue, currentValue, currentIndex, array) {
                        return previousValue + currentValue;
                    });
                    var currentValue = dataset.data[tooltipItem.index];
                    var percentage = Math.floor(((currentValue / total) * 100) + 0.5);
                    return data.labels[tooltipItem.index] + ': ' + percentage + '%';
                }
            }
        }
    };

    var myPieChart = new Chart(ctx, {
        type: 'pie',
        data: data,
        options: options
    });
});

//END
