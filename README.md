# EZCam
A primarily 3D-printed instant camera. Uses the Jollylook Instant Mini Film Development Unit for film processing. Has on/off switch, 3.7V lithium battery power for shutter, motorized servo shutter, photo button on side that holds the shutter open as you hold the button down, hand-cranked roller mechanism, and 100mm focal point lens. Runs on Instax Mini Film. 

I created this project because I was interested in how cameras that print pictures worked. It turns out they actually don't print but spread a layer of photochemical over the undeveloped film. This made it possible to do this mechanically, and thus the 3D printed camera was born. I also wanted to make and bring a project to Undercity that could generate real tangible versions of memories.

Created by Eddy Zhao (@eddyzow) in June/July 2025 for Hack Club's Highway program.

![image](https://github.com/user-attachments/assets/0b458fc2-eeac-4db4-910a-fe3a2cb60d7e)

![image](https://github.com/user-attachments/assets/c108b87a-b6f5-4b5c-b329-f7ff2a862456)

I made this project

## Electronics / Firmware

The entire camera is mechanical except for the shutter. A servo motor with a shutter attachment is wired to the battery power and ground and the signal pin leads to a GPIO pin on a Seeed XIAO ESP32C3. When the servo rotates, it either covers or uncovers the shutter hole. The servo is controlled by the pressing of a pushdown button. Firmware is extremely simple and written in Arduino.

![image](https://github.com/user-attachments/assets/cc95609b-aa9a-48a4-9fe3-5ae96166e7e2)

# Bill of Materials

For a full version, see [this Google Sheet!](https://docs.google.com/spreadsheets/d/1fVYDHt2o4dfsim73XuQ8pmEY-w4QKgZgS4fphIEgDbE/edit?usp=sharing)

| Item Name | Purpose | Item Source | Quantity | Unit Cost (includes taxes) | Cost |
|:---|:---|:---|:---|:---|:---|
| [ELEGOO PLA (Black) 1kg Filament](https://www.amazon.com/ELEGOO-Filament-Dimensional-Accuracy-Printers/dp/B0D421Q2Q2) | need a significant amount of filament to run this | Amazon | 1 | $13.38 | $13.38 |
| [Seeed XIAO ESP32C3](https://www.amazon.com/Seeed-Studio-XIAO-ESP32C3-Microcontroller/dp/B0B94JZ2YF) | Brains controlling the shutter/button | Amazon | 1 | $9.79 | $9.79 |
| [4" Focal Length Glass Lens](https://www.amazon.com/dp/B0CPCQ7NCZ) | Camera lens | Amazon | 1 | $9.07 | $9.07 |
| [SG90 Micro Servo Motor](https://www.amazon.com/WWZMDiB-SG90-Control-Servos-Arduino/dp/B0BKPL2Y21) | Servo motor drives the shutter that covers the lens and blocks out light | Amazon | 1 | $7.43 | $7.43 |
| [3.7V 2200mAh LiPo Battery](https://www.amazon.com/OXWINOU-Battery-103450-Rechargeable-1-Pack/dp/B0CTQ6VBB6) | Rechargeable battery powering the Seeed + motor | Amazon | 1 | $10.60 | $10.60 |
| [Jollylook Instant Mini Film Development Unit](https://www.amazon.com/Jollylook-Instant-Development-compatable-Cameras/dp/B0BYTD4T8K) | Manual development unit for Instax film, heart of project | Amazon (Jollylook) | 1 | $47.81 | $47.81 |
| [Fujifilm INSTAX Instant Film - 60 Pack](https://www.target.com/p/fujifilm-instax-mini-instant-film-value-pack-60ct/-/A-52205707#lnk=sametab) | 3 times the film and only 1.5 times the price. Covers testing and pictures for a trip to Undercity + more | Target | 1 | $42.49 | $42.49 |
| **TOTAL** | | | **7** | | **$140.57** |

BOM Cuts so far:	
- Rocker switch converted to Pushbutton Latch from Pomodoro Timer	
- Button will also be salvaged from Pomodoro Timer	
- Can be conservative on the solder -- probably have enough to last me 	
