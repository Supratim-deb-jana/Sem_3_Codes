class employee:
    @property
    def name(self):
        return self.ename
    @name.setter
    def name(self,value):
        self.ename=value
    
e=employee()    
e.name="Supratim"
print(e.name)