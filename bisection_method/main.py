import bisection_method

bm = bisection_method.Bisection_method()
bm.set_x1(-10)
bm.set_x2(30)
bm.set_tol(0.000001)
bm.set_max_iter(10000)

eqn = '10+5*x'

root = bm.calculate(eqn)
print('root: ', root)