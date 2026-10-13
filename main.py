from datetime import datetime

choice = 1

while(choice != 0):
    print("================= Smart Till POS ==============")

    initialBalance = 2000000.00

    cashier = input("Enter your name: ")

    productName = input("Enter Product Name: ")

    unitPrice = int(input("Enter unit price: "))

    quantityReceived = int(input("Enter quantity Received: "))

    dateReceived = datetime.now()

    datePurchased = datetime.now()

    total = quantityReceived * unitPrice

    balance = initialBalance - total

    print("\n")

    print("============= Inventory ============")

    print(f"Cashier Name: {cashier} ")

    print(f"Product: {productName}")

    print(f"Unit Price: {quantityReceived}")

    print(f"Total : {total}")

    print(f"Balance: {balance}")

    print(f"Purchased on: {datePurchased}")

    print(f"Received on : {dateReceived}")

    print("\n")

    choice = int(input("Enter 1 to continue or 0 to continue: "))

