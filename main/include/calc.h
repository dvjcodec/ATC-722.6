int readTPSVoltage(int voltage);
int readBoostVoltage(int voltage);
int readExPresVoltage(int voltage);
int readBatVoltage(int voltage);
int readMap(const int theMap[14][12], int x, int y);
int readTempMap(const int theMap[23][2], int y);
int readTempMapInverted(const int theMap[14][2], int y);
int readPercentualMap(const int theMap[14][12], int x, int y);
int readGearMap(const int theMap[14][6], int x, int y);
int pressureNormalization(int givenPressure);
unsigned int hexToDec(String hexString);
String decToHex(byte decValue, byte desiredStringLength);
extern int initBVoltage;