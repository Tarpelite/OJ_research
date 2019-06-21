from django.db import models

# Create your models here.

class record(models.Model):
    author_name = models.CharField(max_length=255)
    code = models.TextField()
    A_score = models.FloatField(default=0.0)
    B_score = models.FloatField(default=0.0)
    C_score = models.FloatField(default=0.0)
    ABC_score = models.FloatField(default=0.0)

class Qustion(models.Model):
    title = models.CharField(max_length=255)
    description = models.TextField()


