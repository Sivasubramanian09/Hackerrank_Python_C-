"""
You are given an integer N followed by N email addresses. Your task is to print a list containing only valid email addresses in lexicographical order.


Valid email addresses must follow these rules:

It must have the username@websitename.extension format type.
The username can only contain letters, digits, dashes and underscores [a-z],[A-Z],[0-9].[_-].
The website name can only have letters and digits [a-z],[A-Z],[0-9],[-_].
The extension can only contain letters [a-z][A-Z].
The maximum length of the extension is 3."""

def fun(email):
    # using try block
    try:

        # splitting the name and url of the email adress
        username, url = email.split('@')
        website, extension = url.split('.')

    # raise error if the email is not valied
    except ValueError:
        return False

    # we are not replacing the - and _
    if username.replace('-', '').replace('_', '').isalnum() is False:
        return False

    # checking if all characters are alphabets and numerics
    elif website.isalnum() is False:
        return False

    # checking if the length is less than 3
    elif len(extension) > 3:
            return False
    elif extension.isalnum() is False:
            return False
    else:
        return True
            
def filter_mail(emails):
    return list(filter(fun, emails))

if __name__ == '__main__':
    n = int(input())
    emails = []
    for _ in range(n):
        emails.append(input())

filtered_emails = filter_mail(emails)
filtered_emails.sort()
print(filtered_emails)