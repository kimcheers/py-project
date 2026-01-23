from flask import Flask, render_template, request, redirect

app = Flask(__name__)

members = []

@app.route('/')
def home():
    return render_template('index.html')

@app.route('/signup')
def sign_page():
    return render_template('signup.html')

@app.route('/signup',methods=['POST'])
def sign():
    user = request.form.get("username")
    pw = request.form.get("password")
    pw_cheak = request.form.get("password-cheak")

    if(pw == pw_cheak):
    
        member = {
            "username" : user,
            "password" : pw
        }

        members.append(member)
    else:
        print("잘못된 비밀번호")

    print(f'현재 회원: {members}')
    return render_template('index.html')

@app.route('/login')
def login():
    user = request.form.get("username")
    pw = request.form.get("password")

    for member in members:
        if member['username'] == user and member['password'] == pw:
            print('hello')

    return render_template('index.html')

@app.route('/Hello')
def hello():
    return render_template('hello.html')

if __name__ == "__main__":
    app.run(debug=True)
    