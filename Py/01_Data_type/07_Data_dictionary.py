user = { 
    # key : vaule
    "name" : "길동",
    "age" : 25, 
    "city" : "Seoul"
}

print(user["name"]) # No key == ERROR
print(user.get('names', 'error')) # No Key == None 

# Add key-vaule
user['hobby'] = 'soccer'

print(user)

# vaule 변경
user['age'] = 26
print(user)

# removed vaule
romoved_vaule = user.pop('hobby')
print('pop 후:', user.get('hobby'))