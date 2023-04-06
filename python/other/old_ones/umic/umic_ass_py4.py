import numpy as np

# a random normalized matrix of  20 * 20
X = np.random.normal(loc=0.0, scale=1.0, size=(20, 20))

# a numpy array of length 20 and data type int32
y = np.random.randint(10, size=20, dtype='int32')

# transpose of X
Xt = X.transpose()

# Xt * X
Xt_X = np.dot(Xt, X)

# inverse of Xt_X
inv_Xt_X = np.linalg.pinv(Xt_X)

# inverse of Xt_X * transpose of X
inv_Xt_X_Xt = np.dot(inv_Xt_X, Xt)

# theta = inverse of Xt_X * transpose of X * y
theta = np.dot(inv_Xt_X_Xt, y)

print(theta)

