const initialBalance = 2000000;

const nameInput = document.getElementById("name");

const productNameInput = document.getElementById("productName");

const unitPriceInput = document.getElementById("unitPrice");

const receivedQuantityInput = document.getElementById("receivedQuantity");

const button = document.getElementById("submitButton");







button.addEventListener('click', (event) => {

    event.preventDefault();

    const name = nameInput.value;

    const productName = productNameInput.value;

    const unitPrice = unitPriceInput.value;

    const receivedQuantity = receivedQuantityInput.value;

    const total = unitPrice * receivedQuantity;

    const balance = initialBalance - total;

    document.getElementById("displayName").innerHTML = name;

    document.getElementById("displayProduct").innerHTML = productName;

    document.getElementById("displayQuantity").innerHTML = receivedQuantity;
    
    document.getElementById("displayUnitPrice").innerHTML = unitPrice;

    document.getElementById("displayTotal").innerHTML = total;

    document.getElementById("displayBalance").innerHTML = balance ;
    

})





