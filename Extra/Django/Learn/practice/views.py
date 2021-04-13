from django.http import HttpResponse
from django.shortcuts import render
def home(request):
    return render(request,'index.html')

def analyze(request):

    text2=request.GET.get('text','default')
    punc_check=request.GET.get('punc','off')
    upper_check=request.GET.get('uppercase','off')
    clspace_check=request.GET.get('clspace','off')
    count_char_check=request.GET.get('count_char','off')

    analyze=text2
    if punc_check=="on":
        analyze=""
        punc_list='''!"#$%&'()*+,-./:;<=>?@[\]^_`{|}~'''
        for char in text2:
            if char not in punc_list:
                analyze=analyze+char

    if upper_check=="on":
        text2=analyze
        analyze=""            
        for char in text2:
            analyze=analyze+char.upper()

    if clspace_check=="on":
        text2=analyze
        analyze="" 

        for index,char in enumerate(text2):        
            if not(text2[index]==" " and text2[index+1]==" "):
                analyze=analyze+char


    if count_char_check=="on":
        count=0
        for char in analyze:
            count=count+1
        analyzed_text={'text':analyze,'char_num':count}
    else:
        analyzed_text={'text':analyze}

    return render(request,'anlayzed.html',analyzed_text)