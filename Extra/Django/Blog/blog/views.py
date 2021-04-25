from django.shortcuts import render
from django.http import HttpResponse,HttpRequest
from django.contrib.auth.models import User
# Create your views here.
def home(request):
    return HttpResponse("welcom home")

def login(request):
    return render(request,'blog/login.html')

def signup(request):
    return render(request,'blog/signup.html')

def signupauth(request):
    if(request.method=='POST'):
        username=request.POST['username']
        email=request.POST['email']
        password=request.POST['password']
        cpassword=request.POST['cpassword']

    print(request.path)
    
    if password==cpassword:
        if User.objects.filter(username=username).exists():
            return HttpResponse("username already exist")
        
        elif User.objects.filter(email=email).exists():
            return HttpResponse("email q already exist")
        
        else:
            user= User.objects.create_user(username,email,password)
            user.save()
            return render(request,'blog/login.html')
    else:
        return HttpResponse("password does not matched .....")
    