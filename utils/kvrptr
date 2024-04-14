#!/usr/bin/env python3

from sys import argv
from re import compile as regex


USAGE = 'kvr2tal source.kvr[es|eo|tok]  # creates: source.tal'
LANGS = {
    'es': {
        'modes': ['2', 'c', 'r'],
        'opcodes': {
            'BRK': 'INT',
            'LIT': 'LIT',
            'INC': 'INC',
            'POP': 'RET',
            'NIP': 'COR',
            'SWP': 'CAM',
            'ROT': 'ROT',
            'DUP': 'DUP',
            'OVR': 'SOB',
            'EQU': 'IGU',
            'NEQ': 'NIG',
            'GTH': 'MAQ',
            'LTH': 'MEQ',
            'JMP': 'SAL',
            'JCN': 'SCN',
            'JSR': 'SRR',
            'STH': 'RES',
            'LDZ': 'CAC',
            'STZ': 'GUC',
            'LDR': 'CAR',
            'STR': 'GUR',
            'LDA': 'CAA',
            'STA': 'GUA',
            'DEI': 'DIE',
            'DEO': 'DIS',
            'ADD': 'SUM',
            'SUB': 'SUS',
            'MUL': 'MUL',
            'DIV': 'DIV',
            'AND': 'YNB',
            'ORA': 'ONB',
            'EOR': 'OEX',
            'SFT': 'DES'
        }
    },
    'eo': {
        'modes': ['2', 'k', 'r'],
        'opcodes': {
            'BRK': 'INT',
            'LIT': 'LIT',
            'INC': 'PGR',
            'POP': 'RET',
            'NIP': 'FOR',
            'SWP': 'ŜAĜ',
            'ROT': 'ROT',
            'DUP': 'DUP',
            'OVR': 'SUP',
            'EQU': 'EGA',
            'NEQ': 'NEG',
            'GTH': 'PGO',
            'LTH': 'MGO',
            'JMP': 'SAL',
            'JCN': 'SKN',
            'JSR': 'SRR',
            'STH': 'REZ',
            'LDZ': 'ŜAN',
            'STZ': 'KON',
            'LDR': 'ŜAR',
            'STR': 'KOR',
            'LDA': 'ŜAA',
            'STA': 'KOA',
            'DEI': 'END',
            'DEO': 'ELD',
            'ADD': 'ADI',
            'SUB': 'SUB',
            'MUL': 'MUL',
            'DIV': 'DIV',
            'AND': 'KBO',
            'ORA': 'ABO',
            'EOR': 'EKA',
            'SFT': 'ŜOV'
        }
    },
    'tok': {
        'modes': ['2', 'a', 'p'],
        'opcodes': {
            'BRK': 'PIN',
            'LIT': 'NAN',
            'INC': 'MUT',
            'POP': 'WEK',
            'NIP': 'WKP',
            'SWP': 'ANT',
            'ROT': 'SIK',
            'DUP': 'KIN',
            'OVR': 'KNP',
            'EQU': 'SAM',
            'NEQ': 'ALA',
            'GTH': 'SEW',
            'LTH': 'LIL',
            'JMP': 'TAW',
            'JCN': 'TWK',
            'JSR': 'TWP',
            'STH': 'POK',
            'LDZ': 'LKL',
            'STZ': 'STL',
            'LDR': 'LKP',
            'STR': 'STP',
            'LDA': 'LUK',
            'STA': 'SIT',
            'DEI': 'KUT',
            'DEO': 'TOK',
            'ADD': 'NSI',
            'SUB': 'NWE',
            'MUL': 'NKU',
            'DIV': 'NKI',
            'AND': 'LAL',
            'ORA': 'LAN',
            'EOR': 'LWA',
            'SFT': 'LTA'
        }
    }
}

def replace_opcodes(lang, source):
    opcodes = LANGS[lang]['opcodes']
    modes = LANGS[lang]['modes']
    _, k, r = modes
    for replacement, opcode in opcodes.items():
        pattern = regex(rf'\b{opcode}([{"".join(modes)}]*)\b')
        source = pattern.sub(
            lambda match: replacement + ''.join([
                'k' if mode == k else 
                'r' if mode == r else 
                mode for mode in match.group(1)]
            ), source
        )
    return source

def main():
    args_len = len(argv)
    if args_len < 2:
        print(USAGE)
    file_name = argv[1]
    with open(file_name, 'r') as file:
        source = file.read()
    if file_name.endswith('es'):
        result = replace_opcodes('es', source)
    elif file_name.endswith('eo'):
        result = replace_opcodes('eo', source)
    elif file_name.endswith('tok'):
        result = replace_opcodes('tok', source)
    else:
        print('file not recognized')

    out_name = file_name.split('.')[0] + '.tal'
    with open(out_name, 'w') as file:
        file.write(result)


if __name__ == '__main__':
    main()