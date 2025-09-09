const fs = require('fs');

fs.writeFile("input.txt", "hello from write file asynchronous", (err) => {
    if(err) throw err;

    fs.readFile("input.txt", "utf-8", (err, data) => {
        if(err) throw err;
        console.log("After write:", data);

        fs.appendFile("input.txt", " hello from append file", (err) => {
            if(err) throw err;

            fs.readFile("input.txt", "utf-8", (err, data) => {
                if(err) throw err;
                console.log("After append:", data);
            });
        });
    });
});
