import paho.mqtt.client as mqtt


def on_publish(mosq, userdata, mid):
    mosq.disconnect()

#publish the photo to all the client connected to the localhost server and with the Topic = image
client = mqtt.Client()
client.connect("localhost", 1883, 60)
client.on_publish = on_publish

#the image is transformed to an array and published.
f=open("boume.jpg", "rb") #3.7kiB in same folder
fileContent = f.read()
byteArr = bytearray(fileContent)
client.publish("image",byteArr,0)

client.loop_forever()
