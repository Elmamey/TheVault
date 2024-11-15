
def create_substitution_cipher(key):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    cipher = {}
    for i in range(26):
        cipher[alphabet[i]] = key[i]
    return cipher


def encrypt(message, cipher):
    encrypted_message = ""
    for char in message:
        if char.isalpha():
            is_upper = char.isupper()
            char = char.lower()
            encrypted_char = cipher.get(char, char)
            if is_upper:
                encrypted_char = encrypted_char.upper()
            encrypted_message += encrypted_char
        else:
            encrypted_message += char
    return encrypted_message


def encode_message(message, cipher):
    reversed_message = message[::-1]
    encrypted_message = encrypt(reversed_message, cipher)
    return encrypted_message

scrambled_message = "?ujuoa ,yg bncq lyhhcX"


key = "xyzabcdefghijklmnopqrstuvw"
cipher = create_substitution_cipher(key)
decoded_message = encode_message(scrambled_message, cipher)[::-1]

print("All right! the challenge starts! Antonio wants you to decode this message: \n\n", decoded_message)
