# Ninja-Bot
A voice controlled rover that operates on jutsu commands from Naruto series


## Inspiration
The theme of the hackathon being related to cartoons and anime helped us to think of several project ideas. Naruto, which is a very well-known manga and anime, was the major inspiration behind building this particular project. Naruto is a very memorable anime series from our childhood, and working on the Ninja Bot project has resurfaced a sense of nostalgia as we visited several aspects of the anime over again.

## What it does
Ninja Bot is basically a voice command following a 4WD rover that works on jutsu commands from the Naruto series and the rover also avoids obstacles. One has to open an App, spell the jutsu, and the rover will act accordingly. The jutsu includes "Flying thunder", "Shunshin", "Body flicker", "Infinite tsukuyomi", 
"Rasengan".
These can be interpreted as, move forward, move right, move left, stop, lights toggle, circular motion. There's a link to the video to watch it in action.

## How we built it
Ninja Bot was built using 4 300 RPM BO motors, an L293d motor driver, a Bluetooth module to receive the voice commands, and an Arduino Uno, which is the main controller. With that, to power the rover, we used 2 3.7v Li-On batteries. Finally, an app was installed on your android phone, by using Google's speech recognition, the app converts the speech to text and sends it as a string to the Bluetooth module. And finally, the chassis was built using an acrylic board.

## Challenges we ran into
Setting up the application to send the commands was a bit tricky, there is a lag between the spelled command and the received string, so it needs some practice to spell at the correct time. Sometimes the speech recognition misinterprets, so we have to trick the program to bypass the misspells. Lastly, we were having some troubles with the 5v input port of the Arduino, it was not getting powered up. We tackled it by moving the connections to the 5v port of the ICSP headers.

## Accomplishments that we're proud of
Receiving the speech in form of strings to the Arduino. Change the name of the Bluetooth HC05 to Ninja Bot. And finally watching the rover to move on our spells was the best moment.

## What we learned
Learned a bit about Google's speech recognition. Some string manipulation and application development using MIT app inventor.

## What's next for Ninja Bot
We would like to incorporate more actions through voice-command in Ninja Bot in the future. We would also like to explore a different way to send the voice signals through further experimentation. Ninja Bot has several other potentials that can be worked on in the future. 
