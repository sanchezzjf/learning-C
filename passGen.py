import random
import string

chars = string.ascii_lowercase + string.ascii_uppercase + string.digits


paswd = ''.join(random.choice(chars) for i in range(10))

print(paswd)