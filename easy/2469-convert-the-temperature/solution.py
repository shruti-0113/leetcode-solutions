class Solution:
    def convertTemperature(self, celsius: float) -> List[float]:
        arr=[]
        kel=celsius+273.15
        arr.append(kel)
        fah=(celsius*1.80)+32.00
        arr.append(fah)
        return arr