from flask import Flask, render_template, request, redirect

app = Flask(__name__)

numbers = []
total_score = 0
max_score = 0
min_score = 0

@app.route('/')
def home():
    return render_template('index.html')

@app.route('/result')
def number():
    return render_template('result.html', total_score=total_score, max_score=max_score, min_score=min_score)

@app.route('/result', methods=['POST'])
def sign():
    global  total_score,max_score, min_score

    #total_score = 0
    ko = int(request.form.get("ko", 0))
    math = int(request.form.get("math", 0))
    eng = int(request.form.get("eng", 0))
    
    current_total = ko + math + eng
    current_max = max(ko, math, eng)
    current_min = min(ko, math, eng)
    
    total_score = current_total
    if current_max > max_score:
        max_score = current_max
    if min_score == 0 or current_min < min_score:
        min_score = current_min
        
    score = {
        'korean': ko,
        'math': math,
        'english': eng,
        'sum': current_total
    }
    numbers.append(score)
    
    return redirect('/result')

if __name__ == "__main__":
    app.run(debug=True)
    