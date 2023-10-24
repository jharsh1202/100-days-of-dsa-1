#https://practice.geeksforgeeks.org/problems/pattern-searching5231/1

def searchPattern(text, pattern):
    for start in range(len(text)):
        pattern_index = 0
        for text_index in range(start, len(text)):
            if text[text_index] == pattern[pattern_index]:
                if pattern_index == len(pattern) - 1:
                    return True
                pattern_index += 1
            else:
                break
    return False

        
            
