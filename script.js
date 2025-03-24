const buttons = document.querySelectorAll("button");

for (let i = 0; i < buttons.length; i++) {
    buttons[i].addEventListener("click", () => {
        let hello_div = document.getElementById("hello_div");
        if (hello_div.style.visibility == "hidden") {
            hello_div.style.visibility = "visible";
        } else {
            hello_div.style.visibility = "hidden";
        }
    });
}
