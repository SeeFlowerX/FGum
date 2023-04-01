function main() {
    Java.perform(function () {
        Java.enumerateClassLoaders({
            onMatch: function(loader) {
                let msg = `[loader]:${loader}`;
                console.log(msg);
                Java.use("com.test.fgum.MainActivity").update_text(msg);
            },
            onComplete: function() {
                let msg = `find loader end`;
                console.log(msg);
                Java.use("com.test.fgum.MainActivity").update_text(msg);
            }
        });
    })
}

setImmediate(main);