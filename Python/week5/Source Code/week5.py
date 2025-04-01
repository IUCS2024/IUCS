"""1. soru"""
notu = float(input("Notu girin: "))
if notu >= 50:
	print("geçer")
else:
	print("kalır")


#2. soru
sayi = float(input("sayi girin: "))
if sayi < 0:
	print("negatif")
elif sayi > 0:
	print("pozitif")
else:
	print("sıfır")
  
#3. soru
artık yıl
yil = int(input("yılı girin: "))
if (yil % 4 == 0 and yil % 100 != 0) or (yil % 400 == 0):
	print(f"{yil} bir artık yıldır.")
else:
	print(f"{yil} bir artık yıl değildir.")
  
#4. soru, kullanıcı adı: admin ve şifre: 1234
kullanici_adi = input("kullanıcı adı girin: ")
sifre = input("şifre girin: ")

if kullanici_adi == "admin":
	if sifre == "1234":
  	print("giriş yaptınız.")
  else:
  	print("giriş başarısız")
else:
	print("giriş başarısız")

"""
5. soru

kullanıcıdan aylık bütçesini (gelirini) alın. 
gıda, ulaşım, kira, eğlence harcamalarını alın.
bütçenin ne kadarını harcadığını verin toplam hesaplayarak
(bütçenizde ... kaldı, bütçeniz tükendi, bütçenizi
... aştınız gibi)
gıda harcamanız bütçenizin %30'u gibi kontroller de verebilirsiniz

"""

"""
6. soru: kredi kartı başvuru değerlendirme
yaş: 18'den büyük
aylık gelir: min 3000
kredi skoru: 600
mevcut borç: aylık gelirin %50'sinden az olmalı

"""
#bilgileri al
yas = int(input("yaşınız: "))
aylik_gelir = float(input("aylık gelir: "))
kredi_skoru = int(input("kredi skoru: "))
borc = float(input("mevcut borcunuz: "))

#başvuru değerlendirme
if yas < 18:
	print("yaşınızdan dolayı veremiyoruz")
elif aylik_gelir < 3000:
	print("gelirinizden dolayı veremiyoruz")
elif kredi_skoru < 600:
	print("kredi skorunuzdan dolayı veremiyoruz")
elif borc > aylik_gelir*0.5:
	print("borcunuzdan dolayı veremiyoruz")
else:
    print("kredi kartınız onaylandı")
    
    
"""
7. soru ÖDEV
sağlık durumu
BKİ hesaplama beden kitle indeksi
bki = kilo/(boy/100)^2
0-18.4 zayıf
18.5-24.9 normal
25-29.9 fazla kilolu
30 ve üzeri obez

kalp atış hızı
60-100 bpm normal
100 ve üzeri yüksek

ekstra uyarı olarak
18'den küçükse gençken dikkatli olun
65 ve üstüyse sağlık kontrollerinizi atlamayın
gibi uyarılar bulunabilir

"""  
#8. soru beden kitle indeksi

bki = float(input("beden kitle indeksinizi girin: "))
match True:
	case bki < 18.5:
  	print("zayıf")
  case 18.5 <= bki <25:
  	print("normal")
  case 25 <= bki < 30:
  	print("kilolu")
  case _:
		print("obez")
    
#9 kullanıcı rolü belirleme
rol = input("rolünüzü girin (admin, kullanici, misafir): ").lower()

match rol:
	case "admin":
  	print("admin paneline hoşgeldiniz")
  case "kullanici":
    print("kullanıcı paneline hoşgeldiniz")
  case "misafir":
  	print("misafir paneline hoşgeldiniz")
	case _:
  	print("geçersiz giriş")
    
"""
10. indirimli fiyat hesaplama match case ÖDEV
kullanıcıdan kategori (lower kullanmayı unutmayın) 
ve fiyat alarak ürünün indirimli fiyatı hesaplanacak

elektronik: %10 indirim
giyim: %20 indirim
gıda: %56 indirim
diğer: %0 indirim

"""

#11. 1'den 10'a sayılar toplamı for ile

toplam = 0
for i in range(1,11):
	toplam += i
  
print(f"1'den 10'a kadar sayıların toplamı: {toplam}")

#12. 1'den 20'ye (20 dahil) kadar çift sayılar
for sayi in range(1,21):
	if sayi % 2 == 0:
  print(f"{sayi} çift sayıdır)

"""
13. oyun: kullanıcıdan 10 pozitif tam sayı istenir,
sayılar toplanacak
çıkmak için 0 girin denir. (break kullanılır)
negatif sayı girildiğinde atlanır uyarısı vererek 
başa dönülür (continue ile)
"""
toplam = 0
print("pozitif tam sayıları girin (çıkmak için 0): ")

for i in range(10):
	sayi int(input(f"{i+1}. sayıyı girin: "))
  
  if sayi == 0:
  	print("programdan çıkıldı")
  	break
	if sayi < 0:
  	print("pozitif sayı girin")
    continue
    
  toplam += sayi
  print(f"güncel toplam: {toplam}")

print(f"girdiğiniz pozitif sayıların toplamı: {toplam}")

"""
14 ÖDEV for ile ilk n fibonacci sayısı ÖDEV
kendinden önceki iki sayının toplamı
ilk elemanlar 0,1 olarak kabul edilir
dizi oluştur, ilk elemanlar 0 ve 1
fibonacci = [0, 1]
eleman eklemek istersem
yeni_sayi değişken olsun
fibonacci.append(yeni_sayi)
"""











