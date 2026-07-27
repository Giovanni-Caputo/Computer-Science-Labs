def valida_senha(senha: str) -> bool:
    return len(senha) >= 8 and any(c.isdigit() for c in senha) and any(c.isupper() for c in senha)

print(valida_senha("Abc12345"))
