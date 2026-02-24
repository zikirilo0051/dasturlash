def lift_tizimi(hozirgi_qavat, chaqiriqlar, yo_nalish="tepaga"):
    # Chaqiriqlarni takrorlanishdan tozalash va saralash
    chaqiriqlar = sorted(list(set(chaqiriqlar)))
    
    pastga_ketish = [q for q in chaqiriqlar if q < hozirgi_qavat]
    yuqoriga_chiqish = [q for q in chaqiriqlar if q > hozirgi_qavat]
    
    tartib = []

    if yo_nalish == "tepaga":
        # Avval yuqoridagilarni navbat bilan bajaradi
        # Keyin pastdagilarni eng yuqorisidan boshlab pastga qarab bajaradi
        tartib = yuqoriga_chiqish + sorted(pastga_ketish, reverse=True)
    else:
        # Avval pastdagilarni kamayish tartibida bajaradi
        # Keyin yuqoridagilarni o'sish tartibida bajaradi
        tartib = sorted(pastga_ketish, reverse=True) + yuqoriga_chiqish

    return tartib

# --- TEKSHIRISH ---
hozirgi = 7
chaqirilgan_qavatlar = [2, 9, 2] # 2-qavat ikki marta bosilsa ham bir marta boradi

# Natijani ko'ramiz
harakat_rejas? = lift_tizimi(hozirgi, chaqirilgan_qavatlar)

print(f"Lift hozirgi holati: {hozirgi}-qavat")
print(f"Kelgan chaqiriqlar: {chaqirilgan_qavatlar}")
print(f"LIFTNING HARAKAT TARTIBI: {harakat_rejas?}")

for qavat in harakat_rejas?:
    print(f"--- Lift {qavat}-qavatga yetib keldi va