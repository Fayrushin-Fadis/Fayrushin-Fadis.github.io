import random # Управляет генерацией случайных чисел
import string # Предоставляет константы для операций, связанных со строкой

YesOrNo = True # Генерировать новый пароль или выйти из программы
while YesOrNo == True:
    print('---------------------')
    print('| Генератор паролей |')
    print('---------------------')
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
    
    TimeWhile = 0 # Обнуление переменной цикла и очищение от старого пароля
    print('Сгенерированный пароль:', PASSWORD, '\n')
    YesOrNoCycle = input('Сгенерировать новый пароль? [1 (Yes), 2 (No)]: ')
    YesOrNoCycle = int(YesOrNoCycle)
    if YesOrNoCycle == 2:
        YesOrNo = False;
        '''
        Долго ломал голову, почему цикл не останавливается когда нужно, а окозалось,
        input возврощает строку, и я сравнивал строку с числом ...
        Решением было преобразовать строку в число.
        '''