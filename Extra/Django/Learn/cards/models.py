from django.db import models

# Create your models here.
class cards(models.Model):
    img = models.ImageField(upload_to='media')
    title =models.CharField(max_length=40)
    des = models.TextField()