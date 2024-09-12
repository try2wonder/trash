from bs4 import BeautifulSoup

with open('Beautiful Soup Documentation — Beautiful Soup 4.4.0 documentation.html', encoding='utf-8') as fp:
    soup = BeautifulSoup(fp, 'html.parser')

print(soup.prettify())