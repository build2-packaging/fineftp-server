# libfineftp-server - FTP server library for Windows and Unix flavors

This is a `build2` package for the
[`fineftp-server`](https://github.com/eclipse-ecal/fineftp-server)
C++ library. It provides a minimal FTP server for Windows and Unix flavors
that can be embedded into an application.


## Usage

To start using `libfineftp-server` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libfineftp-server ^1.6.0
```

Then import the library in your `buildfile`:

```
import libs = libfineftp-server%lib{fineftp-server}
```


## Importable targets

This package provides the following importable targets:

```
lib{fineftp-server}
```


## Configuration variables

This package provides no configuration variables.
