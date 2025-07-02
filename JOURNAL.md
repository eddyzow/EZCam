---
title: "EZCam"
author: "Eddy Zhao (@eddyzow)"
description: "A 3D-printed disposable camera that uses the Jollylook Instant Mini Film Development Unit for film processing. Runs on Instax Mini Film."
created_at: "2025-06-30"
---

*Total hours spent: 15* | *Date started: 30 June 2025*

# EZCam
_to capture life's moments_

## entry #6 - 7/2

rapid firing these very very short entries to show my progress today! 
here's a pic of the main body starting to come together. i need to add the diaphragm/shutter, lens, and motor mechanism.

![image](https://github.com/user-attachments/assets/bc58216c-140a-4120-b2b5-b5cd2d13681c)

## entry #5 - 7/2

case door complete! tight tolerance and a screw mount while also allowing clearance for the crank
![image](https://github.com/user-attachments/assets/56ff43bd-2809-435f-9cdc-c082c5a21b98)

_hours spent during session: 2_

## entry #4 - 7/2

mostly finished back case -- this holds the jollylook and film. i now need to make a door for the case, then i will move on to the diaphragm. the goal is to add as much polish as possible!

![image](https://github.com/user-attachments/assets/74369a97-4419-46ff-bde0-75f5bb57c86b)

_hours spent during session: 1_

## entry #3 - 7/2

case work today!

![image](https://github.com/user-attachments/assets/f63bc293-cef6-42b1-b46c-5b7f072ef681)

the jollylook can now easily slide into the case without moving around. tomorrow i'll design a light-proof door that seals light away from the interior of the camera. then I'll begin the next stage of the camera: the diaphragm, shutter, and lens.

i'm going to throw a servo motor in the diaphragm where through some mechanism (not determined yet) the shutter will be controlled open and closed. i think the best device for this is a push-pull solenoid, which basically pushes a slug of metal up when voltage is applied and back down when voltage is removed. this [Adafruit push-pull solenoid](https://www.adafruit.com/product/2776) seems like a great product and i'll probably use it in my design! 

_hours spent during session: 3_

## entry #2 - 7/1

i spent many hours today doing more research into the camera.

it seems like the jollylook module has little to no documentation aside from a CAD model that will prove very useful, though it's an STL so there are no dimensions. to make things worse, mounting holes are not in the 3D model so i also don't know how to mount it at all.

i spent many hours trying to create a lightproof case, but it seems like it's too difficult without a physical model of the jollylook as I can't get my parts until I submit the design. i'll be using [Josh Gladstone](https://www.youtube.com/watch?v=n-TAC5FUcVg)'s case design as a result, which is already perfectly aligned to support the Instax Mini. why recreate stuff that already exists? anyways, another huge shoutout to Josh Gladstone, who has been the greatest inspiration for this project. I don't want this to be a full copy of his project, though, so I'm just going to try to make as many of my own parts as possible.

one thing I should look at is how I'm going to wire the battery/microcontroller/servo for the shutter. 

![image](https://github.com/user-attachments/assets/ff246014-a73b-46e4-bcf0-32b1e71c05ed)
![image](https://github.com/user-attachments/assets/5b59abe3-bce5-453a-be8d-6ff7ad3e1b30)

_hours spent during session: 5_

## entry #1 - 6/30

it's time to begin a new project! this is a disposable camera that is mostly 3D printed except for a few important parts (lens, development unit, film, etc). 

i had created this project a few weeks before but scrapped it since I thought it would be way too hard to 3D print a proper development unit. good thing that there are places that sell individual freestanding development units! i've done some research today into the project and deemed that it's definitely doable as long as i lock in.

i don't think this is breaking the rules because 3D print probably wouldn't be able to cleanly process the film anyways, but there is one guy who managed to do it [Toast](https://www.youtube.com/watch?v=dPTo-G7txo4) and [Josh Gladstone](https://www.youtube.com/watch?v=n-TAC5FUcVg) have created excellent videos that show them making disposable cameras with 3D printed parts. of these, Josh Gladstone's design has the Jollylook development unit and is the primary inspiration for my project.

i would like to build off Josh Gladstone's design by motorizing the shutter and adding some small quality of life improvements (shutter button, timer setting, etc). i think i may go for 10 Highway points for this project since it's so incredibly complex and pulling it off would be the greatest thing I've done since my electric scooter.

signing off for now! i'll do some tinkering for now and hopefully grind out the whole day to make the design tomorrow.

_hours spent during session: 2_
