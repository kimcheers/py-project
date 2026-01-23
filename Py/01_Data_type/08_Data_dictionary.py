user = {
    'username' : 'hong',
    'email' : 'hong@test.com',
    'age' : 25,
    'city' : 'seoul'
}

print("default data:",user)

# 값조회
print(user.keys())
print(user.values())

# get
print(user.get('email'))
print(user.get('email567','없음'))

# remove
romoved_vaule = user.pop('email')
print('삭제된 vaule:', romoved_vaule)
print("pop후:",user)

# rm-rf user
clear = user.clear()
print('all delate:',user)