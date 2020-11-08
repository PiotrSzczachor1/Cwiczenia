weight = float(input("Podaj swoja wage w kilogramach : "))
height = float(input("Podaj swoj wzrtost w centymetrach: "))
age = int(input("Podaj swoj wiek: "))
sex = input("Podaj swoja plec (mezczyzna 'm', kobieta 'k'): ")

if sex == 'k':
    print("Podaj typ swojej aktywnosci: ")
    print("1 - Praca siedząca, brak dodatkowej aktywności fizycznej")
    print("2 - Praca niefizyczna, mało aktywny tryb życia")
    print("3 - Lekka praca fizyczna,  regularne ćwiczenia 3-4 razy (ok. 5h) w tygodniu")
    print("4 - Praca fizyczna, regularne ćwiczenia od 5 razy (ok. 7h) w tygodniu")
    print("5 - Praca fizyczna ciężka, regularne ćwiczenia 7 razy w tygodniu")
    active = int(input("Wybierz 1,2,3,4,5 lub 6 sugerujac sie powyzszym schematem: "))
    if active == 1:
        calories = (10 * weight + 6.25 * height - 5 * age - 161) * 1.2
        print("Twoje dzienne zapotrzebowanie kaloryczne to: {}", calories)
    elif active == 2:
        calories = (10 * weight + 6.25 * height - 5 * age - 161) * 1.4
        print("Twoje dzienne zapotrzebowanie kaloryczne to: {}", calories)
    elif active == 3:
        calories = (10 * weight + 6.25 * height - 5 * age - 161) * 1.6
        print("Twoje dzienne zapotrzebowanie kaloryczne to: {}", calories)
    elif active == 4:
        calories = (10 * weight + 6.25 * height - 5 * age - 161) * 1.8
        print("Twoje dzienne zapotrzebowanie kaloryczne to: {}", calories)
    elif active == 5:
        calories = (10 * weight + 6.25 * height - 5 * age - 161) * 2.0
        print("Twoje dzienne zapotrzebowanie kaloryczne to: {}", calories)
elif sex == 'm':
    print("Podaj typ swojej aktywnosci: ")
    print("1 - Praca siedząca, brak dodatkowej aktywności fizycznej")
    print("2 - Praca niefizyczna, mało aktywny tryb życia")
    print("3 - Lekka praca fizyczna,  regularne ćwiczenia 3-4 razy (ok. 5h) w tygodniu")
    print("4 - Praca fizyczna, regularne ćwiczenia od 5 razy (ok. 7h) w tygodniu")
    print("5 - Praca fizyczna ciężka, regularne ćwiczenia 7 razy w tygodniu")
    active = int(input("Wybierz 1,2,3,4,5 lub 6 sugerujac sie powyzszym schematem: "))
    if active == 1:
        calories = (10 * weight + 6.25 * height - 5 * age + 5) * 1.2
        print("Twoje dzienne zapotrzebowanie kaloryczne to: {}", calories)
    elif active == 2:
        calories = (10 * weight + 6.25 * height - 5 * age + 5) * 1.4
        print("Twoje dzienne zapotrzebowanie kaloryczne to: {}", calories)
    elif active == 3:
        calories = (10 * weight + 6.25 * height - 5 * age + 5) * 1.6
        print("Twoje dzienne zapotrzebowanie kaloryczne to: {}", calories)
    elif active == 4:
        calories = (10 * weight + 6.25 * height - 5 * age + 5) * 1.8
        print("Twoje dzienne zapotrzebowanie kaloryczne to: {}", calories)
    elif active == 5:
        calories = (10 * weight + 6.25 * height - 5 * age + 5) * 2.0
        print("Twoje dzienne zapotrzebowanie kaloryczne to: {}", calories)

BMI = (weigt/(height*2))*100
print("Twoje BMI to: ", BMI)
