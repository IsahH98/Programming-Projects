# Code Ciphers


Here are the instructions on how to use and understand the provided code for encrypting and decrypting messages using three different ciphers: Vigenere, Vernam, and Caesar.

1. Vigenere Cipher:
   - To encrypt a message using the Vigenere cipher, call the `vigenere_encrypt()` function with the plaintext and a key as arguments. For example:
     ```python
     plaintext = "Hello, friend! How are you?"
     key = "KEY"
     ciphertext = vigenere_encrypt(plaintext, key)
     print("Encrypted message:", ciphertext)
     ```
   - To decrypt the encrypted message, call the `vigenere_decrypt()` function with the ciphertext and the same key used for encryption. For example:
     ```python
     decrypted_text = vigenere_decrypt(ciphertext, key)
     print("Decrypted message:", decrypted_text)
     ```

2. Vernam Cipher:
   - To encrypt a message using the Vernam cipher, call the `vernam_encrypt()` function with the plaintext and a key as arguments. For example:
     ```python
     plaintext = "Hello, friend! Great work on this code"
     key = "SECRETKEY"
     ciphertext = vernam_encrypt(plaintext, key)
     print("Encrypted message:", ciphertext)
     ```
   - To decrypt the encrypted message, call the `vernam_decrypt()` function with the ciphertext and the same key used for encryption. For example:
     ```python
     decrypted_text = vernam_decrypt(ciphertext, key)
     print("Decrypted message:", decrypted_text)
     ```

3. Caesar Cipher:
   - To encrypt a message using the Caesar cipher, call the `caesar_encrypt()` function with the plaintext and a shift value as arguments. For example:
     ```python
     plaintext = "Hello, friend! my name is Bob and i am the best coder ever"
     shift = 3
     ciphertext = caesar_encrypt(plaintext, shift)
     print("Encrypted message:", ciphertext)
     ```
   - To decrypt the encrypted message, call the `caesar_decrypt()` function with the ciphertext and the same shift value used for encryption. For example:
     ```python
     decrypted_text = caesar_decrypt(ciphertext, shift)
     print("Decrypted message:", decrypted_text)
     ```

Note:
- The provided functions only handle uppercase and lowercase letters. Any non-alphabetic characters in the plaintext will remain unchanged in the ciphertext.
- Make sure to provide the correct key or shift value used during encryption for successful decryption.
- Feel free to modify the example plaintexts, keys, and shift values to encrypt and decrypt your own messages using the respective ciphers.

