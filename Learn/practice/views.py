from django.http import HttpResponse

def home(request):
    return HttpResponse("home <br><br><a href='http://127.0.0.1:8000/rpunc'><button>remove punc</button></a> <a href='http://127.0.0.1:8000/capfirst'><button>captial first</button></a> <a href='http://127.0.0.1:8000/newlinerm'><button>remove newline</button></a> <a href='http://127.0.0.1:8000/charcount'><button>char count</button></a>")
def rpunc(request):
    return HttpResponse("remove punc <br><br><a href='http://127.0.0.1:8000'><button>Back</button></a>")
def capfirst(request):
    return HttpResponse("capfirst <br><br><a href='http://127.0.0.1:8000'><button>Back</button></a>")
def newlinerm(request):
    return HttpResponse("newline <br><br><a href='http://127.0.0.1:8000'><button>Back</button></a>")
def charcount(request):
    return HttpResponse("charcount <br><br><a href='http://127.0.0.1:8000'><button>Back</button></a>")
