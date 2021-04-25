from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.


def home(request):
    return HttpResponse("home")

def customer(request):
    return render(request,'account/customer.html')

def dashboard(request):
    return render(request,'account/dashboard.html')

def product(request):
    return render(request,'account/product.html')

def login(request):
    return render(request,'account/login.html')
