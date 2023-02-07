# fineFTP Server

This project builds and defines the build2 package for the [fineFTP Server](https://github.com/eclipse-ecal/fineftp-server) library.

The packaging code is licensed under the MIT License, the upstream artifacts are licensed under the terms and conditions of fineFTP Server.

## Usage

You can simply add this package as dependency to your project by specifying it in your `manifest`:

```
depends: libfineftp-server ^1.3.4
```

Then just pick the targets that you need:

```
import libs  = libfineftp-server%lib{fineftp-server}
```
