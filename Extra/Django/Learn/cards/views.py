from django.http import HttpResponse
from django.shortcuts import render
from . models import *

def home(request):

    obj_list = cards.objects.all()
    return render(request,'home.html',{'card_obj':obj_list})

def signup(request):
    return render(request,'signup.html')

def login(request):
    return render(request,'login.html')
