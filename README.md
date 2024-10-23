# Classical Encryption technique

## Techniques
1. Polyalphabetic Cipher \
   Ex: 
   ```
    key: deceptivedeceptivedeceptive
    plaintext: wearediscoveredsaveyourself
    ciphertext: ZICVTWQNGRZGVTWAVZHCQYGLMGJ
   ```

2. Vernam Cipher

 pi = ith binary digit of plaintext \
 ki = ith binary digit of key \
 ci = ith binary digit of ciphertext \
 ⊕ = exclusive@or (XOR) operation \

- Encryption:
    ```
        ci = pi ⊕ ki
    ```

- Decryption:
    ```
        pi = ci ⊕ ki
    ```

## How to run

- Compilation
```
    g++ main.cpp encryption_algorithms.cpp -o encrypt_decrypt
```

- Execution
```
    ./encrypt_decrypt
```
