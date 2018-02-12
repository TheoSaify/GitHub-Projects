#!/bin/bash

DATE=$(date +"%Y-%m-%d_%H%M")

#Capture Photo from the Camera and save it on the Desktop with the  current date as Name of the photo
raspistill -o /home/pi/Desktop/$DATE.jpg

#send pic to remote location with username user and ip A.A.A.A
scp $DATE.jpg mosquitto@A.A.A.A:/home/user/Desktop/MQTT 