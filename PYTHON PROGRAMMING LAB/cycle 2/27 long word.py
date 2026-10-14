word_list=input("enter a list of word(comma-seprated):").split(',')
long_len=0
for word in word_list:
    word=word.strip()
    curr_len=len(word)
    if curr_len>long_len:
        long_len=curr_len
        long_word=word
print(f"Longest word: {long_word} with length {long_len}")
