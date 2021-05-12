from django.http import HttpResponse
from django.shortcuts import render,redirect
from . models import *
from django.contrib.auth.models import User,auth
from django.contrib import messages

def home(request):

    posts = cards.objects.all()
    return render(request,'home.html',{'card_obj':posts})


def signup(request):
    
    if request.method=='POST':
        name=request.POST['name']
        email=request.POST['email']
        password=request.POST['pass']
        cpassword=request.POST['re_pass']

        if password==cpassword:
            if User.objects.filter(username=name).exists():
                messages.info(request,"username already exits")
                return render(request,'signup.html')

            else:
                user = User.objects.create_user(username=name,email=email,password=password)
                user.save()
                return redirect('login')
        else:
            messages.info(request,"password does not matched")
            return render(request,'signup.html')
    else:
        return render(request,'signup.html')        

def login(request):

    if request.method=="POST":
        name=request.POST['name']
        password=request.POST['pass']

        user=auth.authenticate(username=name,password=password)

        if user is not None:
            auth.login(request,user)
            return redirect("/")
        else:
            messages.info(request,"Invalid Username Or Password")
            return render(request,'login.html')   

    else:
        return render(request,'login.html')

def logout(request):
       auth.logout(request)
       return redirect('/')

def showpost(request,title):

    post=cards.objects.filter(title=title).first()
    
    if request.user.is_authenticated:
        return render(request,'showpost.html',{'post':post})
    else:
        return redirect('/')
