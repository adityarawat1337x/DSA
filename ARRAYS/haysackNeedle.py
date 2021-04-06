
def strStr(haystack, needle):
    hay=len(haystack)
    ned=len(needle)
    sh=0
    sn=0
    flag=0
    if ned==0:
        return 0
    
    while sn < ned and sh < hay:
        if sn == 0 and haystack[sh] != needle[sn]:
            sh += 1
            continue
        if haystack[sh]==needle[sn]:
            sh+=1
            sn+=1
            flag=1
            continue
        else:                                                  # lall ll
            sh=sh-sn+1
            sn=0
            flag=0
    if flag==1 and sn==ned:
        return sh-ned
    else:
        return -1
            

print(strStr("mississippi","issip"))