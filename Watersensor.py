# Water sensor

from sense_hat import SenseHat
import time

sense = SenseHat()

# threshold for humidity detection
humidity_threshold = 80

# led matrix pattern for the letter W for Wet
w_pattern = [
    [0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0],
    [0, 1, 0, 0, 0, 0, 1, 0],
    [0, 0, 1, 0, 0, 1, 0, 0],
    [0, 0, 0, 1, 1, 0, 0, 0],
    [0, 0, 1, 0, 0, 1, 0, 0],
    [0, 1, 0, 0, 0, 0, 1, 0],
    [0, 0, 0, 0, 0, 0, 0, 0]
]

while True:
    humidity = sense.get_humidity()
    if humidity > humidity_threshold:
        sense.set_pixels(w_pattern)
    else:
        sense.clear()
    time.sleep(20)