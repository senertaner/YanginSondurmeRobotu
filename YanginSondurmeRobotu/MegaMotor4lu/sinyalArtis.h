﻿int sinyalArtis(String dizi[])
{
	int okunandeger = 0;
	int oncekideger = 0;
	int buyuk = 0;
	int kucuk = 0;

	for (int i = 0; i < 10; i++)
	{
		if (i > 0) {
			oncekideger = dizi[i - 1].toInt();
			Serial.print("oncekideger : ");
			Serial.println(oncekideger);
		}

		okunandeger = dizi[i].toInt();
		//Serial.print("okunandeger : "); 
		//Serial.println(okunandeger);

		if (oncekideger != 0) {
			if (okunandeger > oncekideger) {
				buyuk++;
			}
			else //TODO esit olma ihtimalinide ekle
			{
				kucuk++;
			}

		}

		Serial.print("buyuk : ");
		Serial.println(buyuk);

		Serial.print("kucuk : ");
		Serial.println(kucuk);
	}
	//while(1); // Sonsuz döngü, program kilitlendi.

	if (buyuk > kucuk)
		return 1;
	else
		return 0;
}

/*
  String stringArray[10];
  int i = 0;

  while(queue.count() > 0){
	stringArray[i] = queue.pop();

	Serial.print(i);
	Serial.print("String:");
	Serial.print(stringArray[i]);

	i++;
  }

  Serial.println(sinyalArtis(stringArray));
*/