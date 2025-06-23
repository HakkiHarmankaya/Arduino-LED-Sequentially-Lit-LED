# 🔄 Arduino #5: Sıralı Yanan LED (Sağdan Sola & Soldan Sağa)

Bu projede, **8 adet LED'i sırasıyla** önce sağdan sola, ardından soldan sağa yakarak bir animasyon efekti elde ediyoruz.


🔗 [Tinkercad Tasarımına Göz At](https://www.tinkercad.com/things/9QSijQ0KZcZ?sharecode=nMJ-mIsbuPPD_gBbqIH4iGT_3NJBTl-wlhgAEI-b5tg)

---

## 🧰 Gerekli Malzemeler

- 8 adet **LED**
- 8 adet **direnç** (220Ω veya 330Ω)
- 1 adet **Arduino**
- 1 adet **breadboard**
- 17 adet **jumper kablo**

---

## ⚙️ Adım Adım Devre Kurulumu

### 🔹 Adım 1: Devreyi Kurun

- Breadboard üzerine **8 LED** yerleştirin.
- Her LED’in:
  - **Anot (uzun bacak)** → Arduino **D4 ~ D11 pinlerine**
  - **Katot (kısa bacak)** → Direnç → **GND**

---

### 🔹 Adım 2: Arduino Kodunu Yazın ve Yükleyin

Aşağıdaki kodu Arduino IDE'ye yapıştırın ve karta yükleyin:

```cpp
int led[] = {4, 5, 6, 7, 8, 9, 10, 11};

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(led[i], OUTPUT);
  }
}

void loop() {
  // Soldan sağa sıralı yanma
  for (int i = 11; i > 3; i--) {
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
    delay(100);
  }

  // Sağdan sola sıralı yanma
  for (int i = 4; i < 12; i++) {
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
    delay(100);
  }
}
