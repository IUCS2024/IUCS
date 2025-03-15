VERİ TÜRLERİ

1 Tam sayılar (int)
1, 3, -8
2 Boolean (bool)
true, false
3 Ondalık (float)
3.14
4 karakter (str)
"metin", 'metin'
5 liste (list)
[3, 5]
6 demet (tuple)
(3,5)
7 kümeler (set)
{3,5}
8 Sözlük Dictionary (dict)
{"isim": "Ali", "yas": 19}

anahtar(key)'ler atanırken değişmez veri türleri kullanılır. 
str, float, int, bool kullanılır
list, tuple, set, dict kullanılmıyor

{"True": doğru}

1.
sayi = 7.83
yeni_s = int(sayi)
print(yeni_s) 
-> 7

2.
metin = "42"
print(int(metin))
->42

3.
metin = "sayi"
print(int(metin))
-> hata

4.
ikili = 1010
onluk = int(ikili, 2)

print(onluk)
-> 10

5.
sayi = 95
print(float(sayi))
->95.0


METİN

metin = "Nasılsınız ocAm be ya?"

N a s ı l s ı n ı z     o  c  A  m     b  e     y  a  ?
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21

x = metin[5]

print(metin[5])
-> s

print(metin[-1])
-> ?

sağ baştan -1'den başlarız (negatif indeksleme)
sol baştan 0'dan başlar

uzunluk = len(metin)
print(uzunluk)
->22

son_karakter = metin[uzunluk-1]

*indeks kullanarak içerik değişmiyor
metin[2] = "T"
->hata

yeni_metin = "Merhaba " + metin
print(yeni_metin)
-> Merhaba Nasılsınız ocAm be ya?

metin2 = Selam
3metin2 = metin2 * 3
print(3metin2)

->SelamSelamSelam


x = 1984893589
y = str(x)
print(y)
-> "1984893589"


metin = "Nasılsınız\nocAm\nbe\ya?"
print(metin)
->Nasılsınız
ocAm
be
ya?

metin1 = "Nasılsınız ocAm be ya?"
metin2 = "Nasılsınız,ocAm,be ya?"


.upper() uppercase:  NASILSINIZ OCAM BE YA?
.lower() lowercase:  nasılsınız ocam be ya?
.split() metni bölüyor
1. metin1.split() -> "Nasılsınız", "ocAm", "be","ya"
2. metin2.split(',') -> "Nasılsınız", "ocAm", "be ya?"
3. metin2.split(',',1) -> "Nasılsınız","ocam, be ya?"

.replace() belirttiğim parçayı başka bir metinle değiştirir
metin3 = metin1.replace("ocAm be ya?", "canlar?"); metin3
print(metin3)
-> Nasılsınız canlar

.find()
metin.find("a")
->1

metin.find("z")
-> 9

metin.find("Ö")
-> -1

isim = input("İsminiz nedir? ")
yas = int(input("yaşınızı girin: "))

dikdörtgen salonun boyutu
salon_kenar1 = int(input("1. duvarın ölçüsü?"))
salon_kenar2 = int(input("2. duvarın ölçüsü?"))

salon_total = salon_kenar1 * salon_kenar2
print("Bir duvarı ", salon_kenar1, " cm, diğer duvarı ", salon_kenar2, 
" cm olan salonunuz ", salon_total, " cm^2'dir.")

anne_yas = 44
baba_yas = 49

mesaj = "Annem {} yaşında ve babam da {} yaşındalar.".format(anne_yas, baba_yas)
print(mesaj)
-> Annem 44 yaşında ve babam da 49 yaşındalar.

KARŞILAŞTIRMA OPERATÖRLERİ
== eşitlik operatörü n çift eşittir işareti kullanılır
!= eşit değildir
> büyük
>= büyük eşit
< küçük
<= küçük eşit

MANTIK OPERATÖRLERİ
and
or
not

AİTLİK VE KİMLİK OPERATÖRLERİ

Boolean çıktı verir

AİTLİK
in: varlığı kontrol eder
not in: yokluğu kontrol eder

listem = [59,61,789,14,2]
print(59 in listem)
-> True

print(79 in listem)
-> False

print(59 not in listem)
-> False

print(79 not in listem)
-> True

KİMLİK
is: aynı nesne olduğunu kontrol
is not: aynı nesne olmadığını kontrol

a = [54,79,85]
b = [54,79,85]
c = [87,13]

print(a is b)
-> True

print(a is c)
-> False

print(a is not b)
-> False

print(a is not c)
-> True