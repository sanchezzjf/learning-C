import string

def is_lower(char):
    if char in string.ascii_lowercase:
        return True
    return False

def is_upper(char):
    if char in string.ascii_uppercase:
        return True
    return False

def is_num(char):
    if char in string.digits:
        return True
    return False

def is_sp_char(char):
    if char in string.punctuation:
        return True
    return False