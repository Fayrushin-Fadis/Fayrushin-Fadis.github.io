import tkinter # Стандартная библеотека GUI
import random # Управляет генерацией случайных чисел
import string # Предоставляет константы для операций, связанных со строкой

# Функция для генерации пароля
def set():
    PASSWORD = "" # Итоговая переменная хранящая пароль
    TimeWhile = 1 # Переменная счетчик циклов и длина пароля
    while TimeWhile < 10:   
        # Генерация рандомной цифры и перевод его в строку
        NumTime = random.random()
        NumTime *= 10
        NumTime = int(NumTime)
        NumTime = str(NumTime)
        
        # Генерация рандомной буквы
        AsciiTime = random.choice(string.ascii_letters) # Генерирует случайную английскую буквы случайного регистра
        
        # Суммирует число (типа strin) и букву
        VarTime = AsciiTime + NumTime # Хранит и обновляет значение каждой итерации цикла
    
        # Генерация пароля
        PASSWORD = PASSWORD + VarTime
        
        TimeWhile = TimeWhile + 1

        var.set(PASSWORD)

root = tkinter.Tk() # Объявляю окно
root.geometry("300x150") # Присваиваю размер окну
frame = tkinter.Frame(root) # Виджет Frame (рамка) предназначен для организации виджетов внутри окна
frame.pack() # Позволяет фреймам и их содержимому настраиваться по мере изменения окна
root.title("generator-password") # Загаловок окна

var = tkinter.StringVar()
var.set("Password")

label = tkinter.Label(frame, textvariable = var, width="20", height="3") # Объявление строки


ent = tkinter.Entry(root,width=20,bd=3)

ent = label
ent.pack()


button = tkinter.Button(frame, text = "Generate", command = set, width="20", height="3") # Объявление кнопки
button.pack() # Вывод кнопки

root.mainloop() # Ожидание ввода, должен стоят тогда, когда ожидается ввод пользователя или конец программы
