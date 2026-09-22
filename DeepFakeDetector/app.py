from flask import Flask, request, render_template_string

app = Flask(__name__)

HTML = """
<html><body style="text-align:center; margin-top:50px; font-family:sans-serif">
<h1>DeepFake Detector</h1>
<form method=post enctype=multipart/form-data>
<input type=file name=file><br><br>
<input type=submit value=Upload>
</form>
{% if result %}
<h2>{{result}}</h2>
{% endif %}
</body></html>
"""

@app.route('/', methods=['GET', 'POST'])
def index():
    result = None
    if request.method == 'POST':
        f = request.files.get('file')
        if f:
            result = f"File {f.filename} Received - Demo Working!"
    return render_template_string(HTML, result=result)

if __name__ == '__main__':
    app.run(debug=True)





