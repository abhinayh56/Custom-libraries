class Bisection_method:
    def __init__(self):
        self.x1 = 0.0
        self.x2 = 0.0
        self.tol = 0.0
        self.max_iter = 0
    
    def set_x1(self, x1_):
        self.x1 = x1_
    
    def set_x2(self, x2_):
        self.x2 = x2_

    def set_tol(self, tol_):
        self.tol = tol_
    
    def set_max_iter(self, max_iter_):
        self.max_iter = max_iter_
    
    def sign(self, x):
        if(x>0):
            return 1
        elif(x<0):
            return -1
        else:
            return 0
    
    def fun(self, x):
        return 5.0*x + 10.0

    def calculate(self, eqn):
        n = 1
        while (n<=self.max_iter):            
            x12 = 0.5*(self.x1 + self.x2)
            print('n: ',n, '| ' , round(self.x1,4), round(self.x2,4), round(x12,4))
            if((self.fun(x12)==0) or abs(0.5*(self.x2-self.x1))<self.tol):
                return x12
            else:
                if(self.sign(self.fun(self.x1))==self.sign(self.fun(x12))):
                    self.x1 = x12
                else:
                    self.x2 = x12
            n = n + 1