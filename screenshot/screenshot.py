import pyautogui
import datetime

i = 0
while True:
    # Get the current timestamp
    i = i + 1
    timestamp = datetime.datetime.now().strftime('%Y-%m-%d_%H-%M-%S'+ ' ' + str(i))

    # Capture the screen
    screenshot = pyautogui.screenshot()
    
    # Save the screenshot
    screenshot.save(f"screenshot_{timestamp}.png")

    print(f"Screenshot saved as screenshot_{timestamp}.png")