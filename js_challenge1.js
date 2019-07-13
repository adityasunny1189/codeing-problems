//challenge one

const mobile_price = 10000;

const spending_threshold = 100000;

const mobile_accesory_price = 100;

const tax = 0.8;

var bank_balence = 200000;

var total_spending = 0;

while (total_spending < spending_threshold)
 {
    total_spending = total_spending + mobile_accesory_price +mobile_price;
 }

total_spending = total_spending + (tax * total_spending / 100);

if(total_spending < bank_balence)
{
    if(total_spending < spending_threshold)
    {
        console.log('gud purchase');
    }
    else
    {
        console.log('bad purchase');
    }
}
else
{
    console.log('baagh idher se bikhari');
}

bank_balence = bank_balence - total_spending;

console.log(total_spending);

console.log(bank_balence);



